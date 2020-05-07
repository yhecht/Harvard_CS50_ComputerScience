// Yannique Hecht
// HARVARD CS50
// PROGRAMMERS MANUAL

// C Standard Library & CS50 Library


// assert.h
assert - abort the program if assertion is false
assert_perror - test errnum and abort



// complex.h
cabs - absolute value of a complex number
cabsf - absolute value of a complex number
cabsl - absolute value of a complex number
cacos - complex arc cosine
cacosf - complex arc cosine
cacosh - complex arc hyperbolic cosine
cacoshf - complex arc hyperbolic cosine
cacoshl - complex arc hyperbolic cosine
cacosl - complex arc cosine
carg - calculate the complex argument
cargf - calculate the complex argument
cargl - calculate the complex argument
casin - complex arc sine
casinf - complex arc sine
casinh - complex arc sine hyperbolic
casinhf - complex arc sine hyperbolic
casinhl - complex arc sine hyperbolic
casinl - complex arc sine
catan - complex arc tangents
catanf - complex arc tangents
catanh - complex arc tangents hyperbolic
catanhf - complex arc tangents hyperbolic
catanhl - complex arc tangents hyperbolic
catanl - complex arc tangents
ccos - complex cosine function
ccosf - complex cosine function
ccosh - complex hyperbolic cosine
ccoshf - complex hyperbolic cosine
ccoshl - complex hyperbolic cosine
ccosl - complex cosine function
cexp - complex exponential function
cexp2 - base-2 exponent of a complex number
cexp2f - base-2 exponent of a complex number
cexp2l - base-2 exponent of a complex number
cexpf - complex exponential function
cexpl - complex exponential function
cimag - get imaginary part of a complex number
cimagf - get imaginary part of a complex number
cimagl - get imaginary part of a complex number
clog - natural logarithm of a complex number
clog10 - base-10 logarithm of a complex number
clog10f - base-10 logarithm of a complex number
clog10l - base-10 logarithm of a complex number
clog2 - base-2 logarithm of a complex number
clog2f - base-2 logarithm of a complex number
clog2l - base-2 logarithm of a complex number
clogf - natural logarithm of a complex number
clogl - natural logarithm of a complex number
complex - basics of complex mathematics
conj - calculate the complex conjugate
conjf - calculate the complex conjugate
conjl - calculate the complex conjugate
cpow - complex power function
cpowf - complex power function
cpowl - complex power function
cproj - project into Riemann Sphere
cprojf - project into Riemann Sphere
cprojl - project into Riemann Sphere
creal - get real part of a complex number
crealf - get real part of a complex number
creall - get real part of a complex number
csin - complex sine function
csinf - complex sine function
csinh - complex hyperbolic sine
csinhf - complex hyperbolic sine
csinhl - complex hyperbolic sine
csinl - complex sine function
csqrt - complex square root
csqrtf - complex square root
csqrtl - complex square root
ctan - complex tangent function
ctanf - complex tangent function
ctanh - complex hyperbolic tangent
ctanhf - complex hyperbolic tangent
ctanhl - complex hyperbolic tangent
ctanl - complex tangent function



// cs50.h
get_char - prompts user for a line of text from stdin and returns the equivalent char
get_double - prompts user for a line of text from stdin and returns the equivalent double
get_float - prompts user for a line of text from stdin and returns the equivalent float
get_int - prompts user for a line of text from stdin and returns the equivalent int
get_long - prompts user for a line of text from stdin and returns the equivalent long
get_long_long - prompts user for a line of text from stdin and returns the equivalent long long
get_string - prompts user for a line of text from stdin and returns it as a string



// ctype.h
isalnum - character classification functions
isalnum_l - character classification functions
isalpha - character classification functions
isalpha_l - character classification functions
isascii - character classification functions
isascii_l - character classification functions
isblank - character classification functions
isblank_l - character classification functions
iscntrl - character classification functions
iscntrl_l - character classification functions
isdigit - character classification functions
isdigit_l - character classification functions
isgraph - character classification functions
isgraph_l - character classification functions
islower - character classification functions
islower_l - character classification functions
isprint - character classification functions
isprint_l - character classification functions
ispunct - character classification functions
ispunct_l - character classification functions
isspace - character classification functions
isspace_l - character classification functions
isupper - character classification functions
isupper_l - character classification functions
isxdigit - character classification functions
isxdigit_l - character classification functions
toascii - convert character to ASCII
tolower - convert uppercase or lowercase
tolower_l - convert uppercase or lowercase
toupper - convert uppercase or lowercase
toupper_l - convert uppercase or lowercase



