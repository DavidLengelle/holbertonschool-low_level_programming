# Energy Efficiency Analysis

## Measurement Methodology
To ensure reliable performance data, I used the clock() function from the <time.h> library. This function measures the CPU time used by algorithmic phases, allowing us to determine the system's computational effort. 

For the first experiment, I executed each algorithm (naive and single-pass) three times to obtain an arithmetic mean and minimize the impact of transient background processes. For the second experiment, I segmented the measurements using clock_t checkpoints placed precisely before and after each BUILD, PROCESS, and REDUCE function. The raw ticks were then converted to seconds using the constant CLOCKS_PER_SEC. This measurement protocol maintains a precision of six decimal places to meet the required technical specifications.

## Observed Performance Differences
There is a significant difference between the two measurements. The naive algorithm recorded an average execution time of 0.644946 seconds, while the single-pass algorithm recorded an average of 0.000024 seconds. 

This makes the single-pass algorithm approximately 26,872 times faster. These results perfectly illustrate the theoretical impact of algorithmic complexity: 
* The naive version operates in O(n^2), performing approximately 1.25 billion operations for 50,000 elements.
* The single-pass version operates in O(n), performing only 50,000 operations for the same dataset. 

Measurements of the second program showed that the BUILD phase consumed the majority of the total time (e.g., 0.000317 seconds), identifying it as the main bottleneck for potential optimization.

## Relation Between Runtime and Energy Consumption
There is a direct and linear correlation between recorded execution time and the software's environmental footprint. Each CPU cycle consumes electrical energy; therefore, an algorithm that runs longer keeps the processor in a high-power state for a longer period. 

According to our measurements, the O(n^2) algorithm consumes significantly more energy to perform the same task as the O(n) version. In a large-scale environment, such as a data center processing millions of requests, using the naive implementation would result in unnecessary heat generation and increased cooling requirements. Optimizing for "green code" is not just about speed; it is a strategic necessity to minimize the carbon footprint by reducing the energy required per unit of work.

## Limitations of the Experiment
While the results are conclusive, several limitations must be considered:
1. CPU Time vs. Wall-Clock Time: The clock() function measures CPU time, not actual elapsed time. It does not account for I/O waiting times or system latency.
2. Hardware Optimization: Modern processor features, such as branch prediction and hardware caching, can skew results for such specific datasets, making the environment less representative of high-performance computing at scale.
3. Scale: The fixed dataset size does not show the exponential degradation of O(n^2) when n reaches millions of entries.

## Practical Engineering Takeaway
The main lesson from this experiment is that the choice of algorithm is the most decisive factor in software efficiency, far surpassing micro-optimizations. As developers, it is our responsibility to prioritize optimal code structures from the design phase. A "fast" machine cannot compensate for a "slow" algorithm. These exercises demonstrate that performance-driven programming is intrinsically linked to sustainable development practices: efficient code is environmentally friendly code.