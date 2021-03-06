#ifndef _COMPLEX_H
# include <math/complex.h>

/* Return the complex inverse hyperbolic sine of finite nonzero Z,
   with the imaginary part of the result subtracted from pi/2 if ADJ
   is nonzero.  */
extern complex float __kernel_casinhf (complex float z, int adj);
extern complex double __kernel_casinh (complex double z, int adj);
extern complex long double __kernel_casinhl (complex long double z, int adj);

#endif