// errno.h
errno - number of last error
program_invocation_name - obtain name used to invoke calling program
program_invocation_short_name - obtain name used to invoke calling program



// fenv.h
feclearexcept - floating-point rounding and exception handling
fedisableexcept - floating-point rounding and exception handling
feenableexcept - floating-point rounding and exception handling
fegetenv - floating-point rounding and exception handling
fegetexcept - floating-point rounding and exception handling
fegetexceptflag - floating-point rounding and exception handling
fegetround - floating-point rounding and exception handling
feholdexcept - floating-point rounding and exception handling
fenv - floating-point rounding and exception handling
feraiseexcept - floating-point rounding and exception handling
fesetenv - floating-point rounding and exception handling
fesetexceptflag - floating-point rounding and exception handling
fesetround - floating-point rounding and exception handling
fetestexcept - floating-point rounding and exception handling
feupdateenv - floating-point rounding and exception handling



// inttypes.h
strtoimax - convert string to integer
strtoumax - convert string to integer



// limits.h
MB_LEN_MAX - maximum multibyte length of a character across all locales
realpath - return the canonicalized absolute pathname



// locale.h
duplocale - duplicate a locale object
freelocale - create, modify, and free a locale object
locale - description of multilanguage support
localeconv - get numeric formatting information
newlocale - create, modify, and free a locale object
setlocale - set the current locale
uselocale - set/get the locale for the calling thread



