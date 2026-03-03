#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;

	/* Affectation des types pour les débuts et les fins de processus. */
	clock_t ti_start, ti_build, ti_process, ti_reduce;

	/*
	*répartition des différents "marqueurs".
	*Sert à séparer les prises de mesures.
	*/
	ti_start = clock();

    build_dataset();
	ti_build = clock();

    process_dataset();
	ti_process = clock();

    checksum = reduce_checksum();
	ti_reduce = clock();

    if (checksum == 0ul)
        printf("impossible\n");

		if (checksum !=0ul)
			{
			printf("TOTAL seconds: %6f\n", 
				(double)(ti_reduce - ti_start) / CLOCKS_PER_SEC);
			printf("BUILD_DATA seconds: %6f\n", 
				(double)(ti_build - ti_start) / CLOCKS_PER_SEC);
			printf("PROCESS seconds: %6f\n", 
				(double)(ti_process - ti_build) / CLOCKS_PER_SEC);
			printf("REDUCE seconds: %6f\n", 
				(double)(ti_reduce - ti_process) / CLOCKS_PER_SEC);
			}

    /* Required output (exact format, no extra lines):
     * TOTAL seconds: <float>
     * BUILD_DATA seconds: <float>
     * PROCESS seconds: <float>
     * REDUCE seconds: <float>
     */

    return 0;
}
