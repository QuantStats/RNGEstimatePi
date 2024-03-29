# RNGEstimatePi

A classical statistical approach to estimate the value of the constant <a href="https://www.codecogs.com/eqnedit.php?latex=$\pi$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$\pi$" title="$\pi$" /></a>, implemented in `cpp`, see the file `rng_pi.cpp` for details.

The main implementation approach is based on the inequality,
<a href="https://www.codecogs.com/eqnedit.php?latex=$x_1^2&plus;x_2^2<=1$,&space;$\,x_1\in[0,\,1]$,&space;$\,x_2\in[0,\,1]$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$x_1^2&plus;x_2^2<=1$,&space;$\,x_1\in[0,\,1]$,&space;$\,x_2\in[0,\,1]$" title="$x_1^2+x_2^2<=1$, $\,x_1\in[0,\,1]$, $\,x_2\in[0,\,1]$" /></a>.

The area the positive quadrant of the circle is estimated through random number generation (rng). The estimated area is then multipled by 4 to obtain an estimate of <a href="https://www.codecogs.com/eqnedit.php?latex=$\pi$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$\pi$" title="$\pi$" /></a>.

Console output:
![Console](https://github.com/QuantStats/RNGEstimatePi/blob/master/rng_pi_estimate.PNG)