// math.h
acos - arc cosine function
acosf - arc cosine function
acosh - inverse hyperbolic cosine function
acoshf - inverse hyperbolic cosine function
acoshl - inverse hyperbolic cosine function
acosl - arc cosine function
asin - arc sine function
asinf - arc sine function
asinh - inverse hyperbolic sine function
asinhf - inverse hyperbolic sine function
asinhl - inverse hyperbolic sine function
asinl - arc sine function
atan - arc tangent function
atan2 - arc tangent function of two variables
atan2f - arc tangent function of two variables
atan2l - arc tangent function of two variables
atanf - arc tangent function
atanh - inverse hyperbolic tangent function
atanhf - inverse hyperbolic tangent function
atanhl - inverse hyperbolic tangent function
atanl - arc tangent function
cbrt - cube root function
cbrtf - cube root function
cbrtl - cube root function
ceil - ceiling function: smallest integral value not less than argument
ceilf - ceiling function: smallest integral value not less than argument
ceill - ceiling function: smallest integral value not less than argument
copysign - copy sign of a number
copysignf - copy sign of a number
copysignl - copy sign of a number
cos - cosine function
cosf - cosine function
cosh - hyperbolic cosine function
coshf - hyperbolic cosine function
coshl - hyperbolic cosine function
cosl - cosine function
drem - floating-point remainder function
dremf - floating-point remainder function
dreml - floating-point remainder function
erf - error function
erfc - complementary error function
erfcf - complementary error function
erfcl - complementary error function
erff - error function
erfl - error function
exp - base-e exponential function
exp10 - base-10 exponential function
exp10f - base-10 exponential function
exp10l - base-10 exponential function
exp2 - base-2 exponential function
exp2f - base-2 exponential function
exp2l - base-2 exponential function
expf - base-e exponential function
expl - base-e exponential function
expm1 - exponential minus 1
expm1f - exponential minus 1
expm1l - exponential minus 1
fabs - absolute value of floating-point number
fabsf - absolute value of floating-point number
fabsl - absolute value of floating-point number
fdim - positive difference
fdimf - positive difference
fdiml - positive difference
finite - BSD floating-point classification functions
finitef - BSD floating-point classification functions
finitel - BSD floating-point classification functions
floor - largest integral value not greater than argument
floorf - largest integral value not greater than argument
floorl - largest integral value not greater than argument
fma - floating-point multiply and add
fmaf - floating-point multiply and add
fmal - floating-point multiply and add
fmax - determine maximum of two floating-point numbers
fmaxf - determine maximum of two floating-point numbers
fmaxl - determine maximum of two floating-point numbers
fmin - determine minimum of two floating-point numbers
fminf - determine minimum of two floating-point numbers
fminl - determine minimum of two floating-point numbers
fmod - floating-point remainder function
fmodf - floating-point remainder function
fmodl - floating-point remainder function
fpclassify - floating-point classification macros
frexp - convert floating-point number to fractional and integral components
frexpf - convert floating-point number to fractional and integral components
frexpl - convert floating-point number to fractional and integral components
gamma - (logarithm of the) gamma function
gammaf - (logarithm of the) gamma function
gammal - (logarithm of the) gamma function
HUGE_VAL - floating-point constants
HUGE_VALF - floating-point constants
HUGE_VALL - floating-point constants
hypot - Euclidean distance function
hypotf - Euclidean distance function
hypotl - Euclidean distance function
ilogb - get integer exponent of a floating-point value
ilogbf - get integer exponent of a floating-point value
ilogbl - get integer exponent of a floating-point value
INFINITY - floating-point constants
isfinite - floating-point classification macros
isgreater - floating-point relational tests without exception for NaN
isgreaterequal - floating-point relational tests without exception for NaN
isinf - floating-point classification macros
isinff - BSD floating-point classification functions
isinfl - BSD floating-point classification functions
isless - floating-point relational tests without exception for NaN
islessequal - floating-point relational tests without exception for NaN
islessgreater - floating-point relational tests without exception for NaN
isnan - floating-point classification macros
isnanf - BSD floating-point classification functions
isnanl - BSD floating-point classification functions
isnormal - floating-point classification macros
isunordered - floating-point relational tests without exception for NaN
j0 - Bessel functions of the first kind
j0f - Bessel functions of the first kind
j0l - Bessel functions of the first kind
j1 - Bessel functions of the first kind
j1f - Bessel functions of the first kind
j1l - Bessel functions of the first kind
jn - Bessel functions of the first kind
jnf - Bessel functions of the first kind
jnl - Bessel functions of the first kind
ldexp - multiply floating-point number by integral power of 2
ldexpf - multiply floating-point number by integral power of 2
ldexpl - multiply floating-point number by integral power of 2
lgamma - log gamma function
lgamma_r - log gamma function
lgammaf - log gamma function
lgammaf_r - log gamma function
lgammal - log gamma function
lgammal_r - log gamma function
llrint - round to nearest integer
llrintf - round to nearest integer
llrintl - round to nearest integer
llround - round to nearest integer
llroundf - round to nearest integer
llroundl - round to nearest integer
log - natural logarithmic function
log10 - base-10 logarithmic function
log10f - base-10 logarithmic function
log10l - base-10 logarithmic function
log1p - logarithm of 1 plus argument
log1pf - logarithm of 1 plus argument
log1pl - logarithm of 1 plus argument
log2 - base-2 logarithmic function
log2f - base-2 logarithmic function
log2l - base-2 logarithmic function
logb - get exponent of a floating-point value
logbf - get exponent of a floating-point value
logbl - get exponent of a floating-point value
logf - natural logarithmic function
logl - natural logarithmic function
lrint - round to nearest integer
lrintf - round to nearest integer
lrintl - round to nearest integer
lround - round to nearest integer
lroundf - round to nearest integer
lroundl - round to nearest integer
math_error - detecting errors from mathematical functions
matherr - SVID math library exception handling
modf - extract signed integral and fractional values from floating-point number
modff - extract signed integral and fractional values from floating-point number
modfl - extract signed integral and fractional values from floating-point number
nanf - return 'Not a Number'
nanl - return 'Not a Number'
nearbyint - round to nearest integer
nearbyintf - round to nearest integer
nearbyintl - round to nearest integer
nextafter - floating-point number manipulation
nextafterf - floating-point number manipulation
nextafterl - floating-point number manipulation
nextdown - return next floating-point number toward positive/negative infinity
nextdownf - return next floating-point number toward positive/negative infinity
nextdownl - return next floating-point number toward positive/negative infinity
nexttoward - floating-point number manipulation
nexttowardf - floating-point number manipulation
nexttowardl - floating-point number manipulation
nextup - return next floating-point number toward positive/negative infinity
nextupf - return next floating-point number toward positive/negative infinity
nextupl - return next floating-point number toward positive/negative infinity
pow - power functions
pow10 - base-10 power functions
pow10f - base-10 power functions
pow10l - base-10 power functions
powf - power functions
powl - power functions
remainder - floating-point remainder function
remainderf - floating-point remainder function
remainderl - floating-point remainder function
remquo - remainder and part of quotient
remquof - remainder and part of quotient
remquol - remainder and part of quotient
rint - round to nearest integer
rintf - round to nearest integer
rintl - round to nearest integer
round - round to nearest integer, away from zero
roundf - round to nearest integer, away from zero
roundl - round to nearest integer, away from zero
scalb - multiply floating-point number by integral power of radix (OBSOLETE)
scalbf - multiply floating-point number by integral power of radix (OBSOLETE)
scalbl - multiply floating-point number by integral power of radix (OBSOLETE)
scalbln - multiply floating-point number by integral power of radix
scalblnf - multiply floating-point number by integral power of radix
scalblnl - multiply floating-point number by integral power of radix
scalbn - multiply floating-point number by integral power of radix
scalbnf - multiply floating-point number by integral power of radix
scalbnl - multiply floating-point number by integral power of radix
signbit - test sign of a real floating-point number
signgam - log gamma function
significand - get mantissa of floating-point number
significandf - get mantissa of floating-point number
significandl - get mantissa of floating-point number
sin - sine function
sincos - calculate sin and cos simultaneously
sincosf - calculate sin and cos simultaneously
sincosl - calculate sin and cos simultaneously
sinf - sine function
sinh - hyperbolic sine function
sinhf - hyperbolic sine function
sinhl - hyperbolic sine function
sinl - sine function
sqrt - square root function
sqrtf - square root function
sqrtl - square root function
tan - tangent function
tanf - tangent function
tanh - hyperbolic tangent function
tanhf - hyperbolic tangent function
tanhl - hyperbolic tangent function
tanl - tangent function
tgamma - true gamma function
tgammaf - true gamma function
tgammal - true gamma function
trunc - round to integer, toward zero
truncf - round to integer, toward zero
truncl - round to integer, toward zero
y0 - Bessel functions of the second kind
y0f - Bessel functions of the second kind
y0l - Bessel functions of the second kind
y1 - Bessel functions of the second kind
y1f - Bessel functions of the second kind
y1l - Bessel functions of the second kind
yn - Bessel functions of the second kind
ynf - Bessel functions of the second kind
ynl - Bessel functions of the second kind



