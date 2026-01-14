# Math Basics — Notes

## Modular Arithmetic
- (a + b) % m
- (a - b + m) % m
- (a * b) % m
- Fast exponentiation: O(log n)

## GCD / LCM
- gcd(a, b) using Euclid
- lcm(a, b) = a / gcd(a, b) * b

## Prefix Sums
- 1D prefix: prefix[i] = sum(0..i)
- 2D prefix: prefix[i][j] = sum over rectangle

## Useful Tricks
- Avoid overflow: use long long
- Reduce early when multiplying mod
