# RNGEstimatePi

A classicial statistical approach to estimate the value of the constant <a href="https://www.codecogs.com/eqnedit.php?latex=$\pi$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$\pi$" title="$\pi$" /></a>, *pi* implemented in `cpp`, see the file `rng_pi.cpp`.

The main implementation approach is based on the inequality,
$x_1^2+x_2^2<=1$, $\,x_1\in(0,\,1)$, $\,x_2\in(0,\,1)$.

The area the positive quadrant of the circle is estimated through random number generation (rng). The estimated area is then multipled by 4 to obtain an estimate of the value <a href="https://www.codecogs.com/eqnedit.php?latex=$\pi$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$\pi$".