// setjmp.h
longjmp - performing a nonlocal goto
setjmp - performing a nonlocal goto
siglongjmp - performing a nonlocal goto
sigsetjmp - performing a nonlocal goto



// signal.h
bsd_signal - signal handling with BSD semantics
gsignal - software signal facility
killpg - send signal to a process group
killpg - send signal to a process group
psiginfo - print signal message
psignal - print signal message
pthread_kill - send a signal to a thread
pthread_sigmask - examine and change mask of blocked signals
pthread_sigqueue - queue a signal and data to a thread
raise - send a signal to the caller
rt_sigaction - examine and change a signal action
rt_sigpending - examine pending signals
rt_sigprocmask - examine and change blocked signals
rt_sigsuspend - wait for a signal
rt_sigtimedwait - synchronously wait for queued signals
sigaction - examine and change a signal action
sigaddset - POSIX signal set operations
sigaltstack - set and/or get signal stack context
sigandset - POSIX signal set operations
sigblock - BSD signal API
sigdelset - POSIX signal set operations
sigemptyset - POSIX signal set operations
sigfillset - POSIX signal set operations
siggetmask - BSD signal API
sighold - System V signal API
sigignore - System V signal API
siginterrupt - allow signals to interrupt system calls
sigisemptyset - POSIX signal set operations
sigismember - POSIX signal set operations
sigmask - BSD signal API
signal - ANSI C signal handling
sigorset - POSIX signal set operations
sigpause - atomically release blocked signals and wait for interrupt
sigpending - examine pending signals
sigprocmask - examine and change blocked signals
sigqueue - queue a signal and data to a process
sigqueue - queue a signal and data to a process
sigrelse - System V signal API
sigset - System V signal API
sigsetmask - BSD signal API
sigsetops - POSIX signal set operations
sigstack - set and/or get signal stack context
sigsuspend - wait for a signal
sigtimedwait - synchronously wait for queued signals
sigvec - BSD signal API
sigwait - wait for a signal
sigwaitinfo - synchronously wait for queued signals
ssignal - software signal facility
sysv_signal - signal handling with System V semantics
timer_create - create a POSIX per-process timer



