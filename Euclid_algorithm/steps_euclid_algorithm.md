## Steps of Euclid's Algorithm
Propostion: Given two positive integers **m** and **n**, find their greatest common divisor, that is, the largest positive integer that evenly divides both **m** and **n**.

Steps:
1. Divide **m** by **n** and let **r** be the remainder (0 <= r < n)
2. If **r = 0**, the algorithm terminates, **n** is the answer.
3. Set **m <- n**, **n <- r**, and go back to step 1.

To remember it...

1. Find remainder
2. Is it zero?
3. Reduce