// stdarg.h
stdarg - variable argument lists
va_arg - variable argument lists
va_copy - variable argument lists
va_end - variable argument lists
va_start - variable argument lists



// stddef.h
offsetof - offset of a structure member
wcstoimax - convert wide-character string to integer
wcstoumax - convert wide-character string to integer



// stdio.h
__fbufsize - interfaces to stdio FILE structure
__flbf - interfaces to stdio FILE structure
__fpending - interfaces to stdio FILE structure
__fpurge - purge a stream
__freadable - interfaces to stdio FILE structure
__freading - interfaces to stdio FILE structure
__fsetlocking - interfaces to stdio FILE structure
__fwritable - interfaces to stdio FILE structure
__fwriting - interfaces to stdio FILE structure
_flushlbf - interfaces to stdio FILE structure
addmntent - get filesystem descriptor file entry
asprintf - print to allocated string
clearerr - check and reset stream status
clearerr_unlocked - nonlocking stdio functions
ctermid - get controlling terminal name
dprintf - formatted output conversion
endmntent - get filesystem descriptor file entry
fclose - close a stream
fcloseall - close all open streams
fdopen - stream open functions
feof - check and reset stream status
feof_unlocked - nonlocking stdio functions
ferror - check and reset stream status
ferror_unlocked - nonlocking stdio functions
fflush - flush a stream
fflush_unlocked - nonlocking stdio functions
fgetc - input of characters and strings
fgetc_unlocked - nonlocking stdio functions
fgetgrent - get group file entry
fgetpos - reposition a stream
fgetpwent - get password file entry
fgets - input of characters and strings
fgets_unlocked - nonlocking stdio functions
fgetwc - read a wide character from a FILE stream
fgetwc_unlocked - nonlocking stdio functions
fgetws_unlocked - nonlocking stdio functions
fileno - check and reset stream status
fileno_unlocked - nonlocking stdio functions
flockfile - lock FILE for stdio
fmemopen - open memory as stream
fopen - stream open functions
fopencookie - opening a custom stream
fprintf - formatted output conversion
fpurge - purge a stream
fputc - output of characters and strings
fputc_unlocked - nonlocking stdio functions
fputs - output of characters and strings
fputs_unlocked - nonlocking stdio functions
fputwc - write a wide character to a FILE stream
fputwc_unlocked - nonlocking stdio functions
fputws_unlocked - nonlocking stdio functions
fread - binary stream input/output
fread_unlocked - nonlocking stdio functions
freopen - stream open functions
fscanf - input format conversion
fseek - reposition a stream
fseeko - seek to or report file position
fsetpos - reposition a stream
ftell - reposition a stream
ftello - seek to or report file position
ftrylockfile - lock FILE for stdio
funlockfile - lock FILE for stdio
fwprintf - formatted wide-character output conversion
fwrite - binary stream input/output
fwrite_unlocked - nonlocking stdio functions
getc - input of characters and strings
getc_unlocked - nonlocking stdio functions
getchar - input of characters and strings
getchar_unlocked - nonlocking stdio functions
getdelim - delimited string input
getline - delimited string input
getmntent - get filesystem descriptor file entry
getmntent_r - get filesystem descriptor file entry
gets - get a string from standard input (DEPRECATED)
getw - input and output of words (ints)
getwc - read a wide character from a FILE stream
getwc_unlocked - nonlocking stdio functions
getwchar_unlocked - nonlocking stdio functions
hasmntopt - get filesystem descriptor file entry
open_memstream - open a dynamic memory buffer stream
open_wmemstream - open a dynamic memory buffer stream
pclose - pipe stream to or from a process
perror - print a system error message
popen - pipe stream to or from a process
printf - formatted output conversion
putc - output of characters and strings
putc_unlocked - nonlocking stdio functions
putchar - output of characters and strings
putchar_unlocked - nonlocking stdio functions
putpwent - write a password file entry
puts - output of characters and strings
putw - input and output of words (ints)
putwc - write a wide character to a FILE stream
putwc_unlocked - nonlocking stdio functions
putwchar_unlocked - nonlocking stdio functions
remove - remove a file or directory
rename - change the name or location of a file
renameat - change the name or location of a file
renameat2 - change the name or location of a file
rewind - reposition a stream
scanf - input format conversion
setbuf - stream buffering operations
setbuffer - stream buffering operations
setlinebuf - stream buffering operations
setmntent - get filesystem descriptor file entry
setvbuf - stream buffering operations
snprintf - formatted output conversion
sprintf - formatted output conversion
sscanf - input format conversion
stderr - standard I/O streams
stdin - standard I/O streams
stdio - standard input/output library functions
stdio_ext - interfaces to stdio FILE structure
stdout - standard I/O streams
swprintf - formatted wide-character output conversion
sys_errlist - print a system error message
sys_nerr - print a system error message
tempnam - create a name for a temporary file
tmpfile - create a temporary file
tmpnam - create a name for a temporary file
tmpnam_r - create a name for a temporary file
ungetc - input of characters and strings
unlocked_stdio - nonlocking stdio functions
vasprintf - print to allocated string
vdprintf - formatted output conversion
vfprintf - formatted output conversion
vfscanf - input format conversion
vfwprintf - formatted wide-character output conversion
vprintf - formatted output conversion
vscanf - input format conversion
vsnprintf - formatted output conversion
vsprintf - formatted output conversion
vsscanf - input format conversion
vswprintf - formatted wide-character output conversion
vwprintf - formatted wide-character output conversion
wprintf - formatted wide-character output conversion



// stdlib.h
a64l - convert between long and base-64
abort - cause abnormal process termination
abs - compute the absolute value of an integer
aligned_alloc - allocate aligned memory
atexit - register a function to be called at normal process termination
atof - convert a string to a double
atoi - convert a string to an integer
atol - convert a string to an integer
atoll - convert a string to an integer
atoq - convert a string to an integer
bsearch - binary search of a sorted array
calloc - allocate and free dynamic memory
canonicalize_file_name - return the canonicalized absolute pathname
cfree - free allocated memory
clearenv - clear the environment
div - compute quotient and remainder of an integer division
drand48 - generate uniformly distributed pseudo-random numbers
drand48_r - generate uniformly distributed pseudo-random numbers reentrantly
ecvt - convert a floating-point number to a string
ecvt_r - convert a floating-point number to a string
erand48 - generate uniformly distributed pseudo-random numbers
erand48_r - generate uniformly distributed pseudo-random numbers reentrantly
exit - cause normal process termination
fcvt - convert a floating-point number to a string
fcvt_r - convert a floating-point number to a string
free - allocate and free dynamic memory
gcvt - convert a floating-point number to a string
getenv - get an environment variable
getloadavg - get system load averages
getpt - open the pseudoterminal master (PTM)
getsubopt - parse suboption arguments from a string
grantpt - grant access to the slave pseudoterminal
imaxabs - compute the absolute value of an integer
imaxdiv - compute quotient and remainder of an integer division
initstate - random number generator
initstate_r - reentrant random number generator
jrand48 - generate uniformly distributed pseudo-random numbers
jrand48_r - generate uniformly distributed pseudo-random numbers reentrantly
l64a - convert between long and base-64
labs - compute the absolute value of an integer
lcong48 - generate uniformly distributed pseudo-random numbers
lcong48_r - generate uniformly distributed pseudo-random numbers reentrantly
ldiv - compute quotient and remainder of an integer division
llabs - compute the absolute value of an integer
lldiv - compute quotient and remainder of an integer division
lrand48 - generate uniformly distributed pseudo-random numbers
lrand48_r - generate uniformly distributed pseudo-random numbers reentrantly
malloc - allocate and free dynamic memory
MB_CUR_MAX - maximum length of a multibyte character in the current locale
mblen - determine number of bytes in next multibyte character
mbstowcs - convert a multibyte string to a wide-character string
mbtowc - convert a multibyte sequence to a wide character
memalign - allocate aligned memory
mkdtemp - create a unique temporary directory
mkostemp - create a unique temporary file
mkostemps - create a unique temporary file
mkstemp - create a unique temporary file
mkstemps - create a unique temporary file
mktemp - make a unique temporary filename
mrand48 - generate uniformly distributed pseudo-random numbers
mrand48_r - generate uniformly distributed pseudo-random numbers reentrantly
nrand48 - generate uniformly distributed pseudo-random numbers
nrand48_r - generate uniformly distributed pseudo-random numbers reentrantly
on_exit - register a function to be called at normal process termination
posix_memalign - allocate aligned memory
posix_openpt - open a pseudoterminal device
ptsname - get the name of the slave pseudoterminal
ptsname_r - get the name of the slave pseudoterminal
putenv - change or add an environment variable
pvalloc - allocate aligned memory
qecvt - convert a floating-point number to a string
qecvt_r - convert a floating-point number to a string
qfcvt - convert a floating-point number to a string
qfcvt_r - convert a floating-point number to a string
qgcvt - convert a floating-point number to a string
qsort - sort an array
qsort_r - sort an array
rand - pseudo-random number generator
rand_r - pseudo-random number generator
random - random number generator
random_r - reentrant random number generator
realloc - allocate and free dynamic memory
rpmatch - determine if the answer to a question is affirmative or negative
secure_getenv - get an environment variable
seed48 - generate uniformly distributed pseudo-random numbers
seed48_r - generate uniformly distributed pseudo-random numbers reentrantly
setenv - change or add an environment variable
setstate - random number generator
setstate_r - reentrant random number generator
srand - pseudo-random number generator
srand48 - generate uniformly distributed pseudo-random numbers
srand48_r - generate uniformly distributed pseudo-random numbers reentrantly
srandom - random number generator
srandom_r - reentrant random number generator
strfromd - convert a floating-point value into a string
strfromf - convert a floating-point value into a string
strfroml - convert a floating-point value into a string
strtod - convert ASCII string to floating-point number
strtof - convert ASCII string to floating-point number
strtol - convert a string to a long integer
strtold - convert ASCII string to floating-point number
strtoll - convert a string to a long integer
strtoq - convert a string to a long integer
strtoul - convert a string to an unsigned long integer
strtoull - convert a string to an unsigned long integer
strtouq - convert a string to an unsigned long integer
system - execute a shell command
unlockpt - unlock a pseudoterminal master/slave pair
unsetenv - change or add an environment variable
valloc - allocate aligned memory
wcstombs - convert a wide-character string to a multibyte string
wctomb - convert a wide character to a multibyte sequence



// string.h
bstring - byte string operations
memccpy - copy memory area
memchr - scan memory for a character
memcmp - compare memory areas
memcpy - copy memory area
memfrob - frobnicate (encrypt) a memory area
memmem - locate a substring
memmove - copy memory area
mempcpy - copy memory area
memrchr - scan memory for a character
memset - fill memory with a constant byte
rawmemchr - scan memory for a character
stpcpy - copy a string returning a pointer to its end
stpncpy - copy a fixed-size string, returning a pointer to its end
strcasestr - locate a substring
strcat - concatenate two strings
strchr - locate character in string
strchrnul - locate character in string
strcmp - compare two strings
strcoll - compare two strings using the current locale
strcpy - copy a string
strcspn - get length of a prefix substring
strdup - duplicate a string
strdupa - duplicate a string
strerror - return string describing error number
strerror_l - return string describing error number
strerror_r - return string describing error number
strfry - randomize a string
strlen - calculate the length of a string
strncat - concatenate two strings
strncmp - compare two strings
strncpy - copy a string
strndup - duplicate a string
strndupa - duplicate a string
strnlen - determine the length of a fixed-size string
strpbrk - search a string for any of a set of bytes
strrchr - locate character in string
strsep - extract token from string
strsignal - return string describing signal
strspn - get length of a prefix substring
strstr - locate a substring
strtok - extract tokens from strings
strtok_r - extract tokens from strings
strverscmp - compare two version strings
strxfrm - string transformation
wmempcpy - copy memory area



// time.h
asctime - transform date and time to broken-down time or ASCII
asctime_r - transform date and time to broken-down time or ASCII
clock - determine processor time
clock_getcpuclockid - obtain ID of a process CPU-time clock
clock_getres - clock and time functions
clock_getres - clock and time functions
clock_gettime - clock and time functions
clock_gettime - clock and time functions
clock_nanosleep - high-resolution sleep with specifiable clock
clock_settime - clock and time functions
clock_settime - clock and time functions
ctime - transform date and time to broken-down time or ASCII
ctime_r - transform date and time to broken-down time or ASCII
daylight - initialize time conversion information
difftime - calculate time difference
dysize - get number of days for a given year
getdate - convert a date-plus-time string to broken-down time
getdate_err - convert a date-plus-time string to broken-down time
getdate_r - convert a date-plus-time string to broken-down time
gmtime - transform date and time to broken-down time or ASCII
gmtime_r - transform date and time to broken-down time or ASCII
localtime - transform date and time to broken-down time or ASCII
localtime_r - transform date and time to broken-down time or ASCII
mktime - transform date and time to broken-down time or ASCII
nanosleep - high-resolution sleep
stime - set time
strftime - format date and time
strptime - convert a string representation of time to a time tm structure
time - get time in seconds
timegm - inverses of gmtime and localtime
timelocal - inverses of gmtime and localtime
timer_delete - delete a POSIX per-process timer
timer_getoverrun - get overrun count for a POSIX per-process timer
timer_gettime - arm/disarm and fetch state of POSIX per-process timer
timer_settime - arm/disarm and fetch state of POSIX per-process timer
timezone - initialize time conversion information
tzname - initialize time conversion information
tzset - initialize time conversion information



// wchar.h
btowc - convert single byte to wide character
fgetws - read a wide-character string from a FILE stream
fputws - write a wide-character string to a FILE stream
fwide - set and determine the orientation of a FILE stream
getwchar - read a wide character from standard input
mbrlen - determine number of bytes in next multibyte character
mbrtowc - convert a multibyte sequence to a wide character
mbsinit - test for initial shift state
mbsnrtowcs - convert a multibyte string to a wide-character string
mbsrtowcs - convert a multibyte string to a wide-character string
putwchar - write a wide character to standard output
ungetwc - push back a wide character onto a FILE stream
wcpcpy - copy a wide-character string, returning a pointer to its end
wcpncpy - copy a fixed-size string of wide characters, returning a pointer to its end
wcrtomb - convert a wide character to a multibyte sequence
wcscasecmp - compare two wide-character strings, ignoring case
wcscat - concatenate two wide-character strings
wcschr - search a wide character in a wide-character string
wcscmp - compare two wide-character strings
wcscpy - copy a wide-character string
wcscspn - search a wide-character string for any of a set of wide characters
wcsdup - duplicate a wide-character string
wcslen - determine the length of a wide-character string
wcsncasecmp - compare two fixed-size wide-character strings, ignoring case
wcsncat - concatenate two wide-character strings
wcsncmp - compare two fixed-size wide-character strings
wcsncpy - copy a fixed-size string of wide characters
wcsnlen - determine the length of a fixed-size wide-character string
wcsnrtombs - convert a wide-character string to a multibyte string
wcspbrk - search a wide-character string for any of a set of wide characters
wcsrchr - search a wide character in a wide-character string
wcsrtombs - convert a wide-character string to a multibyte string
wcsspn - advance in a wide-character string, skipping any of a set of wide characters
wcsstr - locate a substring in a wide-character string
wcstok - split wide-character string into tokens
wcswidth - determine columns needed for a fixed-size wide-character string
wctob - try to represent a wide character as a single byte
wcwidth - determine columns needed for a wide character
wmemchr - search a wide character in a wide-character array
wmemcmp - compare two arrays of wide-characters
wmemcpy - copy an array of wide-characters
wmemmove - copy an array of wide-characters
wmemset - fill an array of wide-characters with a constant wide character



// wctype.h
iswalnum - test for alphanumeric wide character
iswalpha - test for alphabetic wide character
iswblank - test for whitespace wide character
iswcntrl - test for control wide character
iswctype - wide-character classification
iswdigit - test for decimal digit wide character
iswgraph - test for graphic wide character
iswlower - test for lowercase wide character
iswprint - test for printing wide character
iswpunct - test for punctuation or symbolic wide character
iswspace - test for whitespace wide character
iswupper - test for uppercase wide character
iswxdigit - test for hexadecimal digit wide character
towctrans - wide-character transliteration
towlower - convert a wide character to lowercase
towlower_l - convert a wide character to lowercase
towupper - convert a wide character to uppercase
towupper_l - convert a wide character to uppercase
wctrans - wide-character translation mapping
wctype - wide-character classification
