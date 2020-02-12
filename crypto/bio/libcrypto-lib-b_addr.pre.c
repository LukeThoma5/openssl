# 1 "crypto/bio/b_addr.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "crypto/bio/b_addr.c"
# 10 "crypto/bio/b_addr.c"
# 1 "C:/QNX630/target/qnx6/usr/include/assert.h" 1 3 4







# 1 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 1 3 4
# 55 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/sys/compiler_gnu.h" 1 3 4
# 35 "C:/QNX630/target/qnx6/usr/include/sys/compiler_gnu.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/sys/cdefs.h" 1 3 4
# 36 "C:/QNX630/target/qnx6/usr/include/sys/compiler_gnu.h" 2 3 4
# 57 "C:/QNX630/target/qnx6/usr/include/sys/compiler_gnu.h" 3 4
typedef int _GCC_ATTR_ALIGN_64t __attribute__((__mode__(__DI__)));
typedef unsigned int _GCC_ATTR_ALIGN_u64t __attribute__((__mode__(__DI__)));
typedef _GCC_ATTR_ALIGN_64t _Int64t __attribute__((__aligned__(8)));
typedef _GCC_ATTR_ALIGN_u64t _Uint64t __attribute__((__aligned__(8)));
# 69 "C:/QNX630/target/qnx6/usr/include/sys/compiler_gnu.h" 3 4
typedef unsigned _GCC_ATTR_ALIGN_u32t;
typedef int _GCC_ATTR_ALIGN_32t;
typedef _GCC_ATTR_ALIGN_u32t _Uint32t __attribute__((__aligned__(4)));
typedef _GCC_ATTR_ALIGN_32t _Int32t __attribute__((__aligned__(4)));
# 91 "C:/QNX630/target/qnx6/usr/include/sys/compiler_gnu.h" 3 4
typedef int _GCC_ATTR_ALIGN_16t __attribute__((__mode__(__HI__)));
typedef unsigned int _GCC_ATTR_ALIGN_u16t __attribute__((__mode__(__HI__)));
typedef _GCC_ATTR_ALIGN_16t _Int16t __attribute__((__aligned__(2)));
typedef _GCC_ATTR_ALIGN_u16t _Uint16t __attribute__((__aligned__(2)));
# 103 "C:/QNX630/target/qnx6/usr/include/sys/compiler_gnu.h" 3 4
typedef int _GCC_ATTR_ALIGN_8t __attribute__((__mode__(__QI__)));
typedef unsigned int _GCC_ATTR_ALIGN_u8t __attribute__((__mode__(__QI__)));
typedef _GCC_ATTR_ALIGN_8t _Int8t __attribute__((__aligned__(1)));
typedef _GCC_ATTR_ALIGN_u8t _Uint8t __attribute__((__aligned__(1)));
# 115 "C:/QNX630/target/qnx6/usr/include/sys/compiler_gnu.h" 3 4
typedef int _Intptrt __attribute__((__mode__(__pointer__)));
typedef unsigned int _Uintptrt __attribute__((__mode__(__pointer__)));
# 131 "C:/QNX630/target/qnx6/usr/include/sys/compiler_gnu.h" 3 4
__extension__ typedef long long _Longlong;
__extension__ typedef unsigned long long _ULonglong;
# 162 "C:/QNX630/target/qnx6/usr/include/sys/compiler_gnu.h" 3 4
typedef __builtin_va_list __gnuc_va_list;


typedef __gnuc_va_list __va_list;
# 56 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 2 3 4
# 65 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/x86/platform.h" 1 3 4
# 44 "C:/QNX630/target/qnx6/usr/include/x86/platform.h" 3 4
typedef unsigned __jmpbufalign;
# 66 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 2 3 4
# 207 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 3 4
#pragma pack() 
# 208 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 2 3 4
# 223 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 3 4
typedef unsigned _Sizet;



typedef int _Ssizet;







# 1 "C:/QNX630/target/qnx6/usr/include/sys/target_nto.h" 1 3 4
# 259 "C:/QNX630/target/qnx6/usr/include/sys/target_nto.h" 3 4
typedef _Int8t _Intleast8t;
typedef _Uint8t _Uintleast8t;
typedef _Int8t _Intfast8t;
typedef _Uint8t _Uintfast8t;

typedef _Int16t _Intleast16t;
typedef _Uint16t _Uintleast16t;
typedef _Int16t _Intfast16t;
typedef _Uint16t _Uintfast16t;

typedef _Int32t _Intleast32t;
typedef _Uint32t _Uintleast32t;
typedef _Int32t _Intfast32t;
typedef _Uint32t _Uintfast32t;

typedef _Int64t _Intleast64t;
typedef _Uint64t _Uintleast64t;
typedef _Int64t _Intfast64t;
typedef _Uint64t _Uintfast64t;

typedef _Int64t _Intmaxt;
typedef _Uint64t _Uintmaxt;
# 236 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 2 3 4
# 245 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 3 4
typedef _Uint32t _Wchart;
# 258 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 3 4
typedef struct _Mbstatet { _Wchart _Wchar; char _State; char _Reserved[3]; } _Mbstatet;





typedef _Int32t _Offt;





typedef _Int64t _Off64t;






typedef struct _Fpost { _Off64t _Off; _Mbstatet _Wstate; } _Fpost;






typedef _Int8t _int8;
typedef _Int16t _int16;
typedef _Int32t _int32;
typedef _Int64t _int64;

typedef _Intptrt _intptr;
typedef _Uint8t _uint8;
typedef _Uint16t _uint16;
typedef _Uint32t _uint32;
typedef _Uint64t _uint64;
typedef _Uintptrt _uintptr;


typedef _Uint64t _Paddr64t;
typedef _Uint32t _Paddr32t;



typedef _Paddr32t _Paddrt;
# 350 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 3 4
#pragma pack()
# 351 "C:/QNX630/target/qnx6/usr/include/sys/platform.h" 2 3 4
# 9 "C:/QNX630/target/qnx6/usr/include/assert.h" 2 3 4



# 28 "C:/QNX630/target/qnx6/usr/include/assert.h" 3 4

# 11 "crypto/bio/b_addr.c" 2
# 1 "C:/QNX630/target/qnx6/usr/include/string.h" 1 3 4
# 27 "C:/QNX630/target/qnx6/usr/include/string.h" 3 4



typedef _Sizet size_t;


















extern void *memchr( const void *__s, int __c, size_t __n );
extern char *strchr( const char *__s, int __c );
extern char *strpbrk( const char *__s1, const char *__s2 );
extern char *strrchr( const char *__s, int __c );
extern char *strstr( const char *__s1, const char *__s2 );

extern int memcmp( const void *__s1, const void *__s2, size_t __n );
extern void *memcpy( void *__s1, const void *__s2, size_t __n );
extern void *memmove( void *__s1, const void *__s2, size_t __n );


extern void *memset( void *__s, int __c, size_t __n );

extern char *strcat( char *__s1, const char *__s2 );
extern int strcmp( const char *__s1, const char *__s2 );
extern int strcoll( const char *__s1, const char *__s2 );
extern size_t strxfrm( char *__s1, const char *__s2, size_t __n );
extern char *strcpy( char *__s1, const char *__s2 );
extern size_t strcspn( const char *__s1, const char *__s2 );
extern char *strerror( int __errnum );
extern size_t strlen( const char *__s );
extern char *strncat( char *__s1, const char *__s2, size_t __n );
extern int strncmp( const char *__s1, const char *__s2, size_t __n );
extern char *strncpy( char *__s1, const char *__s2, size_t __n );
extern size_t strspn( const char *__s1, const char *__s2 );
extern char *strtok( char *__s1, const char *__s2 );

extern char *strsignal(int __signo);


extern char *strtok_r( char *__s1, const char *__s2, char **__s3 );






struct iovec;
extern size_t memcpyv(const struct iovec *__dst, int __dparts, int __doff, const struct iovec *__src, int __sparts, int __soff);
extern void *memccpy( void *__s1, const void *__s2, int __c, size_t __n );
extern int memicmp( const void *__s1, const void *__s2, size_t __n );
extern int _memicmp( const void *__s1, const void *__s2, size_t __n );
extern int strcmpi( const char *__s1, const char *__s2 );
extern char *strdup( const char *__string );
extern char *_strdup( const char *__string );
extern int stricmp( const char *__s1, const char *__s2 );
extern int _stricmp( const char *__s1, const char *__s2 );
extern char *strlwr( char *__string );
extern char *_strlwr( char *__string );
extern int strnicmp( const char *__s1, const char *__s2, size_t __n );
extern int _strnicmp( const char *__s1, const char *__s2, size_t __n );
extern char *strnset( char *__string, int __c, size_t __len );
extern char *strrev( char *__string );
extern char *_strrev( char *__string );
extern char *strset( char *__string, int __c );
extern char *strupr( char *__string );
extern char *_strupr( char *__string );



extern void __strerror( int __max, int __errnum, char *__buf );
extern int straddstr(const char *__str, int __len, char **__pbuf, size_t *__pmaxbuf);



extern char *strsep(char **__stringp, const char *__delim);




# 1 "C:/QNX630/target/qnx6/usr/include/x86/string.h" 1 3 4
# 16 "C:/QNX630/target/qnx6/usr/include/x86/string.h" 3 4

# 64 "C:/QNX630/target/qnx6/usr/include/x86/string.h" 3 4

# 120 "C:/QNX630/target/qnx6/usr/include/string.h" 2 3 4
# 12 "crypto/bio/b_addr.c" 2

# 1 "crypto/bio/bio_local.h" 1
# 10 "crypto/bio/bio_local.h"
# 1 "e_os.h" 1
# 13 "e_os.h"
# 1 "C:/QNX630/target/qnx6/usr/include/limits.h" 1 3 4
# 14 "e_os.h" 2
# 1 "include/openssl/opensslconf.h" 1
# 13 "include/openssl/opensslconf.h"
# 1 "include/openssl/configuration.h" 1
# 14 "include/openssl/opensslconf.h" 2
# 1 "include/openssl/macros.h" 1
# 10 "include/openssl/macros.h"
# 1 "include/openssl/opensslconf.h" 1
# 11 "include/openssl/macros.h" 2
# 1 "include/openssl/opensslv.h" 1
# 15 "include/openssl/opensslv.h"
        
# 109 "include/openssl/opensslv.h"
# 1 "include/openssl/macros.h" 1
# 110 "include/openssl/opensslv.h" 2
# 12 "include/openssl/macros.h" 2
# 15 "include/openssl/opensslconf.h" 2
# 15 "e_os.h" 2

# 1 "include/openssl/e_os2.h" 1
# 12 "include/openssl/e_os2.h"
        

# 1 "include/openssl/macros.h" 1
# 15 "include/openssl/e_os2.h" 2
# 219 "include/openssl/e_os2.h"
# 1 "C:/QNX630/target/qnx6/usr/include/inttypes.h" 1 3 4
# 24 "C:/QNX630/target/qnx6/usr/include/inttypes.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/stdint.h" 1 3 4
# 19 "C:/QNX630/target/qnx6/usr/include/stdint.h" 3 4


typedef _Int8t int8_t;
typedef _Uint8t uint8_t;
typedef _Int16t int16_t;
typedef _Uint16t uint16_t;
typedef _Int32t int32_t;
typedef _Uint32t uint32_t;
typedef _Int64t int64_t;
typedef _Uint64t uint64_t;

typedef _Intptrt intptr_t;


typedef _Uintptrt uintptr_t;
# 61 "C:/QNX630/target/qnx6/usr/include/stdint.h" 3 4
typedef _Intleast8t intleast8_t;
typedef _Uintleast8t uintleast8_t;
typedef _Intfast8t intfast8_t;
typedef _Uintfast8t uintfast8_t;

typedef _Intleast16t intleast16_t;
typedef _Uintleast16t uintleast16_t;
typedef _Intfast16t intfast16_t;
typedef _Uintfast16t uintfast16_t;

typedef _Intleast32t intleast32_t;
typedef _Uintleast32t uintleast32_t;
typedef _Intfast32t intfast32_t;
typedef _Uintfast32t uintfast32_t;

typedef _Intleast64t intleast64_t;
typedef _Uintleast64t uintleast64_t;
typedef _Intfast64t intfast64_t;
typedef _Uintfast64t uintfast64_t;



typedef _Intmaxt intmax_t;
typedef _Uintmaxt uintmax_t;
# 177 "C:/QNX630/target/qnx6/usr/include/stdint.h" 3 4

# 25 "C:/QNX630/target/qnx6/usr/include/inttypes.h" 2 3 4
# 243 "C:/QNX630/target/qnx6/usr/include/inttypes.h" 3 4


typedef struct {
        intmax_t quot, rem;
} imaxdiv_t;


intmax_t imaxabs(intmax_t __i);
imaxdiv_t imaxdiv(intmax_t __numer, intmax_t __denom);

intmax_t strtoimax(const char *__restrict __s, char **__restrict __endptr, int __base);
uintmax_t strtoumax(const char *__restrict s, char **__restrict __endptr, int __base);
intmax_t wcstoimax(const _Wchart *__restrict s, _Wchart **__restrict __endptr, int __base);
uintmax_t wcstoumax(const _Wchart *__restrict s, _Wchart **__restrict __endptr, int __base);



struct __byte {
        uint8_t __lo;
        uint8_t __hi;
};

struct __short {
        uint16_t __lo;
        uint16_t __hi;
};

struct __long {
        uint32_t __lo;
        uint32_t __hi;
};
# 293 "C:/QNX630/target/qnx6/usr/include/inttypes.h" 3 4


# 220 "include/openssl/e_os2.h" 2
# 17 "e_os.h" 2
# 1 "include/openssl/crypto.h" 1
# 13 "include/openssl/crypto.h"
        

# 1 "include/openssl/macros.h" 1
# 16 "include/openssl/crypto.h" 2




# 1 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 1 3 4
# 27 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/sys/wait.h" 1 3 4
# 13 "C:/QNX630/target/qnx6/usr/include/sys/wait.h" 3 4
typedef int pid_t;






# 1 "C:/QNX630/target/qnx6/usr/include/signal.h" 1 3 4
# 24 "C:/QNX630/target/qnx6/usr/include/signal.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/sys/siginfo.h" 1 3 4
# 23 "C:/QNX630/target/qnx6/usr/include/sys/siginfo.h" 3 4



typedef _Uint32t clock_t;




typedef _Uint32t time_t;











typedef int uid_t;




struct timespec { time_t tv_sec; long tv_nsec; };




typedef struct sched_param { int sched_priority; int sched_curpriority; union { int reserved[8]; struct { int __ss_low_priority; int __ss_max_repl; struct timespec __ss_repl_period; struct timespec __ss_init_budget; } __ss; } __ss_un; } sched_param_t;




typedef struct _thread_attr { int flags; _Sizet stacksize; void *stackaddr; void (*exitfunc)(void *status); int policy; struct sched_param param; unsigned guardsize; int spare[3]; } pthread_attr_t;



enum {
    SIGEV_NONE,
    SIGEV_SIGNAL,
    SIGEV_SIGNAL_CODE,
    SIGEV_SIGNAL_THREAD,
    SIGEV_PULSE,
    SIGEV_UNBLOCK,
    SIGEV_INTR,
        SIGEV_THREAD
};

# 1 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 3 4
#pragma pack() 
# 74 "C:/QNX630/target/qnx6/usr/include/sys/siginfo.h" 2 3 4

union sigval {
    int sival_int;
    void *sival_ptr;
};

struct sigevent {
        int sigev_notify;
# 90 "C:/QNX630/target/qnx6/usr/include/sys/siginfo.h" 3 4
        union {
                int __sigev_signo;
                int __sigev_coid;
                int __sigev_id;
                void (*__sigev_notify_function)(union sigval);
        } __sigev_un1;





        union sigval sigev_value;
# 111 "C:/QNX630/target/qnx6/usr/include/sys/siginfo.h" 3 4
        union {
                struct {
                        short __sigev_code;
                        short __sigev_priority;
                } __st;
                pthread_attr_t *__sigev_notify_attributes;
        } __sigev_un2;




};
# 275 "C:/QNX630/target/qnx6/usr/include/sys/siginfo.h" 3 4
typedef struct {
        int si_signo;
        int si_code;
        int si_errno;
        union {
                int __pad[7];
                struct {
                        pid_t __pid;
                        union {
                                struct {
                                        uid_t __uid;
                                        union sigval __value;
                                } __kill;
                                struct {
                                        clock_t __utime;
                                        int __status;
                                        clock_t __stime;
                                } __chld;
                        } __pdata;
                } __proc;
                struct {
                        int __fltno;
                        void *__fltip;
                        void *__addr;
                } __fault;
        } __data;
} siginfo_t;
# 313 "C:/QNX630/target/qnx6/usr/include/sys/siginfo.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 3 4
#pragma pack()
# 314 "C:/QNX630/target/qnx6/usr/include/sys/siginfo.h" 2 3 4
# 25 "C:/QNX630/target/qnx6/usr/include/signal.h" 2 3 4




typedef int sig_atomic_t;




typedef _Int32t pthread_t;




typedef struct { long bits[2]; } sigset_t;




typedef struct { void *ss_sp; _Sizet ss_size; int ss_flags; } stack_t;




typedef struct __ucontext_t ucontext_t;



# 1 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 3 4
#pragma pack() 
# 54 "C:/QNX630/target/qnx6/usr/include/signal.h" 2 3 4







struct sigaction {
# 70 "C:/QNX630/target/qnx6/usr/include/signal.h" 3 4
        union {
                void (*_sa_handler)();
                void (*_sa_sigaction)(int, siginfo_t *, void *);
                } un;

    int sa_flags;
    sigset_t sa_mask;
};
# 156 "C:/QNX630/target/qnx6/usr/include/signal.h" 3 4
struct sigstack {
        int ss_onstack;
        void *ss_sp;
};


struct timespec;





extern int raise( int __sig );
extern void (*signal( int __sig, void (*__func)() ))();




extern int kill( pid_t __pid, int __signum );
extern int sigaction( int __signo, const struct sigaction *__act, struct sigaction *__oact );
extern int sigaddset( sigset_t *__set, int __signo );
extern int sigdelset( sigset_t *__set, int __signo );
extern int sigemptyset( sigset_t *__set );
extern int sigfillset( sigset_t *__set );
extern int sigismember( const sigset_t *__set, int __signo );
extern int sigpending( sigset_t *__set );
extern int sigprocmask( int __how, const sigset_t *__set, sigset_t *__oset );
extern int sigsuspend( const sigset_t *sigmask );



extern int sigqueue( pid_t __pid, int __signum, const union sigval __val );
extern int sigwait( const sigset_t *__set, int *__sig );
extern int sigwaitinfo( const sigset_t *__sigmask, siginfo_t *__info );
extern int sigtimedwait(const sigset_t *__set, siginfo_t *__info, const struct timespec *__timeout);



extern void __signalstub(void);



extern void (*bsd_signal(int __sig, void (*func)(int)))(int);
extern int killpg(pid_t __pgrp, int __signum);
extern int pthread_kill(pthread_t __thr, int __sig);
extern int pthread_sigmask(int __how, const sigset_t *__set, sigset_t *__oset);
extern int sigaltstack(const stack_t *__ss, stack_t *__oss);
extern int sighold(int __sig);
extern int sigignore(int __sig);
extern int siginterrupt(int __sig, int __flag);
extern int sigpause(int __sig);
extern int sigrelse(int __sig);
extern void (*sigset(int __sig, void (*__disp)(int)))(int);
extern int sigstack(struct sigstack *__ss, struct sigstack *__oss);
# 219 "C:/QNX630/target/qnx6/usr/include/signal.h" 3 4
extern const char * const sys_siglist[];
extern const int sys_nsig;


# 1 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 3 4
#pragma pack()
# 224 "C:/QNX630/target/qnx6/usr/include/signal.h" 2 3 4


# 21 "C:/QNX630/target/qnx6/usr/include/sys/wait.h" 2 3 4



typedef int id_t;
# 52 "C:/QNX630/target/qnx6/usr/include/sys/wait.h" 3 4
typedef enum {
        P_ALL,
        P_PID,
        P_PGID
} idtype_t;
# 82 "C:/QNX630/target/qnx6/usr/include/sys/wait.h" 3 4


extern pid_t wait(int *__stat_loc);
extern pid_t waitpid(pid_t __pid, int *__stat_loc, int __options);

struct rusage;
extern pid_t wait3(int *__stat_loc, int __options, struct rusage *__resource_usage);
extern pid_t wait4(pid_t __pid, int *__stat_loc, int __options, struct rusage *__resource_usage);
extern int waitid(idtype_t __idtype, id_t __id, siginfo_t *__infop, int __options);
extern int __waitid_net(int nd, idtype_t idtype, id_t id, siginfo_t *infop, int options);




# 28 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 2 3 4



# 1 "C:/QNX630/target/qnx6/usr/include/malloc.h" 1 3 4
# 23 "C:/QNX630/target/qnx6/usr/include/malloc.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 3 4
#pragma pack() 
# 24 "C:/QNX630/target/qnx6/usr/include/malloc.h" 2 3 4












# 1 "C:/QNX630/target/qnx6/usr/include/alloca.h" 1 3 4
# 18 "C:/QNX630/target/qnx6/usr/include/alloca.h" 3 4


extern _Sizet __stackavail(void);
# 34 "C:/QNX630/target/qnx6/usr/include/alloca.h" 3 4
        extern void *__builtin_alloca(unsigned int __size);
# 43 "C:/QNX630/target/qnx6/usr/include/alloca.h" 3 4

# 37 "C:/QNX630/target/qnx6/usr/include/malloc.h" 2 3 4






extern void *calloc(size_t __n, size_t __size);
extern void *malloc(size_t __size);
extern void *realloc(void *__ptr, size_t __size);
extern void free(void *__ptr);



extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size);



extern void *valloc( size_t __size);



extern int cfree(void *__ptr);
extern void *_scalloc( size_t __size);
extern void *_smalloc( size_t __size);
extern void *_srealloc(void *__ptr, size_t __old_size, size_t __new_size);
extern void _sfree(void *__ptr, size_t __size);




enum malloc_opt_cmds {
        MALLOC_VERIFY,
        MALLOC_VERIFY_ON,
        MALLOC_STATS,
        MALLOC_FREE_CHECK,
        MALLOC_ARENA_SIZE,
        MALLOC_MONOTONIC_GROWTH,
        MALLOC_MEMORY_HOLD,
        MALLOC_ARENA_CACHE_MAXSZ,
        MALLOC_ARENA_CACHE_MAXBLK,
        MALLOC_ARENA_CACHE_FREE_NOW,
        MALLOC_LAST
};
# 90 "C:/QNX630/target/qnx6/usr/include/malloc.h" 3 4
struct malloc_stats {
        unsigned m_small_freemem;
        unsigned m_freemem;
        unsigned m_small_overhead;
        unsigned m_overhead;
        unsigned m_small_allocmem;
        unsigned m_allocmem;
        unsigned m_coreallocs;
        unsigned m_corefrees;
        unsigned m_heapsize;
        unsigned m_frees;
        unsigned m_allocs;
        unsigned m_reallocs;
        unsigned m_small_blocks;
        unsigned m_blocks;
        unsigned m_hblocks;
};

struct mallinfo {
        int arena;
        int ordblks;
        int smblks;
        int hblks;
        int hblkhd;
        int usmblks;
        int fsmblks;
        int uordblks;
        int fordblks;
        int keepcost;
};

enum mcheck_status {
    MCHECK_DISABLED = -1, MCHECK_OK = 0, MCHECK_HEAD, MCHECK_TAIL, MCHECK_FREE
};

extern struct mallinfo mallinfo(void);
extern int mallopt(int __cmd, int __value);
extern enum mcheck_status mprobe(void *__ptr);
extern int mcheck(void (*__abort_fn)(enum mcheck_status __status));

extern void *memalign( size_t __alignment, size_t __size);



# 1 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 3 4
#pragma pack()
# 135 "C:/QNX630/target/qnx6/usr/include/malloc.h" 2 3 4
# 32 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 2 3 4


# 1 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 3 4
#pragma pack() 
# 35 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 2 3 4


# 46 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 3 4
typedef _Wchart wchar_t;
# 60 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 3 4
typedef struct {
        int quot;
        int rem;
} div_t;

typedef struct {
        long quot;
        long rem;
} ldiv_t;

typedef struct {
        _Longlong quot;
        _Longlong rem;
} lldiv_t;

typedef lldiv_t _Lldiv_t;




# 1 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 3 4
#pragma pack()
# 81 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 2 3 4





extern char _Mbcurmax;




extern _ULonglong _Stoint(const char *nptr, char **endptr, int base, int flags);
extern float _Stof(const char *, char **, long);
extern double _Stod(const char *, char **, long);
extern long double _Stold(const char *, char **, long);

extern _Longlong _Stoll(const char *, char **, int);
extern _ULonglong _Stoull(const char *, char **, int);

typedef int _Cmpfun(const void *, const void *);


extern void abort( void ) __attribute__((__noreturn__));
extern int abs( int __j );
extern int atexit( register void ( *__func )( void ) );
extern double atof( const char *__nptr );
extern int atoi( const char *__nptr );
extern long int atol( const char *__nptr );
extern void *bsearch( const void *__key, const void *__base,
                    size_t __nmemb, size_t __size,
                    int ( *__compar )( const void *__pkey, const void *__pbase ) );
extern div_t div( int __numer, int __denom );
extern void exit( int __status ) __attribute__((__noreturn__));
extern char *getenv( const char *__name );
extern long int labs( long int __j );
extern ldiv_t ldiv( long int __numer, long int __denom );
extern int mblen( const char *__s, size_t __n );
extern size_t mbstowcs( wchar_t *__pwcs, const char *__s, size_t __n );
extern int mbtowc( wchar_t *__pwc, const char *__s, size_t __n );
extern void qsort( void *__base, size_t __nmemb, size_t __size,
                    int (*__compar)( const void *, const void * ) );
extern int rand( void );
extern void srand( unsigned int __seed );
extern double strtod( const char *__nptr, char **__endptr );
extern long int strtol( const char *__nptr, char **__endptr, int __base );
extern unsigned long int strtoul( const char *__nptr, char **__endptr, int __base );
extern size_t wcstombs( char *__s, const wchar_t *__pwcs, size_t __n );
extern int wctomb( char *__s, wchar_t __wchar );
extern int system(const char *__cmd);


# 143 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__optionp, char * const *__tokens, char **__valuep);
extern char *initstate(unsigned int __seed, char *__state, size_t __size);
extern long int jrand48(unsigned short int __xsubi[3]);
extern void lcong48(unsigned short int __param[7]);
extern long int mrand48(void);
extern long random(void);
extern char *realpath(const char *__file_name, char *__resolved_name);
extern unsigned short int *seed48(unsigned short int __seed16v[3]);
extern void setkey(const char *__key);
extern char *setstate(const char *__state);
extern void srandom(unsigned int __seed);
extern int unlockpt(int __fildes);



extern int rand_r(unsigned int *__seed);



extern int setenv(const char *__name, const char *__value, int __rewrite);
extern void unsetenv(const char *__name);
extern int daemon(int __nochdir, int __noclose);



extern double drand48(void);
extern double erand48(unsigned short int x[3]);
extern long int lrand48(void);
extern long int nrand48(unsigned short int x[3]);
extern void srand48(long seed);

extern int mkstemp(char *__template);
extern char * mktemp(char *__template);
# 185 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 3 4
extern int putenv(const char *__string);




extern _Longlong strtoll( const char *__nptr, char **__endptr, int __base );
extern _ULonglong strtoull( const char *__nptr, char **__endptr, int __base );
extern _Longlong atoll( const char *__nptr );
extern char *lltoa( _Longlong __value, char *__buf, int __radix );
extern char *ulltoa( _ULonglong __value, char *__buf, int __radix );

int clearenv(void);
# 227 "C:/QNX630/target/qnx6/usr/include/stdlib.h" 3 4
extern unsigned atoh( const char *__nptr );

extern char *itoa( int __value, char *__buf, int __radix );
extern char *ltoa( long int __value, char *__buf, int __radix );

extern char *_fullpath( char *__buf, const char *__path, size_t __size );
extern void searchenv( const char *__name, const char *__env_var, char *__buf );
extern char *ultoa( unsigned long int __value, char *__buf, int __radix );
extern char *utoa( unsigned int __value, char *__buf, int __radix );






  extern unsigned _amblksiz;






# 21 "include/openssl/crypto.h" 2
# 1 "C:/QNX630/target/qnx6/usr/include/time.h" 1 3 4
# 24 "C:/QNX630/target/qnx6/usr/include/time.h" 3 4

# 41 "C:/QNX630/target/qnx6/usr/include/time.h" 3 4



typedef int timer_t;




typedef int clockid_t;
# 58 "C:/QNX630/target/qnx6/usr/include/time.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 3 4
#pragma pack() 
# 59 "C:/QNX630/target/qnx6/usr/include/time.h" 2 3 4








extern long _sysconf(int __name);

# 81 "C:/QNX630/target/qnx6/usr/include/time.h" 3 4
struct itimerspec {
    struct timespec it_value,
                    it_interval;
    } ;
# 101 "C:/QNX630/target/qnx6/usr/include/time.h" 3 4




struct sigevent;

extern int clock_getres(clockid_t __clock_id, struct timespec *__res );
extern int clock_gettime(clockid_t __clock_id, struct timespec *__tp );



extern int clock_settime(clockid_t __clock_id, const struct timespec *__tp );





extern int clock_getcpuclockid(pid_t __pid, clockid_t *__clock_id);

extern int nanosleep( const struct timespec *__rqtp, struct timespec *__rmtp );
extern int timer_create ( clockid_t __clock_id, struct sigevent *__evp, timer_t *__timerid );
extern int timer_delete ( timer_t __timerid );
extern int timer_getoverrun( timer_t __timerid);
extern int timer_gettime ( timer_t __timerid, struct itimerspec *__value );
extern int timer_settime ( timer_t __timerid, int __flags, struct itimerspec *__value, struct itimerspec *__ovalue );



extern int nanosleep_abs(clockid_t __clock_id, const struct timespec *__rqtp);
extern int nanosleep_rel(clockid_t __clock_id, const struct timespec *__rqtp, struct timespec *__rmtp );


extern int clock_nanosleep(clockid_t __clock_id, int __flags, const struct timespec *__rqtp, struct timespec *__rmtp );
extern int timer_getexpstatus(timer_t __timerid);



extern int nanospin_calibrate(int __disable);
extern int nanospin(const struct timespec *__rqtp);
extern void nanospin_count(unsigned long __count);
extern int nanospin_ns(unsigned long __nsec);
extern unsigned long nanospin_ns_to_count(unsigned long __nsec);
extern int timer_timeout(clockid_t __id, int __flags, const struct sigevent *__notify,
                const struct timespec *__ntime, struct timespec *__otime);
extern int timer_timeout_r(clockid_t __id, int __flags, const struct sigevent *__notify,
                const struct timespec *__ntime, struct timespec *__otime);
extern void nsec2timespec(struct timespec *__timespec, _Uint64t __nsec);
extern _Uint64t timespec2nsec(const struct timespec *__ts);




struct tm {
        int tm_sec;
        int tm_min;
        int tm_hour;
        int tm_mday;
        int tm_mon;
        int tm_year;
        int tm_wday;
        int tm_yday;
        int tm_isdst;
                long int tm_gmtoff;
                const char *tm_zone;
};

extern char *asctime( const struct tm *__timeptr );
extern char *ctime( const time_t *__timer );
extern clock_t clock( void );
extern double difftime( time_t __t1, time_t __t0 );
extern struct tm *gmtime( const time_t *__timer );
extern struct tm *localtime( const time_t *__timer );
extern time_t mktime( struct tm *__timeptr );
extern size_t strftime( char *__s, size_t __maxsiz, const char *__fmt, const struct tm *__tp );
extern time_t time( time_t *__timer );






extern char *asctime_r( const struct tm *__timeptr, char *__buff );
extern char *ctime_r( const time_t *__timer, char *__buff );
extern struct tm *gmtime_r( const time_t *__timer, struct tm *__tm );
extern struct tm *localtime_r( const time_t *__timer, struct tm *__tm );
extern void tzset( void );





  extern char *tzname[];





  extern int daylight;





  extern long int timezone;





extern struct tm *getdate(const char *__string);
extern char *strptime(const char *__buf, const char *__format, struct tm *__tm);


# 1 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 3 4
#pragma pack()
# 215 "C:/QNX630/target/qnx6/usr/include/time.h" 2 3 4


# 22 "include/openssl/crypto.h" 2




# 1 "C:/QNX630/target/qnx6/usr/include/stdio.h" 1 3 4
# 27 "C:/QNX630/target/qnx6/usr/include/stdio.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 3 4
#pragma pack() 
# 28 "C:/QNX630/target/qnx6/usr/include/stdio.h" 2 3 4


# 39 "C:/QNX630/target/qnx6/usr/include/stdio.h" 3 4
typedef char _Sysch_t;






typedef _Offt off_t;




typedef _Off64t off64_t;
# 67 "C:/QNX630/target/qnx6/usr/include/stdio.h" 3 4
typedef struct _Filet {
        unsigned int _Mode;
        int _Handle;
        unsigned char *_Buf;
        unsigned char *_Bend;
        unsigned char *_Next;
        unsigned char *_Rend;
        unsigned char *_Wend;
        unsigned char *_Rback;
        _Wchart *_WRback;
        _Wchart _WBack[2];
        unsigned char *_Rsave;
        unsigned char *_WRend;
        unsigned char *_WWend;
        _Mbstatet _Wstate;
        struct _Filet *_NextFile;
        unsigned char _Back[2];
        unsigned char _Cbuf;
        void *_Flock;
        unsigned char _Spare[4];
} _Filet;




typedef _Filet FILE;


typedef _Fpost fpos_t;









extern FILE *_Files[16];
# 116 "C:/QNX630/target/qnx6/usr/include/stdio.h" 3 4

extern FILE _Stdin, _Stdout, _Stderr;








  extern int _Multi_threaded;
# 144 "C:/QNX630/target/qnx6/usr/include/stdio.h" 3 4
void _Lockfilelock(_Filet *);
void _Unlockfilelock(_Filet *);
# 161 "C:/QNX630/target/qnx6/usr/include/stdio.h" 3 4
extern FILE *fopen64(const char *__filename, const char *__mode);
extern FILE *freopen64(const char *__filename, const char *__mode, FILE *__fp);
extern FILE *tmpfile64(void);
extern int fseeko64( FILE *__fp, off64_t __offset, int __whence);
extern off64_t ftello64( FILE *__fp);
# 202 "C:/QNX630/target/qnx6/usr/include/stdio.h" 3 4

extern void clearerr( FILE *__fp );
extern int fclose( FILE *__fp );
extern int feof( FILE *__fp );
extern int ferror( FILE *__fp );
extern int fflush( FILE *__fp );
extern int fgetc( FILE *__fp );
extern int fgetpos( FILE *__fp, fpos_t *__pos );
extern char *fgets( char *__s, int __n, FILE *__fp );
extern FILE *fopen( const char *__filename, const char *__mode );
extern int fprintf( FILE *__fp, const char *__format, ... );
extern int fputc( int __c, FILE *__fp );
extern int fputs( const char *__s, FILE *__fp );
extern size_t fread( void *__ptr, size_t __size, size_t __n, FILE *__fp );
extern FILE *freopen( const char *__filename, const char *__mode, FILE *__fp );
extern int fscanf( FILE*__fp, const char *__format, ... );
extern int fseek( FILE *__fp, long int __offset, int __whence );
extern int fsetpos( FILE *__fp, const fpos_t *__pos );
extern long int ftell( FILE *__fp );
extern size_t fwrite( const void *__ptr, size_t __size, size_t __n, FILE *__fp );
extern char *gets( char *__s );
extern void perror( const char *__s );
extern int printf( const char *__format, ... );
extern int puts( const char *__s );
extern int remove( const char *__filename );
extern int rename( const char *__old, const char *__new );
extern void rewind( FILE *__fp );
extern int scanf( const char *__format, ... );
extern void setbuf( FILE *__fp, char *__buf );
extern int setvbuf( FILE *__fp, char *__buf, int __mode, size_t __size );
extern int sprintf( char *__s, const char *__format, ... );
extern int sscanf( const char *__s, const char *__format, ... );
extern FILE *tmpfile( void );
extern char *tmpnam( char *__s );
extern int ungetc( int __c, FILE *__fp );
extern int vfprintf( FILE *__fp, const char *__format, __va_list __arg );
extern int vprintf( const char *__format, __va_list __arg );
extern int vsprintf( char *__s, const char *__format, __va_list __arg );
extern int vsnprintf( char *__s, size_t __size, const char *__format, __va_list __arg) __attribute__((format (printf, 3, 0)));
extern FILE *fdopen( int __handle, const char *__mode );
extern int fileno( FILE *__fp);


extern int fseeko( FILE *__fp, off_t __offset, int __whence);
extern off_t ftello( FILE *__fp);
extern int putw(int __w, FILE *__stream);
extern int snprintf(char *__s, size_t __size, const char *__format, ...) __attribute__((format (printf, 3, 4)));


extern FILE *_fsopen( const char *__filename, const char *__mode, int __shflag );
extern int _grow_handles( int __new_count );
extern int fcloseall( void );
extern int fgetchar( void );
extern int flushall( void );
extern int fputchar( int __c );
extern int vfscanf( FILE *__fp, const char *__format, __va_list __arg ) __attribute__((format (scanf, 2, 0)));
extern int vscanf( const char *__format, __va_list __arg ) __attribute__((format (scanf, 1, 0)));
extern int vsscanf( const char *__s, const char *__format, __va_list __arg ) __attribute__((format (scanf, 2, 0)));
# 299 "C:/QNX630/target/qnx6/usr/include/stdio.h" 3 4
extern FILE *popen( const char *__filename, const char *__mode );
extern int pclose( FILE *__stream );
extern char *tempnam(const char *__dir, const char *__pfx);



# 352 "C:/QNX630/target/qnx6/usr/include/stdio.h" 3 4

extern int getc( FILE *__fp );
extern int getchar( void );
extern int putc( int __c, FILE *__fp );
extern int putchar( int __c );

# 397 "C:/QNX630/target/qnx6/usr/include/stdio.h" 3 4

extern void flockfile( FILE *fp);
extern int ftrylockfile( FILE *fp);
extern void funlockfile( FILE *fp);



# 1 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 3 4
#pragma pack()
# 405 "C:/QNX630/target/qnx6/usr/include/stdio.h" 2 3 4
# 27 "include/openssl/crypto.h" 2


# 1 "include/openssl/safestack.h" 1
# 12 "include/openssl/safestack.h"
        

# 1 "include/openssl/macros.h" 1
# 15 "include/openssl/safestack.h" 2




# 1 "include/openssl/stack.h" 1
# 12 "include/openssl/stack.h"
        

# 1 "include/openssl/macros.h" 1
# 15 "include/openssl/stack.h" 2
# 23 "include/openssl/stack.h"
typedef struct stack_st OPENSSL_STACK;

typedef int (*OPENSSL_sk_compfunc)(const void *, const void *);
typedef void (*OPENSSL_sk_freefunc)(void *);
typedef void *(*OPENSSL_sk_copyfunc)(const void *);

int OPENSSL_sk_num(const OPENSSL_STACK *);
void *OPENSSL_sk_value(const OPENSSL_STACK *, int);

void *OPENSSL_sk_set(OPENSSL_STACK *st, int i, const void *data);

OPENSSL_STACK *OPENSSL_sk_new(OPENSSL_sk_compfunc cmp);
OPENSSL_STACK *OPENSSL_sk_new_null(void);
OPENSSL_STACK *OPENSSL_sk_new_reserve(OPENSSL_sk_compfunc c, int n);
int OPENSSL_sk_reserve(OPENSSL_STACK *st, int n);
void OPENSSL_sk_free(OPENSSL_STACK *);
void OPENSSL_sk_pop_free(OPENSSL_STACK *st, void (*func) (void *));
OPENSSL_STACK *OPENSSL_sk_deep_copy(const OPENSSL_STACK *,
                                    OPENSSL_sk_copyfunc c,
                                    OPENSSL_sk_freefunc f);
int OPENSSL_sk_insert(OPENSSL_STACK *sk, const void *data, int where);
void *OPENSSL_sk_delete(OPENSSL_STACK *st, int loc);
void *OPENSSL_sk_delete_ptr(OPENSSL_STACK *st, const void *p);
int OPENSSL_sk_find(OPENSSL_STACK *st, const void *data);
int OPENSSL_sk_find_ex(OPENSSL_STACK *st, const void *data);
int OPENSSL_sk_push(OPENSSL_STACK *st, const void *data);
int OPENSSL_sk_unshift(OPENSSL_STACK *st, const void *data);
void *OPENSSL_sk_shift(OPENSSL_STACK *st);
void *OPENSSL_sk_pop(OPENSSL_STACK *st);
void OPENSSL_sk_zero(OPENSSL_STACK *st);
OPENSSL_sk_compfunc OPENSSL_sk_set_cmp_func(OPENSSL_STACK *sk,
                                            OPENSSL_sk_compfunc cmp);
OPENSSL_STACK *OPENSSL_sk_dup(const OPENSSL_STACK *st);
void OPENSSL_sk_sort(OPENSSL_STACK *st);
int OPENSSL_sk_is_sorted(const OPENSSL_STACK *st);
# 20 "include/openssl/safestack.h" 2
# 155 "include/openssl/safestack.h"
typedef char *OPENSSL_STRING;
typedef const char *OPENSSL_CSTRING;
# 165 "include/openssl/safestack.h"
struct stack_st_OPENSSL_STRING; typedef int (*sk_OPENSSL_STRING_compfunc)(const char * const *a, const char *const *b); typedef void (*sk_OPENSSL_STRING_freefunc)(char *a); typedef char * (*sk_OPENSSL_STRING_copyfunc)(const char *a); static __attribute__((unused)) inline int sk_OPENSSL_STRING_num(const struct stack_st_OPENSSL_STRING *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_value(const struct stack_st_OPENSSL_STRING *sk, int idx) { return (char *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_OPENSSL_STRING *sk_OPENSSL_STRING_new(sk_OPENSSL_STRING_compfunc compare) { return (struct stack_st_OPENSSL_STRING *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_OPENSSL_STRING *sk_OPENSSL_STRING_new_null(void) { return (struct stack_st_OPENSSL_STRING *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_OPENSSL_STRING *sk_OPENSSL_STRING_new_reserve(sk_OPENSSL_STRING_compfunc compare, int n) { return (struct stack_st_OPENSSL_STRING *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_reserve(struct stack_st_OPENSSL_STRING *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_OPENSSL_STRING_free(struct stack_st_OPENSSL_STRING *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_STRING_zero(struct stack_st_OPENSSL_STRING *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_delete(struct stack_st_OPENSSL_STRING *sk, int i) { return (char *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_delete_ptr(struct stack_st_OPENSSL_STRING *sk, char *ptr) { return (char *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_push(struct stack_st_OPENSSL_STRING *sk, char *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_unshift(struct stack_st_OPENSSL_STRING *sk, char *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_pop(struct stack_st_OPENSSL_STRING *sk) { return (char *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_shift(struct stack_st_OPENSSL_STRING *sk) { return (char *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_STRING_pop_free(struct stack_st_OPENSSL_STRING *sk, sk_OPENSSL_STRING_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_insert(struct stack_st_OPENSSL_STRING *sk, char *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_set(struct stack_st_OPENSSL_STRING *sk, int idx, char *ptr) { return (char *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_find(struct stack_st_OPENSSL_STRING *sk, char *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_find_ex(struct stack_st_OPENSSL_STRING *sk, char *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_OPENSSL_STRING_sort(struct stack_st_OPENSSL_STRING *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_is_sorted(const struct stack_st_OPENSSL_STRING *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_STRING * sk_OPENSSL_STRING_dup(const struct stack_st_OPENSSL_STRING *sk) { return (struct stack_st_OPENSSL_STRING *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_STRING *sk_OPENSSL_STRING_deep_copy(const struct stack_st_OPENSSL_STRING *sk, sk_OPENSSL_STRING_copyfunc copyfunc, sk_OPENSSL_STRING_freefunc freefunc) { return (struct stack_st_OPENSSL_STRING *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_OPENSSL_STRING_compfunc sk_OPENSSL_STRING_set_cmp_func(struct stack_st_OPENSSL_STRING *sk, sk_OPENSSL_STRING_compfunc compare) { return (sk_OPENSSL_STRING_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
struct stack_st_OPENSSL_CSTRING; typedef int (*sk_OPENSSL_CSTRING_compfunc)(const char * const *a, const char *const *b); typedef void (*sk_OPENSSL_CSTRING_freefunc)(char *a); typedef char * (*sk_OPENSSL_CSTRING_copyfunc)(const char *a); static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_num(const struct stack_st_OPENSSL_CSTRING *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_value(const struct stack_st_OPENSSL_CSTRING *sk, int idx) { return (const char *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_OPENSSL_CSTRING *sk_OPENSSL_CSTRING_new(sk_OPENSSL_CSTRING_compfunc compare) { return (struct stack_st_OPENSSL_CSTRING *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_OPENSSL_CSTRING *sk_OPENSSL_CSTRING_new_null(void) { return (struct stack_st_OPENSSL_CSTRING *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_OPENSSL_CSTRING *sk_OPENSSL_CSTRING_new_reserve(sk_OPENSSL_CSTRING_compfunc compare, int n) { return (struct stack_st_OPENSSL_CSTRING *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_reserve(struct stack_st_OPENSSL_CSTRING *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_OPENSSL_CSTRING_free(struct stack_st_OPENSSL_CSTRING *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_CSTRING_zero(struct stack_st_OPENSSL_CSTRING *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_delete(struct stack_st_OPENSSL_CSTRING *sk, int i) { return (const char *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_delete_ptr(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr) { return (const char *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_push(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_unshift(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_pop(struct stack_st_OPENSSL_CSTRING *sk) { return (const char *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_shift(struct stack_st_OPENSSL_CSTRING *sk) { return (const char *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_CSTRING_pop_free(struct stack_st_OPENSSL_CSTRING *sk, sk_OPENSSL_CSTRING_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_insert(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_set(struct stack_st_OPENSSL_CSTRING *sk, int idx, const char *ptr) { return (const char *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_find(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_find_ex(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_OPENSSL_CSTRING_sort(struct stack_st_OPENSSL_CSTRING *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_is_sorted(const struct stack_st_OPENSSL_CSTRING *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_CSTRING * sk_OPENSSL_CSTRING_dup(const struct stack_st_OPENSSL_CSTRING *sk) { return (struct stack_st_OPENSSL_CSTRING *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_CSTRING *sk_OPENSSL_CSTRING_deep_copy(const struct stack_st_OPENSSL_CSTRING *sk, sk_OPENSSL_CSTRING_copyfunc copyfunc, sk_OPENSSL_CSTRING_freefunc freefunc) { return (struct stack_st_OPENSSL_CSTRING *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_OPENSSL_CSTRING_compfunc sk_OPENSSL_CSTRING_set_cmp_func(struct stack_st_OPENSSL_CSTRING *sk, sk_OPENSSL_CSTRING_compfunc compare) { return (sk_OPENSSL_CSTRING_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }





typedef void *OPENSSL_BLOCK;
struct stack_st_OPENSSL_BLOCK; typedef int (*sk_OPENSSL_BLOCK_compfunc)(const void * const *a, const void *const *b); typedef void (*sk_OPENSSL_BLOCK_freefunc)(void *a); typedef void * (*sk_OPENSSL_BLOCK_copyfunc)(const void *a); static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_num(const struct stack_st_OPENSSL_BLOCK *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_value(const struct stack_st_OPENSSL_BLOCK *sk, int idx) { return (void *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_OPENSSL_BLOCK *sk_OPENSSL_BLOCK_new(sk_OPENSSL_BLOCK_compfunc compare) { return (struct stack_st_OPENSSL_BLOCK *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_OPENSSL_BLOCK *sk_OPENSSL_BLOCK_new_null(void) { return (struct stack_st_OPENSSL_BLOCK *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_OPENSSL_BLOCK *sk_OPENSSL_BLOCK_new_reserve(sk_OPENSSL_BLOCK_compfunc compare, int n) { return (struct stack_st_OPENSSL_BLOCK *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_reserve(struct stack_st_OPENSSL_BLOCK *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_OPENSSL_BLOCK_free(struct stack_st_OPENSSL_BLOCK *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_BLOCK_zero(struct stack_st_OPENSSL_BLOCK *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_delete(struct stack_st_OPENSSL_BLOCK *sk, int i) { return (void *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_delete_ptr(struct stack_st_OPENSSL_BLOCK *sk, void *ptr) { return (void *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_push(struct stack_st_OPENSSL_BLOCK *sk, void *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_unshift(struct stack_st_OPENSSL_BLOCK *sk, void *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_pop(struct stack_st_OPENSSL_BLOCK *sk) { return (void *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_shift(struct stack_st_OPENSSL_BLOCK *sk) { return (void *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_BLOCK_pop_free(struct stack_st_OPENSSL_BLOCK *sk, sk_OPENSSL_BLOCK_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_insert(struct stack_st_OPENSSL_BLOCK *sk, void *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_set(struct stack_st_OPENSSL_BLOCK *sk, int idx, void *ptr) { return (void *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_find(struct stack_st_OPENSSL_BLOCK *sk, void *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_find_ex(struct stack_st_OPENSSL_BLOCK *sk, void *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_OPENSSL_BLOCK_sort(struct stack_st_OPENSSL_BLOCK *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_is_sorted(const struct stack_st_OPENSSL_BLOCK *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_BLOCK * sk_OPENSSL_BLOCK_dup(const struct stack_st_OPENSSL_BLOCK *sk) { return (struct stack_st_OPENSSL_BLOCK *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_BLOCK *sk_OPENSSL_BLOCK_deep_copy(const struct stack_st_OPENSSL_BLOCK *sk, sk_OPENSSL_BLOCK_copyfunc copyfunc, sk_OPENSSL_BLOCK_freefunc freefunc) { return (struct stack_st_OPENSSL_BLOCK *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_OPENSSL_BLOCK_compfunc sk_OPENSSL_BLOCK_set_cmp_func(struct stack_st_OPENSSL_BLOCK *sk, sk_OPENSSL_BLOCK_compfunc compare) { return (sk_OPENSSL_BLOCK_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
# 30 "include/openssl/crypto.h" 2

# 1 "include/openssl/types.h" 1
# 22 "include/openssl/types.h"
typedef struct ossl_provider_st OSSL_PROVIDER;
# 43 "include/openssl/types.h"
typedef struct asn1_string_st ASN1_INTEGER;
typedef struct asn1_string_st ASN1_ENUMERATED;
typedef struct asn1_string_st ASN1_BIT_STRING;
typedef struct asn1_string_st ASN1_OCTET_STRING;
typedef struct asn1_string_st ASN1_PRINTABLESTRING;
typedef struct asn1_string_st ASN1_T61STRING;
typedef struct asn1_string_st ASN1_IA5STRING;
typedef struct asn1_string_st ASN1_GENERALSTRING;
typedef struct asn1_string_st ASN1_UNIVERSALSTRING;
typedef struct asn1_string_st ASN1_BMPSTRING;
typedef struct asn1_string_st ASN1_UTCTIME;
typedef struct asn1_string_st ASN1_TIME;
typedef struct asn1_string_st ASN1_GENERALIZEDTIME;
typedef struct asn1_string_st ASN1_VISIBLESTRING;
typedef struct asn1_string_st ASN1_UTF8STRING;
typedef struct asn1_string_st ASN1_STRING;
typedef int ASN1_BOOLEAN;
typedef int ASN1_NULL;


typedef struct asn1_object_st ASN1_OBJECT;

typedef struct ASN1_ITEM_st ASN1_ITEM;
typedef struct asn1_pctx_st ASN1_PCTX;
typedef struct asn1_sctx_st ASN1_SCTX;
# 82 "include/openssl/types.h"
typedef struct bio_st BIO;
typedef struct bignum_st BIGNUM;
typedef struct bignum_ctx BN_CTX;
typedef struct bn_blinding_st BN_BLINDING;
typedef struct bn_mont_ctx_st BN_MONT_CTX;
typedef struct bn_recp_ctx_st BN_RECP_CTX;
typedef struct bn_gencb_st BN_GENCB;

typedef struct buf_mem_st BUF_MEM;

struct stack_st_BIGNUM;
struct stack_st_BIGNUM_const;

typedef struct err_state_st ERR_STATE;

typedef struct evp_cipher_st EVP_CIPHER;
typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;
typedef struct evp_md_st EVP_MD;
typedef struct evp_md_ctx_st EVP_MD_CTX;
typedef struct evp_mac_st EVP_MAC;
typedef struct evp_mac_ctx_st EVP_MAC_CTX;
typedef struct evp_pkey_st EVP_PKEY;

typedef struct evp_pkey_asn1_method_st EVP_PKEY_ASN1_METHOD;

typedef struct evp_pkey_method_st EVP_PKEY_METHOD;
typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct evp_keymgmt_st EVP_KEYMGMT;

typedef struct evp_kdf_st EVP_KDF;
typedef struct evp_kdf_ctx_st EVP_KDF_CTX;

typedef struct evp_keyexch_st EVP_KEYEXCH;

typedef struct evp_signature_st EVP_SIGNATURE;

typedef struct evp_asym_cipher_st EVP_ASYM_CIPHER;

typedef struct evp_Encode_Ctx_st EVP_ENCODE_CTX;

typedef struct hmac_ctx_st HMAC_CTX;

typedef struct dh_st DH;
typedef struct dh_method DH_METHOD;

typedef struct dsa_st DSA;
typedef struct dsa_method DSA_METHOD;

typedef struct rsa_st RSA;
typedef struct rsa_meth_st RSA_METHOD;
typedef struct rsa_pss_params_st RSA_PSS_PARAMS;

typedef struct ec_key_st EC_KEY;
typedef struct ec_key_method_st EC_KEY_METHOD;

typedef struct rand_meth_st RAND_METHOD;
typedef struct rand_drbg_st RAND_DRBG;

typedef struct ssl_dane_st SSL_DANE;
typedef struct x509_st X509;
typedef struct X509_algor_st X509_ALGOR;
typedef struct X509_crl_st X509_CRL;
typedef struct x509_crl_method_st X509_CRL_METHOD;
typedef struct x509_revoked_st X509_REVOKED;
typedef struct X509_name_st X509_NAME;
typedef struct X509_pubkey_st X509_PUBKEY;
typedef struct x509_store_st X509_STORE;
typedef struct x509_store_ctx_st X509_STORE_CTX;

typedef struct x509_object_st X509_OBJECT;
typedef struct x509_lookup_st X509_LOOKUP;
typedef struct x509_lookup_method_st X509_LOOKUP_METHOD;
typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;

typedef struct x509_sig_info_st X509_SIG_INFO;

typedef struct pkcs8_priv_key_info_st PKCS8_PRIV_KEY_INFO;

typedef struct v3_ext_ctx X509V3_CTX;
typedef struct conf_st CONF;
typedef struct ossl_init_settings_st OPENSSL_INIT_SETTINGS;

typedef struct ui_st UI;
typedef struct ui_method_st UI_METHOD;

typedef struct engine_st ENGINE;
typedef struct ssl_st SSL;
typedef struct ssl_ctx_st SSL_CTX;

typedef struct comp_ctx_st COMP_CTX;
typedef struct comp_method_st COMP_METHOD;

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE;
typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL;
typedef struct X509_POLICY_TREE_st X509_POLICY_TREE;
typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE;

typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID;
typedef struct DIST_POINT_st DIST_POINT;
typedef struct ISSUING_DIST_POINT_st ISSUING_DIST_POINT;
typedef struct NAME_CONSTRAINTS_st NAME_CONSTRAINTS;

typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef struct ossl_http_req_ctx_st OCSP_REQ_CTX;
typedef struct ocsp_response_st OCSP_RESPONSE;
typedef struct ocsp_responder_id_st OCSP_RESPID;

typedef struct sct_st SCT;
typedef struct sct_ctx_st SCT_CTX;
typedef struct ctlog_st CTLOG;
typedef struct ctlog_store_st CTLOG_STORE;
typedef struct ct_policy_eval_ctx_st CT_POLICY_EVAL_CTX;

typedef struct ossl_store_info_st OSSL_STORE_INFO;
typedef struct ossl_store_search_st OSSL_STORE_SEARCH;

typedef struct openssl_ctx_st OPENSSL_CTX;

typedef struct ossl_dispatch_st OSSL_DISPATCH;
typedef struct ossl_item_st OSSL_ITEM;
typedef struct ossl_algorithm_st OSSL_ALGORITHM;
typedef struct ossl_param_st OSSL_PARAM;

typedef int pem_password_cb (char *buf, int size, int rwflag, void *userdata);

typedef struct ossl_serializer_st OSSL_SERIALIZER;
typedef struct ossl_serializer_ctx_st OSSL_SERIALIZER_CTX;



typedef intmax_t ossl_intmax_t;
typedef uintmax_t ossl_uintmax_t;
# 32 "include/openssl/crypto.h" 2

# 1 "include/openssl/cryptoerr.h" 1
# 13 "include/openssl/cryptoerr.h"
        

# 1 "include/openssl/macros.h" 1
# 16 "include/openssl/cryptoerr.h" 2





# 1 "include/openssl/symhacks.h" 1
# 12 "include/openssl/symhacks.h"
        

# 1 "include/openssl/macros.h" 1
# 15 "include/openssl/symhacks.h" 2
# 22 "include/openssl/cryptoerr.h" 2





int ERR_load_CRYPTO_strings(void);
# 34 "include/openssl/crypto.h" 2
# 67 "include/openssl/crypto.h"
typedef struct {
    int dummy;
} CRYPTO_dynlock;



typedef void CRYPTO_RWLOCK;

CRYPTO_RWLOCK *CRYPTO_THREAD_lock_new(void);
int CRYPTO_THREAD_read_lock(CRYPTO_RWLOCK *lock);
int CRYPTO_THREAD_write_lock(CRYPTO_RWLOCK *lock);
int CRYPTO_THREAD_unlock(CRYPTO_RWLOCK *lock);
void CRYPTO_THREAD_lock_free(CRYPTO_RWLOCK *lock);

int CRYPTO_atomic_add(int *val, int amount, int *ret, CRYPTO_RWLOCK *lock);
# 115 "include/openssl/crypto.h"
size_t OPENSSL_strlcpy(char *dst, const char *src, size_t siz);
size_t OPENSSL_strlcat(char *dst, const char *src, size_t siz);
size_t OPENSSL_strnlen(const char *str, size_t maxlen);
int OPENSSL_buf2hexstr_ex(char *str, size_t str_n, size_t *strlen,
                          const unsigned char *buf, size_t buflen);
char *OPENSSL_buf2hexstr(const unsigned char *buf, long buflen);
int OPENSSL_hexstr2buf_ex(unsigned char *buf, size_t buf_n, size_t *buflen,
                          const char *str);
unsigned char *OPENSSL_hexstr2buf(const char *str, long *buflen);
int OPENSSL_hexchar2int(unsigned char c);
# 133 "include/openssl/crypto.h"
unsigned int OPENSSL_version_major(void);
unsigned int OPENSSL_version_minor(void);
unsigned int OPENSSL_version_patch(void);
const char *OPENSSL_version_pre_release(void);
const char *OPENSSL_version_build_metadata(void);

unsigned long OpenSSL_version_num(void);
const char *OpenSSL_version(int type);
# 152 "include/openssl/crypto.h"
const char *OPENSSL_info(int type);
# 166 "include/openssl/crypto.h"
int OPENSSL_issetugid(void);

struct crypto_ex_data_st {
    OPENSSL_CTX *ctx;
    struct stack_st_void *sk;
};
struct stack_st_void; typedef int (*sk_void_compfunc)(const void * const *a, const void *const *b); typedef void (*sk_void_freefunc)(void *a); typedef void * (*sk_void_copyfunc)(const void *a); static __attribute__((unused)) inline int sk_void_num(const struct stack_st_void *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_void_value(const struct stack_st_void *sk, int idx) { return (void *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_void *sk_void_new(sk_void_compfunc compare) { return (struct stack_st_void *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_void *sk_void_new_null(void) { return (struct stack_st_void *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_void *sk_void_new_reserve(sk_void_compfunc compare, int n) { return (struct stack_st_void *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_void_reserve(struct stack_st_void *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_void_free(struct stack_st_void *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_void_zero(struct stack_st_void *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_void_delete(struct stack_st_void *sk, int i) { return (void *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline void *sk_void_delete_ptr(struct stack_st_void *sk, void *ptr) { return (void *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_void_push(struct stack_st_void *sk, void *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_void_unshift(struct stack_st_void *sk, void *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void *sk_void_pop(struct stack_st_void *sk) { return (void *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_void_shift(struct stack_st_void *sk) { return (void *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_void_pop_free(struct stack_st_void *sk, sk_void_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_void_insert(struct stack_st_void *sk, void *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline void *sk_void_set(struct stack_st_void *sk, int idx, void *ptr) { return (void *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_void_find(struct stack_st_void *sk, void *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_void_find_ex(struct stack_st_void *sk, void *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_void_sort(struct stack_st_void *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_void_is_sorted(const struct stack_st_void *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_void * sk_void_dup(const struct stack_st_void *sk) { return (struct stack_st_void *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_void *sk_void_deep_copy(const struct stack_st_void *sk, sk_void_copyfunc copyfunc, sk_void_freefunc freefunc) { return (struct stack_st_void *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_void_compfunc sk_void_set_cmp_func(struct stack_st_void *sk, sk_void_compfunc compare) { return (sk_void_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
# 198 "include/openssl/crypto.h"
typedef void CRYPTO_EX_new (void *parent, void *ptr, CRYPTO_EX_DATA *ad,
                           int idx, long argl, void *argp);
typedef void CRYPTO_EX_free (void *parent, void *ptr, CRYPTO_EX_DATA *ad,
                             int idx, long argl, void *argp);
typedef int CRYPTO_EX_dup (CRYPTO_EX_DATA *to, const CRYPTO_EX_DATA *from,
                           void *from_d, int idx, long argl, void *argp);
 int CRYPTO_get_ex_new_index(int class_index, long argl, void *argp,
                                   CRYPTO_EX_new *new_func,
                                   CRYPTO_EX_dup *dup_func,
                                   CRYPTO_EX_free *free_func);

int CRYPTO_free_ex_index(int class_index, int idx);





int CRYPTO_new_ex_data(int class_index, void *obj, CRYPTO_EX_DATA *ad);
int CRYPTO_dup_ex_data(int class_index, CRYPTO_EX_DATA *to,
                       const CRYPTO_EX_DATA *from);

void CRYPTO_free_ex_data(int class_index, void *obj, CRYPTO_EX_DATA *ad);


int CRYPTO_alloc_ex_data(int class_index, void *obj, CRYPTO_EX_DATA *ad,
                         int idx);





int CRYPTO_set_ex_data(CRYPTO_EX_DATA *ad, int idx, void *val);
void *CRYPTO_get_ex_data(const CRYPTO_EX_DATA *ad, int idx);
# 266 "include/openssl/crypto.h"
typedef struct crypto_threadid_st {
    int dummy;
} CRYPTO_THREADID;
# 293 "include/openssl/crypto.h"
typedef void *(*CRYPTO_malloc_fn)(size_t num, const char *file, int line);
typedef void *(*CRYPTO_realloc_fn)(void *addr, size_t num, const char *file,
                                   int line);
typedef void (*CRYPTO_free_fn)(void *addr, const char *file, int line);
int CRYPTO_set_mem_functions(CRYPTO_malloc_fn malloc_fn,
                             CRYPTO_realloc_fn realloc_fn,
                             CRYPTO_free_fn free_fn);
void CRYPTO_get_mem_functions(CRYPTO_malloc_fn *malloc_fn,
                              CRYPTO_realloc_fn *realloc_fn,
                              CRYPTO_free_fn *free_fn);

void *CRYPTO_malloc(size_t num, const char *file, int line);
void *CRYPTO_zalloc(size_t num, const char *file, int line);
void *CRYPTO_memdup(const void *str, size_t siz, const char *file, int line);
char *CRYPTO_strdup(const char *str, const char *file, int line);
char *CRYPTO_strndup(const char *str, size_t s, const char *file, int line);
void CRYPTO_free(void *ptr, const char *file, int line);
void CRYPTO_clear_free(void *ptr, size_t num, const char *file, int line);
void *CRYPTO_realloc(void *addr, size_t num, const char *file, int line);
void *CRYPTO_clear_realloc(void *addr, size_t old_num, size_t num,
                           const char *file, int line);

int CRYPTO_secure_malloc_init(size_t sz, size_t minsize);
int CRYPTO_secure_malloc_done(void);
void *CRYPTO_secure_malloc(size_t num, const char *file, int line);
void *CRYPTO_secure_zalloc(size_t num, const char *file, int line);
void CRYPTO_secure_free(void *ptr, const char *file, int line);
void CRYPTO_secure_clear_free(void *ptr, size_t num,
                              const char *file, int line);
int CRYPTO_secure_allocated(const void *ptr);
int CRYPTO_secure_malloc_initialized(void);
size_t CRYPTO_secure_actual_size(void *ptr);
size_t CRYPTO_secure_used(void);

void OPENSSL_cleanse(void *ptr, size_t len);
# 370 "include/openssl/crypto.h"
__attribute__((noreturn)) void OPENSSL_die(const char *assertion, const char *file, int line);






int OPENSSL_isservice(void);

int FIPS_mode(void);
int FIPS_mode_set(int r);

void OPENSSL_init(void);

void OPENSSL_fork_prepare(void);
void OPENSSL_fork_parent(void);
void OPENSSL_fork_child(void);


struct tm *OPENSSL_gmtime(const time_t *timer, struct tm *result);
int OPENSSL_gmtime_adj(struct tm *tm, int offset_day, long offset_sec);
int OPENSSL_gmtime_diff(int *pday, int *psec,
                        const struct tm *from, const struct tm *to);
# 401 "include/openssl/crypto.h"
int CRYPTO_memcmp(const void * in_a, const void * in_b, size_t len);
# 441 "include/openssl/crypto.h"
void OPENSSL_cleanup(void);
int OPENSSL_init_crypto(uint64_t opts, const OPENSSL_INIT_SETTINGS *settings);
int OPENSSL_atexit(void (*handler)(void));
void OPENSSL_thread_stop(void);
void OPENSSL_thread_stop_ex(OPENSSL_CTX *ctx);


OPENSSL_INIT_SETTINGS *OPENSSL_INIT_new(void);

int OPENSSL_INIT_set_config_filename(OPENSSL_INIT_SETTINGS *settings,
                                     const char *config_filename);
void OPENSSL_INIT_set_config_file_flags(OPENSSL_INIT_SETTINGS *settings,
                                        unsigned long flags);
int OPENSSL_INIT_set_config_appname(OPENSSL_INIT_SETTINGS *settings,
                                    const char *config_appname);

void OPENSSL_INIT_free(OPENSSL_INIT_SETTINGS *settings);
# 480 "include/openssl/crypto.h"
typedef unsigned int CRYPTO_ONCE;
typedef unsigned int CRYPTO_THREAD_LOCAL;
typedef unsigned int CRYPTO_THREAD_ID;



int CRYPTO_THREAD_run_once(CRYPTO_ONCE *once, void (*init)(void));

int CRYPTO_THREAD_init_local(CRYPTO_THREAD_LOCAL *key, void (*cleanup)(void *));
void *CRYPTO_THREAD_get_local(CRYPTO_THREAD_LOCAL *key);
int CRYPTO_THREAD_set_local(CRYPTO_THREAD_LOCAL *key, void *val);
int CRYPTO_THREAD_cleanup_local(CRYPTO_THREAD_LOCAL *key);

CRYPTO_THREAD_ID CRYPTO_THREAD_get_current_id(void);
int CRYPTO_THREAD_compare_id(CRYPTO_THREAD_ID a, CRYPTO_THREAD_ID b);

OPENSSL_CTX *OPENSSL_CTX_new(void);
void OPENSSL_CTX_free(OPENSSL_CTX *);
# 18 "e_os.h" 2
# 1 "include/internal/nelem.h" 1
# 19 "e_os.h" 2
# 195 "e_os.h"
# 1 "C:/QNX630/target/qnx6/usr/include/sys/time.h" 1 3 4
# 14 "C:/QNX630/target/qnx6/usr/include/sys/time.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/sys/select.h" 1 3 4
# 26 "C:/QNX630/target/qnx6/usr/include/sys/select.h" 3 4
typedef struct fd_set {
    int fds_bits[(256 + sizeof(int) * 8 - 1) / (sizeof(int) * 8)];
} fd_set;
# 42 "C:/QNX630/target/qnx6/usr/include/sys/select.h" 3 4

struct timeval;
extern int select(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__errorfds, struct timeval *__timeout);


struct sigevent;
struct timespec;
union sigval;
extern int _select_event(int __maxfd, fd_set *__readfds, fd_set *__writefds,
                        fd_set *__exceptfds, const struct timespec *__ts,
                        struct sigevent *__event, int (*eventwait)(const struct timespec *__ts,
                        union sigval *__value, void *__arg), void *__arg);
extern int _select_block(const struct timespec *__ts, union sigval *__value, void *__arg);
# 71 "C:/QNX630/target/qnx6/usr/include/sys/select.h" 3 4

# 15 "C:/QNX630/target/qnx6/usr/include/sys/time.h" 2 3 4



typedef _Int32t suseconds_t;












# 1 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 3 4
#pragma pack() 
# 32 "C:/QNX630/target/qnx6/usr/include/sys/time.h" 2 3 4

struct timeval {
        time_t tv_sec;
    suseconds_t tv_usec;
};
# 66 "C:/QNX630/target/qnx6/usr/include/sys/time.h" 3 4
struct itimerval {
        struct timeval it_interval;
        struct timeval it_value;
};
# 80 "C:/QNX630/target/qnx6/usr/include/sys/time.h" 3 4
struct timezone

{
    int tz_minuteswest;
    int tz_dsttime;
};




# 1 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 3 4
#pragma pack()
# 91 "C:/QNX630/target/qnx6/usr/include/sys/time.h" 2 3 4
# 99 "C:/QNX630/target/qnx6/usr/include/sys/time.h" 3 4

extern int getitimer (int __which, struct itimerval *__value);
extern int gettimeofday (struct timeval *__tp, void *__tzp);
extern int setitimer (int __which, const struct itimerval *__value, struct itimerval *__ovalue);
extern int settimeofday(const struct timeval *__tp, const struct timezone *__tzp);
extern int utimes (const char *__path, const struct timeval *__times);

# 196 "e_os.h" 2
# 243 "e_os.h"
# 1 "C:/QNX630/target/qnx6/usr/include/unistd.h" 1 3 4
# 20 "C:/QNX630/target/qnx6/usr/include/unistd.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/confname.h" 1 3 4
# 21 "C:/QNX630/target/qnx6/usr/include/unistd.h" 2 3 4









typedef _Ssizet ssize_t;
# 39 "C:/QNX630/target/qnx6/usr/include/unistd.h" 3 4

# 62 "C:/QNX630/target/qnx6/usr/include/unistd.h" 3 4
typedef int gid_t;






typedef _Uint32t useconds_t;






# 1 "C:/QNX630/target/qnx6/usr/include/process.h" 1 3 4
# 27 "C:/QNX630/target/qnx6/usr/include/process.h" 3 4



void _exit( int __status ) __attribute__((__noreturn__));
extern int execl( const char *__path, const char *__arg0, ... );
extern int execle( const char *__path, const char *__arg0, ... );
extern int execlp( const char *__file, const char *__arg0, ... );
extern int execv( const char *__path, char * const __argv[] );
extern int execve( const char *__path, char * const __argv[], char * const __envp[] );
extern int execvp( const char *__file, char * const __argv[] );
extern pid_t fork(void);
extern pid_t getpgrp( void );
extern pid_t getpid(void);
extern pid_t getppid( void );
extern int setpgid( pid_t __pid, pid_t __pgroupid );



extern pid_t vfork(void);



extern int pthread_atfork(void (*prepare)(void), void (*parent)(void), void (*child)(void));







void __exit( int __status ) __attribute__((__noreturn__));
extern int execlpe( const char *__file, const char *__arg0, ... );
extern int execvpe( const char *__file, char * const __argv[], char * const __envp[] );
extern int gettid(void);
extern char *_cmdname(char *__name);
extern int _cmdfd(void);



extern int spawnl(int __mode, const char *__path, const char *__arg0,...);
extern int spawnle(int __mode, const char *__path, const char *__arg0,...);
extern int spawnlp(int __mode, const char *__path, const char *__arg0,...);
extern int spawnlpe(int __mode, const char *__path, const char *__arg0,...);
extern int spawnv(int __mode, const char *__path, char * const __argv[]);
extern int spawnve(int __mode, const char *__path, char * const __argv[], char * const __envp[]);
extern int spawnvp(int __mode, const char *__path, char * const __argv[]);
extern int spawnvpe(int __mode, const char *__path, char * const __argv[], char * const __envp[]);



# 77 "C:/QNX630/target/qnx6/usr/include/unistd.h" 2 3 4
# 223 "C:/QNX630/target/qnx6/usr/include/unistd.h" 3 4







   extern int optind;






   extern char *optarg;






   extern int opterr;






   extern int optopt;
# 272 "C:/QNX630/target/qnx6/usr/include/unistd.h" 3 4
extern off64_t lseek64(int __fildes, off64_t __offset, int __whence);
extern int ftruncate64(int __fd, off64_t __length);
extern ssize_t pread64(int __filedes, void *__buff, size_t __nbytes, off64_t __offset);
extern ssize_t pwrite64(int __filedes, const void *__buff, size_t __nbytes, off64_t __offset);

extern off64_t tell64(int __fildes);


extern int truncate64(const char *__path, off64_t __length);
extern int lockf64(int __fd, int __function, off64_t __size);




extern char *ctermid( char * );



extern int access( const char *__path, int __mode );
extern unsigned alarm( unsigned int __seconds );
extern int chdir( const char *__path );
extern int chown( const char *__path, uid_t __owner, gid_t __group );
extern int close( int __fildes );
extern size_t confstr( int, char*, size_t );



extern int dup( int __fildes );
extern int dup2( int __fildes, int __fildes2 );
extern int fchown( int __fildes, uid_t __owner, gid_t __group );
extern long fpathconf( int __fildes, int __name );
extern char *getcwd( char *__buf, size_t __size );
extern gid_t getegid( void );
extern uid_t geteuid( void );
extern gid_t getgid( void );
extern int getgroups( int __gidsetsize, gid_t __grouplist[] );
extern char *getlogin( void );
extern pid_t setsid( void );
extern uid_t getuid( void );
extern int isatty( int __fildes );
extern int link( const char *__path1, const char *__path2 );
extern off_t lseek(int __fildes, off_t __offset, int __whence);
extern long pathconf( const char *__path, int __name );
extern int pause( void );
extern int pipe( int __fildes[2] );
extern ssize_t pread(int __filedes, void *__buff, size_t __nbytes, off_t __offset);
extern ssize_t pwrite(int __filedes, const void *__buff, size_t __nbytes, off_t __offset);
extern ssize_t read( int __fildes, void *__buffer, size_t __len );
extern int readlink( const char *__path, char *__buf, size_t __bufsiz );
extern int rmdir( const char *__path );
extern int setgid( gid_t __newgroup );
extern int setuid( uid_t __newuserid );
extern unsigned int sleep( unsigned int __seconds );
extern int symlink( const char *__pname, const char *__slink );
extern void sync( void );
extern long sysconf( int __name );
extern pid_t tcgetpgrp( int __fildes );
extern int tcsetpgrp( int __fildes, pid_t __pgrp_id );
extern char *ttyname( int __fildes );
extern int unlink( const char *__path );
extern ssize_t write( int __fildes, const void *__buf, size_t __len );



extern int fdatasync(int __fildes);
extern int fsync(int __fildes);
extern int ftruncate(int __fd, off_t __length);



extern int getlogin_r(char* __name, size_t __namesize);
extern int ttyname_r( int __fildes, char *__buf, size_t __bufsize );
# 407 "C:/QNX630/target/qnx6/usr/include/unistd.h" 3 4
extern int sethostname(const char *__buffer, size_t __buffer_length);
extern int setgroups( int __gidsetsize, const gid_t *__grouplist );
extern int getgrouplist(const char *__uname, gid_t __agroup, gid_t *__groups, int *__grpcnt);


extern int rcmd(char **__ahost, unsigned short __inport, const char *__locuser, const char *__remuser, const char *__cmd, int *__fd2p);
extern int rresvport(int *__port);
extern int ruserok(char *__rhost, int __superuser, char *__ruser, char *__luser);



extern int gethostname(char *__buffer, size_t __buffer_length);
extern int brk(void *__endds);
extern int chroot(const char *__path);
extern char *crypt(const char *, const char *);
extern void encrypt(char[64], int);




extern int getdtablesize(void);

extern char *getpass(const char *);
extern pid_t getpgid(pid_t __pid);
extern pid_t getsid(pid_t __pid);
extern char *getwd(char *);
extern int lchown( const char *__path, uid_t __owner, gid_t __group );
extern int lockf(int __fd, int __function, off_t __size);
extern int nice(int);
extern void *sbrk(int __incr);
extern pid_t setpgrp(void);
extern int setregid( gid_t __readgroupid, gid_t __effectivegroupid );
extern int setreuid( uid_t __readuserid, uid_t __effectiveuserid );
extern void swab( char *__src, char *__dest, int __num );
extern int truncate(const char *__path, off_t __length);
extern useconds_t ualarm(useconds_t __usec, useconds_t __interval );
extern int usleep(useconds_t __useconds);




extern int getopt( int __argc, char * const __argv[], const char * __optstring );




extern int setegid(gid_t __newegroup);
extern int seteuid(uid_t __newuserid);



struct sigevent;

extern unsigned delay(unsigned int __milliseconds);
extern ssize_t _readx(int __fildes, void *__buffer, size_t __len, unsigned __xtype, void *__xdata, size_t __xdatalen);
extern int readblock(int __fd, size_t __blksize, unsigned __block, int __numblks, void *__buff);
extern ssize_t _writex(int __fildes, const void *__buffer, size_t __len, unsigned __xtype, void *__xdata, size_t __xdatalen);
extern int writeblock(int __fd, size_t __blksize, unsigned __block, int __numblks, const void *__buff);
extern int readcond(int __fd, void *__buff, int __nbytes, int __min, int __time, int __timeout);
extern int ionotify(int __fd, int __action, int __flags, const struct sigevent *__event);
extern int chsize( int __fildes, long __size );
extern off_t tell(int __fildes);
extern int eof( int __fildes );

extern off_t ltrunc( int __fildes, off_t __offset, int __origin );

extern int lock( int __fildes, long __offset, long __nbytes );
extern int _sopenfd(int __fd, int __oflag, int __sflag, int __xtype);
extern int sopenfd(int __fd, int __oflag, int __sflag);
extern int openfd(int __fd, int __oflag);
extern char *qnx_crypt(const char *, const char *);
extern int flink(int __fd, const char *__path);
extern int getdomainname(char *__name, size_t __namelen);
extern int setdomainname(const char *__name, size_t __namelen);






    extern char **environ;


extern int unlock( int __fildes, long __offset, long __nbytes );




# 244 "e_os.h" 2
# 1 "C:/QNX630/target/qnx6/usr/include/sys/types.h" 1 3 4
# 19 "C:/QNX630/target/qnx6/usr/include/sys/types.h" 3 4



typedef _Uint32t mode_t;




typedef _Uint32t dev_t;
# 51 "C:/QNX630/target/qnx6/usr/include/sys/types.h" 3 4








typedef _Uint32t blkcnt_t;




typedef _Uint32t blksize_t;




typedef _Uint32t fsblkcnt_t;




typedef _Uint32t fsfilcnt_t;




typedef _Uint32t nlink_t;
# 94 "C:/QNX630/target/qnx6/usr/include/sys/types.h" 3 4
typedef _Int32t ino_t;




typedef _Int64t ino64_t;
# 201 "C:/QNX630/target/qnx6/usr/include/sys/types.h" 3 4
typedef struct winsize { unsigned short ws_row; unsigned short ws_col; unsigned short ws_xpixel; unsigned short ws_ypixel; } winsize_t;




typedef _Uint32t key_t;



typedef char * caddr_t;
typedef _Paddrt paddr_t;
typedef _Paddr32t paddr32_t;
typedef _Paddr64t paddr64_t;
typedef _Int32t daddr_t;


typedef _Uint16t msg_t;


typedef struct iovec { void *iov_base; _Sizet iov_len; } iov_t;






struct _clockadjust { unsigned long tick_count; long tick_nsec_inc; };
# 236 "C:/QNX630/target/qnx6/usr/include/sys/types.h" 3 4
typedef unsigned char uchar_t;
typedef unsigned short ushort_t;
typedef unsigned int uint_t;
typedef unsigned long ulong_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned long fixpt_t;
typedef unsigned short sel_t;
# 255 "C:/QNX630/target/qnx6/usr/include/sys/types.h" 3 4
struct _itimer { _Uint64t nsec; _Uint64t interval_nsec; };
# 245 "e_os.h" 2
# 272 "e_os.h"
# 1 "C:/QNX630/target/qnx6/usr/include/strings.h" 1 3 4
# 41 "C:/QNX630/target/qnx6/usr/include/strings.h" 3 4








extern int bcmp(const void *, const void *, size_t);
extern void bcopy(const void *, void *, size_t);
extern void bzero(void *, size_t);
extern int ffs(int);
extern char *index(const char *, int);
extern char *rindex(const char *, int);
extern int strcasecmp(const char *, const char *);
extern int strncasecmp(const char *, const char *, size_t);








# 273 "e_os.h" 2
# 11 "crypto/bio/bio_local.h" 2
# 1 "include/internal/sockets.h" 1
# 61 "include/internal/sockets.h"
# 1 "C:/QNX630/target/qnx6/usr/include/sys/param.h" 1 3 4
# 13 "C:/QNX630/target/qnx6/usr/include/sys/param.h" 3 4

# 57 "C:/QNX630/target/qnx6/usr/include/sys/param.h" 3 4

# 62 "include/internal/sockets.h" 2





# 1 "C:/QNX630/target/qnx6/usr/include/netdb.h" 1 3 4
# 84 "C:/QNX630/target/qnx6/usr/include/netdb.h" 3 4
extern int h_errno;






struct hostent {
        char *h_name;
        char **h_aliases;
        int h_addrtype;
        int h_length;
        char **h_addr_list;

};





struct netent {
        char *n_name;
        char **n_aliases;
        int n_addrtype;
        uint32_t n_net;
};

struct servent {
        char *s_name;
        char **s_aliases;
        int s_port;
        char *s_proto;
};

struct protoent {
        char *p_name;
        char **p_aliases;
        int p_proto;
};


struct addrinfo {
        int ai_flags;
        int ai_family;
        int ai_socktype;
        int ai_protocol;
        size_t ai_addrlen;
        char *ai_canonname;
        struct sockaddr *ai_addr;
        struct addrinfo *ai_next;
};
# 222 "C:/QNX630/target/qnx6/usr/include/netdb.h" 3 4
typedef _Int32t socklen_t;




void endhostent (void);
void endnetent (void);
void endprotoent (void);
void endservent (void);
struct hostent *gethostbyaddr (const void *, socklen_t, int);

struct hostent *gethostbyaddr_r (const void *, socklen_t, int, struct hostent *, char *, int, int *);

struct hostent *gethostbyname (const char *);

struct hostent *gethostbyname_r (const char *, struct hostent *, char *, int, int *);


struct hostent *gethostbyname2 (const char *, int);


struct hostent *gethostbyname2_r (const char *, int, struct hostent *, char *, int, int *);

struct hostent *gethostent (void);

struct hostent *gethostent_r (FILE **, struct hostent *, char *, int, int *);

struct netent *getnetbyaddr (uint32_t, int);
struct netent *getnetbyname (const char *);
struct netent *getnetent (void);
struct protoent *getprotobyname (const char *);
struct protoent *getprotobynumber (int);
struct protoent *getprotoent (void);
struct servent *getservbyname (const char *, const char *);
struct servent *getservbyport (int, const char *);
struct servent *getservent (void);

void herror (const char *);
const char *hstrerror (int);

void sethostent (int);
void setnetent (int);
void setprotoent (int);
int getaddrinfo (const char *, const char *, const struct addrinfo *, struct addrinfo **);

int getnameinfo (const struct sockaddr *, socklen_t, char *, socklen_t, char *, socklen_t, int);

void freeaddrinfo (struct addrinfo *);
const char *gai_strerror (int);
void setservent (int);

# 68 "include/internal/sockets.h" 2





# 1 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 1 3 4
# 82 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/sys/uio.h" 1 3 4
# 17 "C:/QNX630/target/qnx6/usr/include/sys/uio.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 3 4
#pragma pack() 
# 18 "C:/QNX630/target/qnx6/usr/include/sys/uio.h" 2 3 4


# 31 "C:/QNX630/target/qnx6/usr/include/sys/uio.h" 3 4

# 43 "C:/QNX630/target/qnx6/usr/include/sys/uio.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 3 4
#pragma pack()
# 44 "C:/QNX630/target/qnx6/usr/include/sys/uio.h" 2 3 4



extern ssize_t readv(int __fildes, const struct iovec *__iov, int __nparts);
extern ssize_t writev(int __fildes, const struct iovec *__iov, int __nparts);


extern ssize_t _readxv(int __fd, struct iovec *__iovec, int __nparts, unsigned __xtype, void *__xdata, size_t __xdatalen, size_t __nbytes);
extern ssize_t _writexv(int __fd, struct iovec *__iovec, int __nparts, unsigned __xtype, void *__xdata, size_t __xdatalen, size_t __nbytes);



# 83 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 2 3 4
# 97 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 3 4
typedef _Uint8t sa_family_t;
# 144 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 3 4
struct linger {
        int l_onoff;
        int l_linger;
};
# 207 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 3 4
struct sockaddr {
        _Uint8t sa_len;
        sa_family_t sa_family;
        char sa_data[14];
};
# 233 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 3 4
struct sockaddr_storage {
        _Uint8t ss_len;
        sa_family_t ss_family;
        char __ss_pad1[((sizeof(_Int64t)) - sizeof(unsigned char) * 2)];
        _Int64t __ss_align;
        char __ss_pad2[(128 - sizeof(unsigned char) * 2 - ((sizeof(_Int64t)) - sizeof(unsigned char) * 2) - (sizeof(_Int64t)))];
};
# 290 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 3 4
struct sockcred {
        uid_t sc_uid;
        uid_t sc_euid;
        gid_t sc_gid;
        gid_t sc_egid;
        int sc_ngroups;
        gid_t sc_groups[1];
};
# 382 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 3 4
struct msghdr {
        void *msg_name;
        socklen_t msg_namelen;
        struct iovec *msg_iov;
        int msg_iovlen;
        void *msg_control;
        socklen_t msg_controllen;
        int msg_flags;
};
# 410 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 3 4
struct cmsghdr {
        socklen_t cmsg_len;
        int cmsg_level;
        int cmsg_type;

};
# 482 "C:/QNX630/target/qnx6/usr/include/sys/socket.h" 3 4
struct osockaddr {
        _Uint16t sa_family;
        char sa_data[14];
};




struct omsghdr {
        caddr_t msg_name;
        int msg_namelen;
        struct iovec *msg_iov;
        int msg_iovlen;
        caddr_t msg_accrights;
        int msg_accrightslen;
};



int __cmsg_alignbytes (void);





int accept (int, struct sockaddr *, socklen_t *);
int bind (int, const struct sockaddr *, socklen_t);
int connect (int, const struct sockaddr *, socklen_t);
int nbaconnect (int, const struct sockaddr *, socklen_t);
int nbaconnect_result (int, int *);
int getpeername (int, struct sockaddr * __restrict, socklen_t * __restrict);

int getsockname (int, struct sockaddr * __restrict, socklen_t * __restrict);

int getsockopt (int, int, int, void * __restrict, socklen_t * __restrict);

int listen (int, int);
ssize_t recv (int, void *, size_t, int);
ssize_t recvfrom (int, void * __restrict, size_t, int, struct sockaddr * __restrict, socklen_t * __restrict);

ssize_t recvmsg (int, struct msghdr *, int);
ssize_t send (int, const void *, size_t, int);
ssize_t sendto (int, const void *, size_t, int, const struct sockaddr *, socklen_t);

ssize_t sendmsg (int, const struct msghdr *, int);
int setsockopt (int, int, int, const void *, socklen_t);
int shutdown (int, int);
int sockatmark (int);
int socket (int, int, int);
int socketpair (int, int, int, int *);

# 74 "include/internal/sockets.h" 2

# 1 "C:/QNX630/target/qnx6/usr/include/sys/un.h" 1 3 4
# 57 "C:/QNX630/target/qnx6/usr/include/sys/un.h" 3 4
struct sockaddr_un {
        uint8_t sun_len;
        sa_family_t sun_family;
        char sun_path[104];
};
# 76 "include/internal/sockets.h" 2







# 1 "C:/QNX630/target/qnx6/usr/include/netinet/in.h" 1 3 4
# 59 "C:/QNX630/target/qnx6/usr/include/netinet/in.h" 3 4
typedef uint32_t in_addr_t;
typedef uint16_t in_port_t;
# 142 "C:/QNX630/target/qnx6/usr/include/netinet/in.h" 3 4
struct in_addr {
        in_addr_t s_addr;
} __attribute__((__packed__));
# 214 "C:/QNX630/target/qnx6/usr/include/netinet/in.h" 3 4
struct sockaddr_in {
        uint8_t sin_len;
        sa_family_t sin_family;
        in_port_t sin_port;
        struct in_addr sin_addr;
        int8_t sin_zero[8];
};
# 231 "C:/QNX630/target/qnx6/usr/include/netinet/in.h" 3 4
struct ip_opts {
        struct in_addr ip_dst;

        int8_t ip_opts[40];



};
# 274 "C:/QNX630/target/qnx6/usr/include/netinet/in.h" 3 4
struct ip_mreq {
        struct in_addr imr_multiaddr;
        struct in_addr imr_interface;
};
# 405 "C:/QNX630/target/qnx6/usr/include/netinet/in.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/netinet6/in6.h" 1 3 4
# 122 "C:/QNX630/target/qnx6/usr/include/netinet6/in6.h" 3 4
struct in6_addr {
        union {
                uint8_t __u6_addr8[16];
                uint16_t __u6_addr16[8];
                uint32_t __u6_addr32[4];
        } __u6_addr;
};
# 145 "C:/QNX630/target/qnx6/usr/include/netinet6/in6.h" 3 4
struct sockaddr_in6 {
        uint8_t sin6_len;
        sa_family_t sin6_family;
        in_port_t sin6_port;
        uint32_t sin6_flowinfo;
        struct in6_addr sin6_addr;
        uint32_t sin6_scope_id;
};
# 223 "C:/QNX630/target/qnx6/usr/include/netinet6/in6.h" 3 4
extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
extern const struct in6_addr in6addr_nodelocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allrouters;
# 367 "C:/QNX630/target/qnx6/usr/include/netinet6/in6.h" 3 4
struct route_in6 {
        struct rtentry *ro_rt;
        struct sockaddr_in6 ro_dst;
};
# 423 "C:/QNX630/target/qnx6/usr/include/netinet6/in6.h" 3 4
struct ipv6_mreq {
        struct in6_addr ipv6mr_multiaddr;
        unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
        struct in6_addr ipi6_addr;
        unsigned int ipi6_ifindex;
};
# 648 "C:/QNX630/target/qnx6/usr/include/netinet6/in6.h" 3 4








struct cmsghdr;

extern int inet6_option_space (int);
extern int inet6_option_init (void *, struct cmsghdr **, int);
extern int inet6_option_append (struct cmsghdr *, const uint8_t *, int, int);

extern uint8_t *inet6_option_alloc (struct cmsghdr *, int, int, int);
extern int inet6_option_next (const struct cmsghdr *, uint8_t **);
extern int inet6_option_find (const struct cmsghdr *, uint8_t **, int);


extern size_t inet6_rthdr_space (int, int);

extern struct cmsghdr *inet6_rthdr_init (void *, int);
extern int inet6_rthdr_add (struct cmsghdr *, const struct in6_addr *, unsigned int);

extern int inet6_rthdr_lasthop (struct cmsghdr *, unsigned int);



extern int inet6_rthdr_segments (const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr (struct cmsghdr *, int);
extern int inet6_rthdr_getflags (const struct cmsghdr *, int);

# 406 "C:/QNX630/target/qnx6/usr/include/netinet/in.h" 2 3 4
# 84 "include/internal/sockets.h" 2
# 1 "C:/QNX630/target/qnx6/usr/include/arpa/inet.h" 1 3 4
# 88 "C:/QNX630/target/qnx6/usr/include/arpa/inet.h" 3 4


uint32_t htonl (uint32_t);
uint16_t htons (uint16_t);
uint32_t ntohl (uint32_t);
uint16_t ntohs (uint16_t);

in_addr_t inet_addr (const char *);

int inet_aton (const char *, struct in_addr *);
unsigned long inet_lnaof (struct in_addr);
struct in_addr inet_makeaddr (unsigned long , unsigned long);
char * inet_neta (unsigned long, char *, size_t);
unsigned long inet_netof (struct in_addr);
unsigned long inet_network (const char *);
char *inet_net_ntop (int, const void *, int, char *, size_t);
int inet_net_pton (int, const char *, void *, size_t);

char *inet_ntoa (struct in_addr);

char *inet_ntoa_r (struct in_addr, char *, int);

const char *inet_ntop (int, const void *, char *, socklen_t);
int inet_pton (int, const char *, void *);

unsigned int inet_nsap_addr (const char *, unsigned char *, int);
char *inet_nsap_ntoa (int, const unsigned char *, char *);


# 85 "include/internal/sockets.h" 2
# 1 "C:/QNX630/target/qnx6/usr/include/netinet/tcp.h" 1 3 4
# 47 "C:/QNX630/target/qnx6/usr/include/netinet/tcp.h" 3 4
typedef _Uint32t tcp_seq;




struct tcphdr {
        _Uint16t th_sport;
        _Uint16t th_dport;
        tcp_seq th_seq;
        tcp_seq th_ack;


        _Uint8t th_x2:4,
                  th_off:4;







        _Uint8t th_flags;






        _Uint16t th_win;
        _Uint16t th_sum;
        _Uint16t th_urp;
} __attribute__((__packed__));
# 86 "include/internal/sockets.h" 2







# 1 "C:/QNX630/target/qnx6/usr/include/sys/ioctl.h" 1 3 4
# 52 "C:/QNX630/target/qnx6/usr/include/sys/ioctl.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/sys/sockio.h" 1 3 4
# 46 "C:/QNX630/target/qnx6/usr/include/sys/sockio.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/net/if.h" 1 3 4
# 101 "C:/QNX630/target/qnx6/usr/include/net/if.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/sys/queue.h" 1 3 4
# 102 "C:/QNX630/target/qnx6/usr/include/net/if.h" 2 3 4



# 1 "C:/QNX630/target/qnx6/usr/include/net/dlt.h" 1 3 4
# 106 "C:/QNX630/target/qnx6/usr/include/net/if.h" 2 3 4



# 1 "C:/QNX630/target/qnx6/usr/include/net/pfil.h" 1 3 4
# 46 "C:/QNX630/target/qnx6/usr/include/net/pfil.h" 3 4
struct mbuf;
struct ifnet;





struct packet_filter_hook {
        struct { struct packet_filter_hook *tqe_next; struct packet_filter_hook **tqe_prev; } pfil_link;
        int (*pfil_func)(void *, struct mbuf **, struct ifnet *, int);
        void *pfil_arg;
        int pfil_flags;
};






typedef struct pfil_list { struct packet_filter_hook *tqh_first; struct packet_filter_hook **tqh_last; } pfil_list_t;




struct pfil_head {
        pfil_list_t ph_in;
        pfil_list_t ph_out;
        int ph_type;
        union {
                u_long phu_val;
                void *phu_ptr;
        } ph_un;


        struct { struct pfil_head *le_next; struct pfil_head **le_prev; } ph_list;
};
typedef struct pfil_head pfil_head_t;

int pfil_run_hooks(struct pfil_head *, struct mbuf **, struct ifnet *,
            int);

int pfil_add_hook(int (*func)(void *, struct mbuf **,
            struct ifnet *, int), void *, int, struct pfil_head *);
int pfil_remove_hook(int (*func)(void *, struct mbuf **,
            struct ifnet *, int), void *, int, struct pfil_head *);

int pfil_head_register(struct pfil_head *);
int pfil_head_unregister(struct pfil_head *);

struct pfil_head *pfil_head_get(int, u_long);


static __inline struct packet_filter_hook *
pfil_hook_get(int dir, struct pfil_head *ph)
{

        if (dir == 0x00000001)
                return (((&ph->ph_in)->tqh_first));
        else if (dir == 0x00000002)
                return (((&ph->ph_out)->tqh_first));
        else
                return (0);
}
# 110 "C:/QNX630/target/qnx6/usr/include/net/if.h" 2 3 4
# 123 "C:/QNX630/target/qnx6/usr/include/net/if.h" 3 4
# 1 "C:/QNX630/target/qnx6/usr/include/altq/if_altq.h" 1 3 4
# 40 "C:/QNX630/target/qnx6/usr/include/altq/if_altq.h" 3 4
struct altq_pktattr; struct tb_regulator; struct top_cdnr;




struct ifaltq {

        struct mbuf *ifq_head;
        struct mbuf *ifq_tail;
        int ifq_len;
        int ifq_maxlen;
        int ifq_drops;


        int altq_type;
        int altq_flags;
        void *altq_disc;
        struct ifnet *altq_ifp;

        int (*altq_enqueue) (struct ifaltq *, struct mbuf *, struct altq_pktattr *);

        struct mbuf *(*altq_dequeue) (struct ifaltq *, int);
        int (*altq_request) (struct ifaltq *, int, void *);


        void *altq_clfier;
        void *(*altq_classify) (void *, struct mbuf *, int);


        struct tb_regulator *altq_tbr;


        struct top_cdnr *altq_cdnr;
};
# 124 "C:/QNX630/target/qnx6/usr/include/net/if.h" 2 3 4
# 159 "C:/QNX630/target/qnx6/usr/include/net/if.h" 3 4
struct mbuf;
struct proc;
struct rtentry;
struct socket;
struct ether_header;
struct ifnet;
struct rt_addrinfo;






struct if_clone {
        struct { struct if_clone *le_next; struct if_clone **le_prev; } ifc_list;
        const char *ifc_name;
        size_t ifc_namelen;

        int (*ifc_create)(struct if_clone *, int);
        void (*ifc_destroy)(struct ifnet *);
};







struct if_clonereq {
        int ifcr_total;
        int ifcr_count;
        char *ifcr_buffer;
};





struct if_data {

        unsigned char ifi_type;
        unsigned char ifi_addrlen;
        unsigned char ifi_hdrlen;
        int ifi_link_state;
        uint64_t ifi_mtu;
        uint64_t ifi_metric;
        uint64_t ifi_baudrate;

        uint64_t ifi_ipackets;
        uint64_t ifi_ierrors;
        uint64_t ifi_opackets;
        uint64_t ifi_oerrors;
        uint64_t ifi_collisions;
        uint64_t ifi_ibytes;
        uint64_t ifi_obytes;
        uint64_t ifi_imcasts;
        uint64_t ifi_omcasts;
        uint64_t ifi_iqdrops;
        uint64_t ifi_noproto;
        struct timeval ifi_lastchange;
};
# 257 "C:/QNX630/target/qnx6/usr/include/net/if.h" 3 4
struct ifqueue {
        struct mbuf *ifq_head;
        struct mbuf *ifq_tail;
        int ifq_len;
        int ifq_maxlen;
        int ifq_drops;
};






struct ifnet_head { struct ifnet *tqh_first; struct ifnet **tqh_last; };

struct ifnet {
        void *if_softc;
        struct { struct ifnet *tqe_next; struct ifnet **tqe_prev; } if_list;
        struct { struct ifaddr *tqh_first; struct ifaddr **tqh_last; } if_addrlist;
        char if_xname[16];
        int if_pcount;
        caddr_t if_bpf;
        unsigned short if_index;
        short if_timer;
        int if_flags;
        struct if_data if_data;




        int (*if_output)
                (struct ifnet *, struct mbuf *, struct sockaddr *, struct rtentry *);

        void (*if_input)
                (struct ifnet *, struct mbuf *);
        void (*if_start)
                (struct ifnet *);
        int (*if_ioctl)
                (struct ifnet *, unsigned long, caddr_t);
        int (*if_init)
                (struct ifnet *);
        void (*if_stop)
                (struct ifnet *, int);
        void (*if_watchdog)
                (struct ifnet *);
        void (*if_drain)
                (struct ifnet *);
        struct ifaltq if_snd;
        struct sockaddr_dl *if_sadl;
        uint8_t *if_broadcastaddr;
        struct ifprefix *if_prefixlist;
        void *if_bridge;
        int if_dlt;

        void *if_softc_nto;

        struct pfil_head if_pfil;
        uint64_t if_capabilities_rx;
        uint64_t if_capabilities_tx;
        uint64_t if_capenable_rx;
        uint64_t if_capenable_tx;





        int if_csum_flags_tx;
        int if_csum_flags_rx;
};
# 439 "C:/QNX630/target/qnx6/usr/include/net/if.h" 3 4
struct ifaddr_data {
        int64_t ifad_inbytes;
        int64_t ifad_outbytes;
};







struct ifaddr {
        struct sockaddr *ifa_addr;
        struct sockaddr *ifa_dstaddr;

        struct sockaddr *ifa_netmask;
        struct ifnet *ifa_ifp;
        struct { struct ifaddr *tqe_next; struct ifaddr **tqe_prev; } ifa_list;
        struct ifaddr_data ifa_data;
        void (*ifa_rtrequest)
                    (int, struct rtentry *, struct rt_addrinfo *);
        unsigned int ifa_flags;
        int ifa_refcnt;
        int ifa_metric;
};
# 472 "C:/QNX630/target/qnx6/usr/include/net/if.h" 3 4
struct ifprefix {
        struct sockaddr *ifpr_prefix;
        struct ifnet *ifpr_ifp;
        struct ifprefix *ifpr_next;
        unsigned char ifpr_plen;
        unsigned char ifpr_type;
};





struct if_msghdr {
        unsigned short ifm_msglen;
        unsigned char ifm_version;
        unsigned char ifm_type;
        int ifm_addrs;
        int ifm_flags;
        unsigned short ifm_index;
        struct if_data ifm_data;
};
# 511 "C:/QNX630/target/qnx6/usr/include/net/if.h" 3 4
struct ifa_msghdr {
        unsigned short ifam_msglen;
        unsigned char ifam_version;
        unsigned char ifam_type;
        int ifam_addrs;
        int ifam_flags;
        unsigned short ifam_index;
        int ifam_metric;
};




struct if_announcemsghdr {
        unsigned short ifan_msglen;
        unsigned char ifan_version;
        unsigned char ifan_type;
        unsigned short ifan_index;
        char ifan_name[16];
        unsigned short ifan_what;
};
# 542 "C:/QNX630/target/qnx6/usr/include/net/if.h" 3 4
struct ifreq {
        char ifr_name[16];
        union {
                struct sockaddr ifru_addr;
                struct sockaddr ifru_dstaddr;
                struct sockaddr ifru_broadaddr;



                int ifru_flags;

                int ifru_metric;
                int ifru_mtu;
                int ifru_dlt;
                unsigned int ifru_value;
                caddr_t ifru_data;
        } ifr_ifru;
# 569 "C:/QNX630/target/qnx6/usr/include/net/if.h" 3 4
};

struct ifcapreq {
        char ifcr_name[16];
        uint64_t ifcr_capabilities_rx;
        uint64_t ifcr_capabilities_tx;
        uint64_t ifcr_capenable_rx;
        uint64_t ifcr_capenable_tx;
};

struct ifaliasreq {
        char ifra_name[16];
        struct sockaddr ifra_addr;
        struct sockaddr ifra_dstaddr;

        struct sockaddr ifra_mask;
};

struct ifmediareq {
        char ifm_name[16];
        int ifm_current;
        int ifm_mask;
        int ifm_status;
        int ifm_active;
        int ifm_count;

        int *ifm_ulist;
};


struct ifdrv {
        char ifd_name[16];
        unsigned long ifd_cmd;
        size_t ifd_len;
        void *ifd_data;
};







struct ifconf {



        short ifc_len;

        union {
                caddr_t ifcu_buf;
                struct ifreq *ifcu_req;
        } ifc_ifcu;


};




struct if_laddrreq {
        char iflr_name[16];
        unsigned int flags;

        unsigned int prefixlen;
        struct sockaddr_storage addr;
        struct sockaddr_storage dstaddr;
};


# 1 "C:/QNX630/target/qnx6/usr/include/net/if_arp.h" 1 3 4
# 59 "C:/QNX630/target/qnx6/usr/include/net/if_arp.h" 3 4
struct arphdr {
        uint16_t ar_hrd;






        uint16_t ar_pro;
        uint8_t ar_hln;
        uint8_t ar_pln;
        uint16_t ar_op;
# 91 "C:/QNX630/target/qnx6/usr/include/net/if_arp.h" 3 4
} __attribute__((__packed__));





struct arpreq {
        struct sockaddr arp_pa;
        struct sockaddr arp_ha;
        int arp_flags;
};
# 112 "C:/QNX630/target/qnx6/usr/include/net/if_arp.h" 3 4
struct arpstat {
        uint64_t as_sndtotal;
        uint64_t as_sndreply;
        uint64_t as_sndrequest;

        uint64_t as_rcvtotal;
        uint64_t as_rcvrequest;
        uint64_t as_rcvreply;
        uint64_t as_rcvmcast;
        uint64_t as_rcvbadproto;
        uint64_t as_rcvbadlen;
        uint64_t as_rcvzerotpa;
        uint64_t as_rcvzerospa;
        uint64_t as_rcvnoint;
        uint64_t as_rcvlocalsha;
        uint64_t as_rcvbcastsha;
        uint64_t as_rcvlocalspa;
        uint64_t as_rcvoverperm;
        uint64_t as_rcvoverint;
        uint64_t as_rcvover;
        uint64_t as_rcvlenchg;

        uint64_t as_dfrtotal;
        uint64_t as_dfrsent;
        uint64_t as_dfrdropped;

        uint64_t as_allocfail;
};
# 640 "C:/QNX630/target/qnx6/usr/include/net/if.h" 2 3 4
# 844 "C:/QNX630/target/qnx6/usr/include/net/if.h" 3 4
struct if_nameindex {
        unsigned int if_index;
        char *if_name;
};


unsigned int if_nametoindex (const char *);
char * if_indextoname (unsigned int, char *);
struct if_nameindex * if_nameindex (void);
void if_freenameindex (struct if_nameindex *);

# 47 "C:/QNX630/target/qnx6/usr/include/sys/sockio.h" 2 3 4
# 53 "C:/QNX630/target/qnx6/usr/include/sys/ioctl.h" 2 3 4


# 1 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_pack64.h" 3 4
#pragma pack() 
# 56 "C:/QNX630/target/qnx6/usr/include/sys/ioctl.h" 2 3 4




struct ttysize {
    unsigned short ts_lines;
    unsigned short ts_cols;
    unsigned short ts_xxx;
    unsigned short ts_yyy;
};
# 1 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 1 3 4
# 12 "C:/QNX630/target/qnx6/usr/include/_packpop.h" 3 4
#pragma pack()
# 67 "C:/QNX630/target/qnx6/usr/include/sys/ioctl.h" 2 3 4
# 200 "C:/QNX630/target/qnx6/usr/include/sys/ioctl.h" 3 4


int ioctl(int __fd, int __cmd, ...);


# 94 "include/internal/sockets.h" 2
# 12 "crypto/bio/bio_local.h" 2
# 1 "include/internal/refcount.h" 1
# 153 "include/internal/refcount.h"
typedef int CRYPTO_REF_COUNT;
# 13 "crypto/bio/bio_local.h" 2
# 75 "crypto/bio/bio_local.h"
union bio_addr_st {
    struct sockaddr sa;

    struct sockaddr_in6 s_in6;

    struct sockaddr_in s_in;

    struct sockaddr_un s_un;

};




# 1 "include/internal/cryptlib.h" 1
# 24 "include/internal/cryptlib.h"
# 1 "include/openssl/buffer.h" 1
# 12 "include/openssl/buffer.h"
        

# 1 "include/openssl/macros.h" 1
# 15 "include/openssl/buffer.h" 2
# 23 "include/openssl/buffer.h"
# 1 "include/openssl/buffererr.h" 1
# 13 "include/openssl/buffererr.h"
        

# 1 "include/openssl/macros.h" 1
# 16 "include/openssl/buffererr.h" 2
# 27 "include/openssl/buffererr.h"
int ERR_load_BUF_strings(void);
# 24 "include/openssl/buffer.h" 2






# 1 "C:/QNX630/target/qnx6/usr/include/stddef.h" 1 3 4
# 23 "C:/QNX630/target/qnx6/usr/include/stddef.h" 3 4








typedef _Intptrt ptrdiff_t;
# 44 "C:/QNX630/target/qnx6/usr/include/stddef.h" 3 4

# 31 "include/openssl/buffer.h" 2
# 42 "include/openssl/buffer.h"
struct buf_mem_st {
    size_t length;
    char *data;
    size_t max;
    unsigned long flags;
};



BUF_MEM *BUF_MEM_new(void);
BUF_MEM *BUF_MEM_new_ex(unsigned long flags);
void BUF_MEM_free(BUF_MEM *a);
size_t BUF_MEM_grow(BUF_MEM *str, size_t len);
size_t BUF_MEM_grow_clean(BUF_MEM *str, size_t len);
void BUF_reverse(unsigned char *out, const unsigned char *in, size_t siz);
# 25 "include/internal/cryptlib.h" 2
# 1 "include/openssl/bio.h" 1
# 12 "include/openssl/bio.h"
        

# 1 "include/openssl/macros.h" 1
# 15 "include/openssl/bio.h" 2
# 24 "include/openssl/bio.h"
# 1 "C:/QNX630/target/qnx6/usr/include/stdarg.h" 1 3 4
# 14 "C:/QNX630/target/qnx6/usr/include/stdarg.h" 3 4
typedef __va_list va_list;
# 25 "include/openssl/bio.h" 2


# 1 "include/openssl/bioerr.h" 1
# 13 "include/openssl/bioerr.h"
        

# 1 "include/openssl/macros.h" 1
# 16 "include/openssl/bioerr.h" 2
# 27 "include/openssl/bioerr.h"
int ERR_load_BIO_strings(void);
# 28 "include/openssl/bio.h" 2
# 205 "include/openssl/bio.h"
typedef union bio_addr_st BIO_ADDR;
typedef struct addrinfo BIO_ADDRINFO;

int BIO_get_new_index(void);
void BIO_set_flags(BIO *b, int flags);
int BIO_test_flags(const BIO *b, int flags);
void BIO_clear_flags(BIO *b, int flags);
# 267 "include/openssl/bio.h"
typedef long (*BIO_callback_fn)(BIO *b, int oper, const char *argp, int argi,
                                long argl, long ret);
typedef long (*BIO_callback_fn_ex)(BIO *b, int oper, const char *argp,
                                   size_t len, int argi,
                                   long argl, int ret, size_t *processed);
BIO_callback_fn BIO_get_callback(const BIO *b);
void BIO_set_callback(BIO *b, BIO_callback_fn callback);

BIO_callback_fn_ex BIO_get_callback_ex(const BIO *b);
void BIO_set_callback_ex(BIO *b, BIO_callback_fn_ex callback);

char *BIO_get_callback_arg(const BIO *b);
void BIO_set_callback_arg(BIO *b, char *arg);

typedef struct bio_method_st BIO_METHOD;

const char *BIO_method_name(const BIO *b);
int BIO_method_type(const BIO *b);

typedef int BIO_info_cb(BIO *, int, int);
typedef BIO_info_cb bio_info_cb;

struct stack_st_BIO; typedef int (*sk_BIO_compfunc)(const BIO * const *a, const BIO *const *b); typedef void (*sk_BIO_freefunc)(BIO *a); typedef BIO * (*sk_BIO_copyfunc)(const BIO *a); static __attribute__((unused)) inline int sk_BIO_num(const struct stack_st_BIO *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline BIO *sk_BIO_value(const struct stack_st_BIO *sk, int idx) { return (BIO *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_BIO *sk_BIO_new(sk_BIO_compfunc compare) { return (struct stack_st_BIO *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_BIO *sk_BIO_new_null(void) { return (struct stack_st_BIO *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_BIO *sk_BIO_new_reserve(sk_BIO_compfunc compare, int n) { return (struct stack_st_BIO *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_BIO_reserve(struct stack_st_BIO *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_BIO_free(struct stack_st_BIO *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_BIO_zero(struct stack_st_BIO *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline BIO *sk_BIO_delete(struct stack_st_BIO *sk, int i) { return (BIO *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline BIO *sk_BIO_delete_ptr(struct stack_st_BIO *sk, BIO *ptr) { return (BIO *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_BIO_push(struct stack_st_BIO *sk, BIO *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_BIO_unshift(struct stack_st_BIO *sk, BIO *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline BIO *sk_BIO_pop(struct stack_st_BIO *sk) { return (BIO *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline BIO *sk_BIO_shift(struct stack_st_BIO *sk) { return (BIO *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_BIO_pop_free(struct stack_st_BIO *sk, sk_BIO_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_BIO_insert(struct stack_st_BIO *sk, BIO *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline BIO *sk_BIO_set(struct stack_st_BIO *sk, int idx, BIO *ptr) { return (BIO *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_BIO_find(struct stack_st_BIO *sk, BIO *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_BIO_find_ex(struct stack_st_BIO *sk, BIO *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_BIO_sort(struct stack_st_BIO *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_BIO_is_sorted(const struct stack_st_BIO *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_BIO * sk_BIO_dup(const struct stack_st_BIO *sk) { return (struct stack_st_BIO *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_BIO *sk_BIO_deep_copy(const struct stack_st_BIO *sk, sk_BIO_copyfunc copyfunc, sk_BIO_freefunc freefunc) { return (struct stack_st_BIO *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_BIO_compfunc sk_BIO_set_cmp_func(struct stack_st_BIO *sk, sk_BIO_compfunc compare) { return (sk_BIO_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }


typedef int asn1_ps_func (BIO *b, unsigned char **pbuf, int *plen,
                          void *parg);

typedef void (*BIO_dgram_sctp_notification_handler_fn) (BIO *b,
                                                        void *context,
                                                        void *buf);
# 521 "include/openssl/bio.h"
size_t BIO_ctrl_pending(BIO *b);
size_t BIO_ctrl_wpending(BIO *b);
# 541 "include/openssl/bio.h"
size_t BIO_ctrl_get_write_guarantee(BIO *b);
size_t BIO_ctrl_get_read_request(BIO *b);
int BIO_ctrl_reset_read_request(BIO *b);
# 568 "include/openssl/bio.h"
int BIO_set_ex_data(BIO *bio, int idx, void *data);
void *BIO_get_ex_data(BIO *bio, int idx);
uint64_t BIO_number_read(BIO *bio);
uint64_t BIO_number_written(BIO *bio);


int BIO_asn1_set_prefix(BIO *b, asn1_ps_func *prefix,
                        asn1_ps_func *prefix_free);
int BIO_asn1_get_prefix(BIO *b, asn1_ps_func **pprefix,
                        asn1_ps_func **pprefix_free);
int BIO_asn1_set_suffix(BIO *b, asn1_ps_func *suffix,
                        asn1_ps_func *suffix_free);
int BIO_asn1_get_suffix(BIO *b, asn1_ps_func **psuffix,
                        asn1_ps_func **psuffix_free);

const BIO_METHOD *BIO_s_file(void);
BIO *BIO_new_file(const char *filename, const char *mode);

BIO *BIO_new_fp(FILE *stream, int close_flag);

BIO *BIO_new(const BIO_METHOD *type);
int BIO_free(BIO *a);
void BIO_set_data(BIO *a, void *ptr);
void *BIO_get_data(BIO *a);
void BIO_set_init(BIO *a, int init);
int BIO_get_init(BIO *a);
void BIO_set_shutdown(BIO *a, int shut);
int BIO_get_shutdown(BIO *a);
void BIO_vfree(BIO *a);
int BIO_up_ref(BIO *a);
int BIO_read(BIO *b, void *data, int dlen);
int BIO_read_ex(BIO *b, void *data, size_t dlen, size_t *readbytes);
int BIO_gets(BIO *bp, char *buf, int size);
int BIO_write(BIO *b, const void *data, int dlen);
int BIO_write_ex(BIO *b, const void *data, size_t dlen, size_t *written);
int BIO_puts(BIO *bp, const char *buf);
int BIO_indent(BIO *b, int indent, int max);
long BIO_ctrl(BIO *bp, int cmd, long larg, void *parg);
long BIO_callback_ctrl(BIO *b, int cmd, BIO_info_cb *fp);
void *BIO_ptr_ctrl(BIO *bp, int cmd, long larg);
long BIO_int_ctrl(BIO *bp, int cmd, long larg, int iarg);
BIO *BIO_push(BIO *b, BIO *append);
BIO *BIO_pop(BIO *b);
void BIO_free_all(BIO *a);
BIO *BIO_find_type(BIO *b, int bio_type);
BIO *BIO_next(BIO *b);
void BIO_set_next(BIO *b, BIO *next);
BIO *BIO_get_retry_BIO(BIO *bio, int *reason);
int BIO_get_retry_reason(BIO *bio);
void BIO_set_retry_reason(BIO *bio, int reason);
BIO *BIO_dup_chain(BIO *in);

int BIO_nread0(BIO *bio, char **buf);
int BIO_nread(BIO *bio, char **buf, int num);
int BIO_nwrite0(BIO *bio, char **buf);
int BIO_nwrite(BIO *bio, char **buf, int num);

long BIO_debug_callback(BIO *bio, int cmd, const char *argp, int argi,
                        long argl, long ret);

const BIO_METHOD *BIO_s_mem(void);
const BIO_METHOD *BIO_s_secmem(void);
BIO *BIO_new_mem_buf(const void *buf, int len);

const BIO_METHOD *BIO_s_socket(void);
const BIO_METHOD *BIO_s_connect(void);
const BIO_METHOD *BIO_s_accept(void);

const BIO_METHOD *BIO_s_fd(void);
const BIO_METHOD *BIO_s_log(void);
const BIO_METHOD *BIO_s_bio(void);
const BIO_METHOD *BIO_s_null(void);
const BIO_METHOD *BIO_f_null(void);
const BIO_METHOD *BIO_f_buffer(void);
const BIO_METHOD *BIO_f_linebuffer(void);
const BIO_METHOD *BIO_f_nbio_test(void);
const BIO_METHOD *BIO_f_prefix(void);

const BIO_METHOD *BIO_s_datagram(void);
int BIO_dgram_non_fatal_error(int error);
BIO *BIO_new_dgram(int fd, int close_flag);
# 662 "include/openssl/bio.h"
int BIO_sock_should_retry(int i);
int BIO_sock_non_fatal_error(int error);
int BIO_socket_wait(int fd, int for_read, time_t max_time);
int BIO_wait(BIO *bio, time_t max_time);
int BIO_connect_retry(BIO *bio, int timeout);


int BIO_fd_should_retry(int i);
int BIO_fd_non_fatal_error(int error);
int BIO_dump_cb(int (*cb) (const void *data, size_t len, void *u),
                void *u, const void *s, int len);
int BIO_dump_indent_cb(int (*cb) (const void *data, size_t len, void *u),
                       void *u, const void *s, int len, int indent);
int BIO_dump(BIO *b, const void *bytes, int len);
int BIO_dump_indent(BIO *b, const void *bytes, int len, int indent);

int BIO_dump_fp(FILE *fp, const void *s, int len);
int BIO_dump_indent_fp(FILE *fp, const void *s, int len, int indent);

int BIO_hex_string(BIO *out, int indent, int width, const void *data,
                   int datalen);


BIO_ADDR *BIO_ADDR_new(void);
int BIO_ADDR_rawmake(BIO_ADDR *ap, int family,
                     const void *where, size_t wherelen, unsigned short port);
void BIO_ADDR_free(BIO_ADDR *);
void BIO_ADDR_clear(BIO_ADDR *ap);
int BIO_ADDR_family(const BIO_ADDR *ap);
int BIO_ADDR_rawaddress(const BIO_ADDR *ap, void *p, size_t *l);
unsigned short BIO_ADDR_rawport(const BIO_ADDR *ap);
char *BIO_ADDR_hostname_string(const BIO_ADDR *ap, int numeric);
char *BIO_ADDR_service_string(const BIO_ADDR *ap, int numeric);
char *BIO_ADDR_path_string(const BIO_ADDR *ap);

const BIO_ADDRINFO *BIO_ADDRINFO_next(const BIO_ADDRINFO *bai);
int BIO_ADDRINFO_family(const BIO_ADDRINFO *bai);
int BIO_ADDRINFO_socktype(const BIO_ADDRINFO *bai);
int BIO_ADDRINFO_protocol(const BIO_ADDRINFO *bai);
const BIO_ADDR *BIO_ADDRINFO_address(const BIO_ADDRINFO *bai);
void BIO_ADDRINFO_free(BIO_ADDRINFO *bai);

enum BIO_hostserv_priorities {
    BIO_PARSE_PRIO_HOST, BIO_PARSE_PRIO_SERV
};
int BIO_parse_hostserv(const char *hostserv, char **host, char **service,
                       enum BIO_hostserv_priorities hostserv_prio);
enum BIO_lookup_type {
    BIO_LOOKUP_CLIENT, BIO_LOOKUP_SERVER
};
int BIO_lookup(const char *host, const char *service,
               enum BIO_lookup_type lookup_type,
               int family, int socktype, BIO_ADDRINFO **res);
int BIO_lookup_ex(const char *host, const char *service,
                  int lookup_type, int family, int socktype, int protocol,
                  BIO_ADDRINFO **res);
int BIO_sock_error(int sock);
int BIO_socket_ioctl(int fd, long type, void *arg);
int BIO_socket_nbio(int fd, int mode);
int BIO_sock_init(void);



int BIO_set_tcp_ndelay(int sock, int turn_on);

struct hostent *BIO_gethostbyname(const char *name) __attribute__ ((deprecated));
int BIO_get_port(const char *str, unsigned short *port_ptr) __attribute__ ((deprecated));
int BIO_get_host_ip(const char *str, unsigned char *ip) __attribute__ ((deprecated));
int BIO_get_accept_socket(char *host_port, int mode) __attribute__ ((deprecated));
int BIO_accept(int sock, char **ip_port) __attribute__ ((deprecated));

union BIO_sock_info_u {
    BIO_ADDR *addr;
};
enum BIO_sock_info_type {
    BIO_SOCK_INFO_ADDRESS
};
int BIO_sock_info(int sock,
                  enum BIO_sock_info_type type, union BIO_sock_info_u *info);







int BIO_socket(int domain, int socktype, int protocol, int options);
int BIO_connect(int sock, const BIO_ADDR *addr, int options);
int BIO_bind(int sock, const BIO_ADDR *addr, int options);
int BIO_listen(int sock, const BIO_ADDR *addr, int options);
int BIO_accept_ex(int accept_sock, BIO_ADDR *addr, int options);
int BIO_closesocket(int sock);

BIO *BIO_new_socket(int sock, int close_flag);
BIO *BIO_new_connect(const char *host_port);
BIO *BIO_new_accept(const char *host_port);


BIO *BIO_new_fd(int fd, int close_flag);

int BIO_new_bio_pair(BIO **bio1, size_t writebuf1,
                     BIO **bio2, size_t writebuf2);






void BIO_copy_next_retry(BIO *b);
# 793 "include/openssl/bio.h"
int BIO_printf(BIO *bio, const char *format, ...)
__attribute__((__format__(__printf__, 2, 3)));
int BIO_vprintf(BIO *bio, const char *format, va_list args)
__attribute__((__format__(__printf__, 2, 0)));
int BIO_snprintf(char *buf, size_t n, const char *format, ...)
__attribute__((__format__(__printf__, 3, 4)));
int BIO_vsnprintf(char *buf, size_t n, const char *format, va_list args)
__attribute__((__format__(__printf__, 3, 0)));




BIO_METHOD *BIO_meth_new(int type, const char *name);
void BIO_meth_free(BIO_METHOD *biom);
int (*BIO_meth_get_write(const BIO_METHOD *biom)) (BIO *, const char *, int);
int (*BIO_meth_get_write_ex(const BIO_METHOD *biom)) (BIO *, const char *, size_t,
                                                size_t *);
int BIO_meth_set_write(BIO_METHOD *biom,
                       int (*write) (BIO *, const char *, int));
int BIO_meth_set_write_ex(BIO_METHOD *biom,
                       int (*bwrite) (BIO *, const char *, size_t, size_t *));
int (*BIO_meth_get_read(const BIO_METHOD *biom)) (BIO *, char *, int);
int (*BIO_meth_get_read_ex(const BIO_METHOD *biom)) (BIO *, char *, size_t, size_t *);
int BIO_meth_set_read(BIO_METHOD *biom,
                      int (*read) (BIO *, char *, int));
int BIO_meth_set_read_ex(BIO_METHOD *biom,
                         int (*bread) (BIO *, char *, size_t, size_t *));
int (*BIO_meth_get_puts(const BIO_METHOD *biom)) (BIO *, const char *);
int BIO_meth_set_puts(BIO_METHOD *biom,
                      int (*puts) (BIO *, const char *));
int (*BIO_meth_get_gets(const BIO_METHOD *biom)) (BIO *, char *, int);
int BIO_meth_set_gets(BIO_METHOD *biom,
                      int (*gets) (BIO *, char *, int));
long (*BIO_meth_get_ctrl(const BIO_METHOD *biom)) (BIO *, int, long, void *);
int BIO_meth_set_ctrl(BIO_METHOD *biom,
                      long (*ctrl) (BIO *, int, long, void *));
int (*BIO_meth_get_create(const BIO_METHOD *bion)) (BIO *);
int BIO_meth_set_create(BIO_METHOD *biom, int (*create) (BIO *));
int (*BIO_meth_get_destroy(const BIO_METHOD *biom)) (BIO *);
int BIO_meth_set_destroy(BIO_METHOD *biom, int (*destroy) (BIO *));
long (*BIO_meth_get_callback_ctrl(const BIO_METHOD *biom))
                                 (BIO *, int, BIO_info_cb *);
int BIO_meth_set_callback_ctrl(BIO_METHOD *biom,
                               long (*callback_ctrl) (BIO *, int,
                                                      BIO_info_cb *));
# 26 "include/internal/cryptlib.h" 2
# 1 "include/openssl/err.h" 1
# 12 "include/openssl/err.h"
        

# 1 "include/openssl/macros.h" 1
# 15 "include/openssl/err.h" 2
# 28 "include/openssl/err.h"
# 1 "include/openssl/lhash.h" 1
# 16 "include/openssl/lhash.h"
        

# 1 "include/openssl/macros.h" 1
# 19 "include/openssl/lhash.h" 2
# 30 "include/openssl/lhash.h"
typedef struct lhash_node_st OPENSSL_LH_NODE;
typedef int (*OPENSSL_LH_COMPFUNC) (const void *, const void *);
typedef unsigned long (*OPENSSL_LH_HASHFUNC) (const void *);
typedef void (*OPENSSL_LH_DOALL_FUNC) (void *);
typedef void (*OPENSSL_LH_DOALL_FUNCARG) (void *, void *);
typedef struct lhash_st OPENSSL_LHASH;
# 78 "include/openssl/lhash.h"
int OPENSSL_LH_error(OPENSSL_LHASH *lh);
OPENSSL_LHASH *OPENSSL_LH_new(OPENSSL_LH_HASHFUNC h, OPENSSL_LH_COMPFUNC c);
void OPENSSL_LH_free(OPENSSL_LHASH *lh);
void OPENSSL_LH_flush(OPENSSL_LHASH *lh);
void *OPENSSL_LH_insert(OPENSSL_LHASH *lh, void *data);
void *OPENSSL_LH_delete(OPENSSL_LHASH *lh, const void *data);
void *OPENSSL_LH_retrieve(OPENSSL_LHASH *lh, const void *data);
void OPENSSL_LH_doall(OPENSSL_LHASH *lh, OPENSSL_LH_DOALL_FUNC func);
void OPENSSL_LH_doall_arg(OPENSSL_LHASH *lh, OPENSSL_LH_DOALL_FUNCARG func, void *arg);
unsigned long OPENSSL_LH_strhash(const char *c);
unsigned long OPENSSL_LH_num_items(const OPENSSL_LHASH *lh);
unsigned long OPENSSL_LH_get_down_load(const OPENSSL_LHASH *lh);
void OPENSSL_LH_set_down_load(OPENSSL_LHASH *lh, unsigned long down_load);


void OPENSSL_LH_stats(const OPENSSL_LHASH *lh, FILE *fp);
void OPENSSL_LH_node_stats(const OPENSSL_LHASH *lh, FILE *fp);
void OPENSSL_LH_node_usage_stats(const OPENSSL_LHASH *lh, FILE *fp);

void OPENSSL_LH_stats_bio(const OPENSSL_LHASH *lh, BIO *out);
void OPENSSL_LH_node_stats_bio(const OPENSSL_LHASH *lh, BIO *out);
void OPENSSL_LH_node_usage_stats_bio(const OPENSSL_LHASH *lh, BIO *out);
# 207 "include/openssl/lhash.h"
struct lhash_st_OPENSSL_STRING { union lh_OPENSSL_STRING_dummy { void* d1; unsigned long d2; int d3; } dummy; }; static __attribute__((unused)) inline struct lhash_st_OPENSSL_STRING *lh_OPENSSL_STRING_new(unsigned long (*hfn)(const OPENSSL_STRING *), int (*cfn)(const OPENSSL_STRING *, const OPENSSL_STRING *)) { return (struct lhash_st_OPENSSL_STRING *) OPENSSL_LH_new((OPENSSL_LH_HASHFUNC)hfn, (OPENSSL_LH_COMPFUNC)cfn); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_free(struct lhash_st_OPENSSL_STRING *lh) { OPENSSL_LH_free((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_flush(struct lhash_st_OPENSSL_STRING *lh) { OPENSSL_LH_flush((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline OPENSSL_STRING *lh_OPENSSL_STRING_insert(struct lhash_st_OPENSSL_STRING *lh, OPENSSL_STRING *d) { return (OPENSSL_STRING *)OPENSSL_LH_insert((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline OPENSSL_STRING *lh_OPENSSL_STRING_delete(struct lhash_st_OPENSSL_STRING *lh, const OPENSSL_STRING *d) { return (OPENSSL_STRING *)OPENSSL_LH_delete((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline OPENSSL_STRING *lh_OPENSSL_STRING_retrieve(struct lhash_st_OPENSSL_STRING *lh, const OPENSSL_STRING *d) { return (OPENSSL_STRING *)OPENSSL_LH_retrieve((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline int lh_OPENSSL_STRING_error(struct lhash_st_OPENSSL_STRING *lh) { return OPENSSL_LH_error((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline unsigned long lh_OPENSSL_STRING_num_items(struct lhash_st_OPENSSL_STRING *lh) { return OPENSSL_LH_num_items((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_node_stats_bio(const struct lhash_st_OPENSSL_STRING *lh, BIO *out) { OPENSSL_LH_node_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_node_usage_stats_bio(const struct lhash_st_OPENSSL_STRING *lh, BIO *out) { OPENSSL_LH_node_usage_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_stats_bio(const struct lhash_st_OPENSSL_STRING *lh, BIO *out) { OPENSSL_LH_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline unsigned long lh_OPENSSL_STRING_get_down_load(struct lhash_st_OPENSSL_STRING *lh) { return OPENSSL_LH_get_down_load((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_set_down_load(struct lhash_st_OPENSSL_STRING *lh, unsigned long dl) { OPENSSL_LH_set_down_load((OPENSSL_LHASH *)lh, dl); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_doall(struct lhash_st_OPENSSL_STRING *lh, void (*doall)(OPENSSL_STRING *)) { OPENSSL_LH_doall((OPENSSL_LHASH *)lh, (OPENSSL_LH_DOALL_FUNC)doall); } struct lhash_st_OPENSSL_STRING;
# 217 "include/openssl/lhash.h"
struct lhash_st_OPENSSL_CSTRING { union lh_OPENSSL_CSTRING_dummy { void* d1; unsigned long d2; int d3; } dummy; }; static __attribute__((unused)) inline struct lhash_st_OPENSSL_CSTRING *lh_OPENSSL_CSTRING_new(unsigned long (*hfn)(const OPENSSL_CSTRING *), int (*cfn)(const OPENSSL_CSTRING *, const OPENSSL_CSTRING *)) { return (struct lhash_st_OPENSSL_CSTRING *) OPENSSL_LH_new((OPENSSL_LH_HASHFUNC)hfn, (OPENSSL_LH_COMPFUNC)cfn); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_free(struct lhash_st_OPENSSL_CSTRING *lh) { OPENSSL_LH_free((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_flush(struct lhash_st_OPENSSL_CSTRING *lh) { OPENSSL_LH_flush((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline OPENSSL_CSTRING *lh_OPENSSL_CSTRING_insert(struct lhash_st_OPENSSL_CSTRING *lh, OPENSSL_CSTRING *d) { return (OPENSSL_CSTRING *)OPENSSL_LH_insert((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline OPENSSL_CSTRING *lh_OPENSSL_CSTRING_delete(struct lhash_st_OPENSSL_CSTRING *lh, const OPENSSL_CSTRING *d) { return (OPENSSL_CSTRING *)OPENSSL_LH_delete((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline OPENSSL_CSTRING *lh_OPENSSL_CSTRING_retrieve(struct lhash_st_OPENSSL_CSTRING *lh, const OPENSSL_CSTRING *d) { return (OPENSSL_CSTRING *)OPENSSL_LH_retrieve((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline int lh_OPENSSL_CSTRING_error(struct lhash_st_OPENSSL_CSTRING *lh) { return OPENSSL_LH_error((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline unsigned long lh_OPENSSL_CSTRING_num_items(struct lhash_st_OPENSSL_CSTRING *lh) { return OPENSSL_LH_num_items((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_node_stats_bio(const struct lhash_st_OPENSSL_CSTRING *lh, BIO *out) { OPENSSL_LH_node_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_node_usage_stats_bio(const struct lhash_st_OPENSSL_CSTRING *lh, BIO *out) { OPENSSL_LH_node_usage_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_stats_bio(const struct lhash_st_OPENSSL_CSTRING *lh, BIO *out) { OPENSSL_LH_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline unsigned long lh_OPENSSL_CSTRING_get_down_load(struct lhash_st_OPENSSL_CSTRING *lh) { return OPENSSL_LH_get_down_load((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_set_down_load(struct lhash_st_OPENSSL_CSTRING *lh, unsigned long dl) { OPENSSL_LH_set_down_load((OPENSSL_LHASH *)lh, dl); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_doall(struct lhash_st_OPENSSL_CSTRING *lh, void (*doall)(OPENSSL_CSTRING *)) { OPENSSL_LH_doall((OPENSSL_LHASH *)lh, (OPENSSL_LH_DOALL_FUNC)doall); } struct lhash_st_OPENSSL_CSTRING;
# 29 "include/openssl/err.h" 2
# 42 "include/openssl/err.h"
# 1 "C:/QNX630/target/qnx6/usr/include/errno.h" 1 3 4
# 21 "C:/QNX630/target/qnx6/usr/include/errno.h" 3 4
extern const char * const sys_errlist[];
extern const int sys_nerr;





extern int errno;

        int *__get_errno_ptr(void) __attribute__((__const__));





# 43 "include/openssl/err.h" 2
# 52 "include/openssl/err.h"
struct err_state_st {
    int err_flags[16];
    unsigned long err_buffer[16];
    char *err_data[16];
    size_t err_data_size[16];
    int err_data_flags[16];
    const char *err_file[16];
    int err_line[16];
    const char *err_func[16];
    int top, bottom;
};
# 245 "include/openssl/err.h"
typedef struct ERR_string_data_st {
    unsigned long error;
    const char *string;
} ERR_STRING_DATA;

struct lhash_st_ERR_STRING_DATA { union lh_ERR_STRING_DATA_dummy { void* d1; unsigned long d2; int d3; } dummy; }; static __attribute__((unused)) inline struct lhash_st_ERR_STRING_DATA *lh_ERR_STRING_DATA_new(unsigned long (*hfn)(const ERR_STRING_DATA *), int (*cfn)(const ERR_STRING_DATA *, const ERR_STRING_DATA *)) { return (struct lhash_st_ERR_STRING_DATA *) OPENSSL_LH_new((OPENSSL_LH_HASHFUNC)hfn, (OPENSSL_LH_COMPFUNC)cfn); } static __attribute__((unused)) inline void lh_ERR_STRING_DATA_free(struct lhash_st_ERR_STRING_DATA *lh) { OPENSSL_LH_free((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_ERR_STRING_DATA_flush(struct lhash_st_ERR_STRING_DATA *lh) { OPENSSL_LH_flush((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline ERR_STRING_DATA *lh_ERR_STRING_DATA_insert(struct lhash_st_ERR_STRING_DATA *lh, ERR_STRING_DATA *d) { return (ERR_STRING_DATA *)OPENSSL_LH_insert((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline ERR_STRING_DATA *lh_ERR_STRING_DATA_delete(struct lhash_st_ERR_STRING_DATA *lh, const ERR_STRING_DATA *d) { return (ERR_STRING_DATA *)OPENSSL_LH_delete((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline ERR_STRING_DATA *lh_ERR_STRING_DATA_retrieve(struct lhash_st_ERR_STRING_DATA *lh, const ERR_STRING_DATA *d) { return (ERR_STRING_DATA *)OPENSSL_LH_retrieve((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline int lh_ERR_STRING_DATA_error(struct lhash_st_ERR_STRING_DATA *lh) { return OPENSSL_LH_error((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline unsigned long lh_ERR_STRING_DATA_num_items(struct lhash_st_ERR_STRING_DATA *lh) { return OPENSSL_LH_num_items((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_ERR_STRING_DATA_node_stats_bio(const struct lhash_st_ERR_STRING_DATA *lh, BIO *out) { OPENSSL_LH_node_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_ERR_STRING_DATA_node_usage_stats_bio(const struct lhash_st_ERR_STRING_DATA *lh, BIO *out) { OPENSSL_LH_node_usage_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_ERR_STRING_DATA_stats_bio(const struct lhash_st_ERR_STRING_DATA *lh, BIO *out) { OPENSSL_LH_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline unsigned long lh_ERR_STRING_DATA_get_down_load(struct lhash_st_ERR_STRING_DATA *lh) { return OPENSSL_LH_get_down_load((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_ERR_STRING_DATA_set_down_load(struct lhash_st_ERR_STRING_DATA *lh, unsigned long dl) { OPENSSL_LH_set_down_load((OPENSSL_LHASH *)lh, dl); } static __attribute__((unused)) inline void lh_ERR_STRING_DATA_doall(struct lhash_st_ERR_STRING_DATA *lh, void (*doall)(ERR_STRING_DATA *)) { OPENSSL_LH_doall((OPENSSL_LHASH *)lh, (OPENSSL_LH_DOALL_FUNC)doall); } struct lhash_st_ERR_STRING_DATA;





void ERR_new(void);
void ERR_set_debug(const char *file, int line, const char *func);
void ERR_set_error(int lib, int reason, const char *fmt, ...);
void ERR_vset_error(int lib, int reason, const char *fmt, va_list args);
# 276 "include/openssl/err.h"
void ERR_set_error_data(char *data, int flags);

unsigned long ERR_get_error(void);







unsigned long ERR_get_error_line(const char **file, int *line);
unsigned long ERR_get_error_func(const char **func);
unsigned long ERR_get_error_data(const char **data, int *flags);
unsigned long ERR_get_error_all(const char **file, int *line,
                                const char **func,
                                const char **data, int *flags);
unsigned long ERR_get_error_line_data(const char **file, int *line, const char **data, int *flags) __attribute__ ((deprecated));



unsigned long ERR_peek_error(void);
unsigned long ERR_peek_error_line(const char **file, int *line);
unsigned long ERR_peek_error_func(const char **func);
unsigned long ERR_peek_error_data(const char **data, int *flags);
unsigned long ERR_peek_error_all(const char **file, int *line,
                                 const char **func,
                                 const char **data, int *flags);
unsigned long ERR_peek_error_line_data(const char **file, int *line, const char **data, int *flags) __attribute__ ((deprecated));



unsigned long ERR_peek_last_error(void);
unsigned long ERR_peek_last_error_line(const char **file, int *line);
unsigned long ERR_peek_last_error_func(const char **func);
unsigned long ERR_peek_last_error_data(const char **data, int *flags);
unsigned long ERR_peek_last_error_all(const char **file, int *line,
                                      const char **func,
                                      const char **data, int *flags);
unsigned long ERR_peek_last_error_line_data(const char **file, int *line, const char **data, int *flags) __attribute__ ((deprecated));




void ERR_clear_error(void);

char *ERR_error_string(unsigned long e, char *buf);
void ERR_error_string_n(unsigned long e, char *buf, size_t len);
const char *ERR_lib_error_string(unsigned long e);
const char *ERR_func_error_string(unsigned long e) __attribute__ ((deprecated));
const char *ERR_reason_error_string(unsigned long e);

void ERR_print_errors_cb(int (*cb) (const char *str, size_t len, void *u),
                         void *u);

void ERR_print_errors_fp(FILE *fp);

void ERR_print_errors(BIO *bp);

void ERR_add_error_data(int num, ...);
void ERR_add_error_vdata(int num, va_list args);

int ERR_load_strings(int lib, ERR_STRING_DATA *str);
int ERR_load_strings_const(const ERR_STRING_DATA *str);
int ERR_unload_strings(int lib, ERR_STRING_DATA *str);
int ERR_load_ERR_strings(void);







void ERR_remove_thread_state(void *) __attribute__ ((deprecated));
void ERR_remove_state(unsigned long pid) __attribute__ ((deprecated));
ERR_STATE *ERR_get_state(void) __attribute__ ((deprecated));

int ERR_get_next_error_library(void);

int ERR_set_mark(void);
int ERR_pop_to_mark(void);
int ERR_clear_last_mark(void);
# 27 "include/internal/cryptlib.h" 2
# 56 "include/internal/cryptlib.h"
typedef struct ex_callback_st EX_CALLBACK;
struct stack_st_EX_CALLBACK; typedef int (*sk_EX_CALLBACK_compfunc)(const EX_CALLBACK * const *a, const EX_CALLBACK *const *b); typedef void (*sk_EX_CALLBACK_freefunc)(EX_CALLBACK *a); typedef EX_CALLBACK * (*sk_EX_CALLBACK_copyfunc)(const EX_CALLBACK *a); static __attribute__((unused)) inline int sk_EX_CALLBACK_num(const struct stack_st_EX_CALLBACK *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_value(const struct stack_st_EX_CALLBACK *sk, int idx) { return (EX_CALLBACK *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_EX_CALLBACK *sk_EX_CALLBACK_new(sk_EX_CALLBACK_compfunc compare) { return (struct stack_st_EX_CALLBACK *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_EX_CALLBACK *sk_EX_CALLBACK_new_null(void) { return (struct stack_st_EX_CALLBACK *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_EX_CALLBACK *sk_EX_CALLBACK_new_reserve(sk_EX_CALLBACK_compfunc compare, int n) { return (struct stack_st_EX_CALLBACK *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_EX_CALLBACK_reserve(struct stack_st_EX_CALLBACK *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_EX_CALLBACK_free(struct stack_st_EX_CALLBACK *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_EX_CALLBACK_zero(struct stack_st_EX_CALLBACK *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_delete(struct stack_st_EX_CALLBACK *sk, int i) { return (EX_CALLBACK *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_delete_ptr(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr) { return (EX_CALLBACK *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_EX_CALLBACK_push(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_EX_CALLBACK_unshift(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_pop(struct stack_st_EX_CALLBACK *sk) { return (EX_CALLBACK *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_shift(struct stack_st_EX_CALLBACK *sk) { return (EX_CALLBACK *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_EX_CALLBACK_pop_free(struct stack_st_EX_CALLBACK *sk, sk_EX_CALLBACK_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_EX_CALLBACK_insert(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_set(struct stack_st_EX_CALLBACK *sk, int idx, EX_CALLBACK *ptr) { return (EX_CALLBACK *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_EX_CALLBACK_find(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_EX_CALLBACK_find_ex(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_EX_CALLBACK_sort(struct stack_st_EX_CALLBACK *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_EX_CALLBACK_is_sorted(const struct stack_st_EX_CALLBACK *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_EX_CALLBACK * sk_EX_CALLBACK_dup(const struct stack_st_EX_CALLBACK *sk) { return (struct stack_st_EX_CALLBACK *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_EX_CALLBACK *sk_EX_CALLBACK_deep_copy(const struct stack_st_EX_CALLBACK *sk, sk_EX_CALLBACK_copyfunc copyfunc, sk_EX_CALLBACK_freefunc freefunc) { return (struct stack_st_EX_CALLBACK *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_EX_CALLBACK_compfunc sk_EX_CALLBACK_set_cmp_func(struct stack_st_EX_CALLBACK *sk, sk_EX_CALLBACK_compfunc compare) { return (sk_EX_CALLBACK_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

typedef struct mem_st MEM;
struct lhash_st_MEM { union lh_MEM_dummy { void* d1; unsigned long d2; int d3; } dummy; }; static __attribute__((unused)) inline struct lhash_st_MEM *lh_MEM_new(unsigned long (*hfn)(const MEM *), int (*cfn)(const MEM *, const MEM *)) { return (struct lhash_st_MEM *) OPENSSL_LH_new((OPENSSL_LH_HASHFUNC)hfn, (OPENSSL_LH_COMPFUNC)cfn); } static __attribute__((unused)) inline void lh_MEM_free(struct lhash_st_MEM *lh) { OPENSSL_LH_free((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_MEM_flush(struct lhash_st_MEM *lh) { OPENSSL_LH_flush((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline MEM *lh_MEM_insert(struct lhash_st_MEM *lh, MEM *d) { return (MEM *)OPENSSL_LH_insert((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline MEM *lh_MEM_delete(struct lhash_st_MEM *lh, const MEM *d) { return (MEM *)OPENSSL_LH_delete((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline MEM *lh_MEM_retrieve(struct lhash_st_MEM *lh, const MEM *d) { return (MEM *)OPENSSL_LH_retrieve((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline int lh_MEM_error(struct lhash_st_MEM *lh) { return OPENSSL_LH_error((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline unsigned long lh_MEM_num_items(struct lhash_st_MEM *lh) { return OPENSSL_LH_num_items((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_MEM_node_stats_bio(const struct lhash_st_MEM *lh, BIO *out) { OPENSSL_LH_node_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_MEM_node_usage_stats_bio(const struct lhash_st_MEM *lh, BIO *out) { OPENSSL_LH_node_usage_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_MEM_stats_bio(const struct lhash_st_MEM *lh, BIO *out) { OPENSSL_LH_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline unsigned long lh_MEM_get_down_load(struct lhash_st_MEM *lh) { return OPENSSL_LH_get_down_load((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_MEM_set_down_load(struct lhash_st_MEM *lh, unsigned long dl) { OPENSSL_LH_set_down_load((OPENSSL_LHASH *)lh, dl); } static __attribute__((unused)) inline void lh_MEM_doall(struct lhash_st_MEM *lh, void (*doall)(MEM *)) { OPENSSL_LH_doall((OPENSSL_LHASH *)lh, (OPENSSL_LH_DOALL_FUNC)doall); } struct lhash_st_MEM;
# 86 "include/internal/cryptlib.h"
void OPENSSL_cpuid_setup(void);



extern unsigned int OPENSSL_ia32cap_P[];

void OPENSSL_showfatal(const char *fmta, ...);
int do_ex_data_init(OPENSSL_CTX *ctx);
void crypto_cleanup_all_ex_data_int(OPENSSL_CTX *ctx);
int openssl_init_fork_handlers(void);
int openssl_get_fork_id(void);

char *ossl_safe_getenv(const char *name);

extern CRYPTO_RWLOCK *memdbg_lock;
int openssl_strerror_r(int errnum, char *buf, size_t buflen);

FILE *openssl_fopen(const char *filename, const char *mode);




uint32_t OPENSSL_rdtsc(void);
size_t OPENSSL_instrument_bus(unsigned int *, size_t);
size_t OPENSSL_instrument_bus2(unsigned int *, size_t, size_t);







struct ex_callback_st {
    long argl;
    void *argp;
    CRYPTO_EX_new *new_func;
    CRYPTO_EX_free *free_func;
    CRYPTO_EX_dup *dup_func;
};





typedef struct ex_callbacks_st {
    struct stack_st_EX_CALLBACK *meth;
} EX_CALLBACKS;

typedef struct ossl_ex_data_global_st {
    CRYPTO_RWLOCK *ex_data_lock;
    EX_CALLBACKS ex_data[17];
} OSSL_EX_DATA_GLOBAL;
# 161 "include/internal/cryptlib.h"
typedef struct openssl_ctx_method {
    void *(*new_func)(OPENSSL_CTX *ctx);
    void (*free_func)(void *);
} OPENSSL_CTX_METHOD;

OPENSSL_CTX *openssl_ctx_get_concrete(OPENSSL_CTX *ctx);


void *openssl_ctx_get_data(OPENSSL_CTX *, int ,
                           const OPENSSL_CTX_METHOD * ctx);

void openssl_ctx_default_deinit(void);
OSSL_EX_DATA_GLOBAL *openssl_ctx_get_ex_data_global(OPENSSL_CTX *ctx);
typedef int (openssl_ctx_run_once_fn)(OPENSSL_CTX *ctx);
typedef void (openssl_ctx_onfree_fn)(OPENSSL_CTX *ctx);

int openssl_ctx_run_once(OPENSSL_CTX *ctx, unsigned int idx,
                         openssl_ctx_run_once_fn run_once_fn);
int openssl_ctx_onfree(OPENSSL_CTX *ctx, openssl_ctx_onfree_fn onfreefn);

OPENSSL_CTX *crypto_ex_data_get_openssl_ctx(const CRYPTO_EX_DATA *ad);
int crypto_new_ex_data_ex(OPENSSL_CTX *ctx, int class_index, void *obj,
                          CRYPTO_EX_DATA *ad);
int crypto_get_ex_new_index_ex(OPENSSL_CTX *ctx, int class_index,
                               long argl, void *argp,
                               CRYPTO_EX_new *new_func,
                               CRYPTO_EX_dup *dup_func,
                               CRYPTO_EX_free *free_func);
int crypto_free_ex_index_ex(OPENSSL_CTX *ctx, int class_index, int idx);







const void *ossl_bsearch(const void *key, const void *base, int num,
                         int size, int (*cmp) (const void *, const void *),
                         int flags);
# 90 "crypto/bio/bio_local.h" 2
# 1 "include/internal/bio.h" 1
# 15 "include/internal/bio.h"
struct bio_method_st {
    int type;
    char *name;
    int (*bwrite) (BIO *, const char *, size_t, size_t *);
    int (*bwrite_old) (BIO *, const char *, int);
    int (*bread) (BIO *, char *, size_t, size_t *);
    int (*bread_old) (BIO *, char *, int);
    int (*bputs) (BIO *, const char *);
    int (*bgets) (BIO *, char *, int);
    long (*ctrl) (BIO *, int, long, void *);
    int (*create) (BIO *);
    int (*destroy) (BIO *);
    long (*callback_ctrl) (BIO *, int, BIO_info_cb *);
};

void bio_free_ex_data(BIO *bio);
void bio_cleanup(void);



int bwrite_conv(BIO *bio, const char *data, size_t datal, size_t *written);
int bread_conv(BIO *bio, char *data, size_t datal, size_t *read);
# 91 "crypto/bio/bio_local.h" 2

typedef struct bio_f_buffer_ctx_struct {
# 105 "crypto/bio/bio_local.h"
    int ibuf_size;
    int obuf_size;
    char *ibuf;
    int ibuf_len;
    int ibuf_off;
    char *obuf;
    int obuf_len;
    int obuf_off;
} BIO_F_BUFFER_CTX;

struct bio_st {
    const BIO_METHOD *method;

    BIO_callback_fn callback;
    BIO_callback_fn_ex callback_ex;
    char *cb_arg;
    int init;
    int shutdown;
    int flags;
    int retry_reason;
    int num;
    void *ptr;
    struct bio_st *next_bio;
    struct bio_st *prev_bio;
    CRYPTO_REF_COUNT references;
    uint64_t num_read;
    uint64_t num_write;
    CRYPTO_EX_DATA ex_data;
    CRYPTO_RWLOCK *lock;
};






extern CRYPTO_RWLOCK *bio_lookup_lock;

int BIO_ADDR_make(BIO_ADDR *ap, const struct sockaddr *sa);
const struct sockaddr *BIO_ADDR_sockaddr(const BIO_ADDR *ap);
struct sockaddr *BIO_ADDR_sockaddr_noconst(BIO_ADDR *ap);
socklen_t BIO_ADDR_sockaddr_size(const BIO_ADDR *ap);
socklen_t BIO_ADDRINFO_sockaddr_size(const BIO_ADDRINFO *bai);
const struct sockaddr *BIO_ADDRINFO_sockaddr(const BIO_ADDRINFO *bai);


extern CRYPTO_RWLOCK *bio_type_lock;

void bio_sock_cleanup_int(void);
# 14 "crypto/bio/b_addr.c" 2





# 1 "include/internal/thread_once.h" 1
# 20 "crypto/bio/b_addr.c" 2

CRYPTO_RWLOCK *bio_lookup_lock;
static CRYPTO_ONCE bio_lookup_init = 0;
# 38 "crypto/bio/b_addr.c"
BIO_ADDR *BIO_ADDR_new(void)
{
    BIO_ADDR *ret = CRYPTO_zalloc(sizeof(*ret), "crypto/bio/b_addr.c", 40);

    if (ret == 0) {
        (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",43,__func__), ERR_set_error)(32, ((1|64)), 0);
        return 0;
    }

    ret->sa.sa_family = 0;
    return ret;
}

void BIO_ADDR_free(BIO_ADDR *ap)
{
    CRYPTO_free(ap, "crypto/bio/b_addr.c", 53);
}

void BIO_ADDR_clear(BIO_ADDR *ap)
{
    memset(ap, 0, sizeof(*ap));
    ap->sa.sa_family = 0;
}





int BIO_ADDR_make(BIO_ADDR *ap, const struct sockaddr *sa)
{
    if (sa->sa_family == 2) {
        memcpy(&(ap->s_in), sa, sizeof(struct sockaddr_in));
        return 1;
    }

    if (sa->sa_family == 24) {
        memcpy(&(ap->s_in6), sa, sizeof(struct sockaddr_in6));
        return 1;
    }


    if (sa->sa_family == 1) {
        memcpy(&(ap->s_un), sa, sizeof(struct sockaddr_un));
        return 1;
    }


    return 0;
}

int BIO_ADDR_rawmake(BIO_ADDR *ap, int family,
                     const void *where, size_t wherelen,
                     unsigned short port)
{

    if (family == 1) {
        if (wherelen + 1 > sizeof(ap->s_un.sun_path))
            return 0;
        memset(&ap->s_un, 0, sizeof(ap->s_un));
        ap->s_un.sun_family = family;
        strncpy(ap->s_un.sun_path, where, sizeof(ap->s_un.sun_path) - 1);
        return 1;
    }

    if (family == 2) {
        if (wherelen != sizeof(struct in_addr))
            return 0;
        memset(&ap->s_in, 0, sizeof(ap->s_in));
        ap->s_in.sin_family = family;
        ap->s_in.sin_port = port;
        ap->s_in.sin_addr = *(struct in_addr *)where;
        return 1;
    }

    if (family == 24) {
        if (wherelen != sizeof(struct in6_addr))
            return 0;
        memset(&ap->s_in6, 0, sizeof(ap->s_in6));
        ap->s_in6.sin6_family = family;
        ap->s_in6.sin6_port = port;
        ap->s_in6.sin6_addr = *(struct in6_addr *)where;
        return 1;
    }


    return 0;
}

int BIO_ADDR_family(const BIO_ADDR *ap)
{
    return ap->sa.sa_family;
}

int BIO_ADDR_rawaddress(const BIO_ADDR *ap, void *p, size_t *l)
{
    size_t len = 0;
    const void *addrptr = 0;

    if (ap->sa.sa_family == 2) {
        len = sizeof(ap->s_in.sin_addr);
        addrptr = &ap->s_in.sin_addr;
    }

    else if (ap->sa.sa_family == 24) {
        len = sizeof(ap->s_in6.sin6_addr);
        addrptr = &ap->s_in6.sin6_addr;
    }


    else if (ap->sa.sa_family == 1) {
        len = strlen(ap->s_un.sun_path);
        addrptr = &ap->s_un.sun_path;
    }


    if (addrptr == 0)
        return 0;

    if (p != 0) {
        memcpy(p, addrptr, len);
    }
    if (l != 0)
        *l = len;

    return 1;
}

unsigned short BIO_ADDR_rawport(const BIO_ADDR *ap)
{
    if (ap->sa.sa_family == 2)
        return ap->s_in.sin_port;

    if (ap->sa.sa_family == 24)
        return ap->s_in6.sin6_port;

    return 0;
}
# 189 "crypto/bio/b_addr.c"
static int addr_strings(const BIO_ADDR *ap, int numeric,
                        char **hostname, char **service)
{
    if (BIO_sock_init() != 1)
        return 0;

    if (1) {

        int ret = 0;
        char host[1025] = "", serv[32] = "";
        int flags = 0;

        if (numeric)
            flags |= 0x00000002 | 0x00000008;

        if ((ret = getnameinfo(BIO_ADDR_sockaddr(ap),
                               BIO_ADDR_sockaddr_size(ap),
                               host, sizeof(host), serv, sizeof(serv),
                               flags)) != 0) {

            if (ret == 11) {
                (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",210,__func__), ERR_set_error)(2, (* __get_errno_ptr()),
                               "calling getnameinfo()");
                (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",212,__func__), ERR_set_error)(32, (2), 0);
            } else

            {
                (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",216,__func__), ERR_set_error)(32, (2), 0);
                ERR_add_error_data(1, gai_strerror(ret));
            }
            return 0;
        }







        if (serv[0] == '\0') {
            BIO_snprintf(serv, sizeof(serv), "%d",
                         ntohs(BIO_ADDR_rawport(ap)));
        }

        if (hostname != 0)
            *hostname = CRYPTO_strdup(host, "crypto/bio/b_addr.c", 234);
        if (service != 0)
            *service = CRYPTO_strdup(serv, "crypto/bio/b_addr.c", 236);
    } else {

        if (hostname != 0)
            *hostname = CRYPTO_strdup(inet_ntoa(ap->s_in.sin_addr), "crypto/bio/b_addr.c", 240);
        if (service != 0) {
            char serv[6];
            BIO_snprintf(serv, sizeof(serv), "%d", ntohs(ap->s_in.sin_port));
            *service = CRYPTO_strdup(serv, "crypto/bio/b_addr.c", 244);
        }
    }

    if ((hostname != 0 && *hostname == 0)
            || (service != 0 && *service == 0)) {
        if (hostname != 0) {
            CRYPTO_free(*hostname, "crypto/bio/b_addr.c", 251);
            *hostname = 0;
        }
        if (service != 0) {
            CRYPTO_free(*service, "crypto/bio/b_addr.c", 255);
            *service = 0;
        }
        (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",258,__func__), ERR_set_error)(32, ((1|64)), 0);
        return 0;
    }

    return 1;
}

char *BIO_ADDR_hostname_string(const BIO_ADDR *ap, int numeric)
{
    char *hostname = 0;

    if (addr_strings(ap, numeric, &hostname, 0))
        return hostname;

    return 0;
}

char *BIO_ADDR_service_string(const BIO_ADDR *ap, int numeric)
{
    char *service = 0;

    if (addr_strings(ap, numeric, 0, &service))
        return service;

    return 0;
}

char *BIO_ADDR_path_string(const BIO_ADDR *ap)
{

    if (ap->sa.sa_family == 1)
        return CRYPTO_strdup(ap->s_un.sun_path, "crypto/bio/b_addr.c", 289);

    return 0;
}






const struct sockaddr *BIO_ADDR_sockaddr(const BIO_ADDR *ap)
{
    return &(ap->sa);
}







struct sockaddr *BIO_ADDR_sockaddr_noconst(BIO_ADDR *ap)
{
    return &(ap->sa);
}







socklen_t BIO_ADDR_sockaddr_size(const BIO_ADDR *ap)
{
    if (ap->sa.sa_family == 2)
        return sizeof(ap->s_in);

    if (ap->sa.sa_family == 24)
        return sizeof(ap->s_in6);


    if (ap->sa.sa_family == 1)
        return sizeof(ap->s_un);

    return sizeof(*ap);
}







const BIO_ADDRINFO *BIO_ADDRINFO_next(const BIO_ADDRINFO *bai)
{
    if (bai != 0)
        return bai->ai_next;
    return 0;
}

int BIO_ADDRINFO_family(const BIO_ADDRINFO *bai)
{
    if (bai != 0)
        return bai->ai_family;
    return 0;
}

int BIO_ADDRINFO_socktype(const BIO_ADDRINFO *bai)
{
    if (bai != 0)
        return bai->ai_socktype;
    return 0;
}

int BIO_ADDRINFO_protocol(const BIO_ADDRINFO *bai)
{
    if (bai != 0) {
        if (bai->ai_protocol != 0)
            return bai->ai_protocol;


        if (bai->ai_family == 1)
            return 0;


        switch (bai->ai_socktype) {
        case 1:
            return 6;
        case 2:
            return 17;
        default:
            break;
        }
    }
    return 0;
}





socklen_t BIO_ADDRINFO_sockaddr_size(const BIO_ADDRINFO *bai)
{
    if (bai != 0)
        return bai->ai_addrlen;
    return 0;
}





const struct sockaddr *BIO_ADDRINFO_sockaddr(const BIO_ADDRINFO *bai)
{
    if (bai != 0)
        return bai->ai_addr;
    return 0;
}

const BIO_ADDR *BIO_ADDRINFO_address(const BIO_ADDRINFO *bai)
{
    if (bai != 0)
        return (BIO_ADDR *)bai->ai_addr;
    return 0;
}

void BIO_ADDRINFO_free(BIO_ADDRINFO *bai)
{
    if (bai == 0)
        return;







    if (bai->ai_family != 1) {
        freeaddrinfo(bai);
        return;
    }





    while (bai != 0) {
        BIO_ADDRINFO *next = bai->ai_next;
        CRYPTO_free(bai->ai_addr, "crypto/bio/b_addr.c", 437);
        CRYPTO_free(bai, "crypto/bio/b_addr.c", 438);
        bai = next;
    }
}
# 468 "crypto/bio/b_addr.c"
int BIO_parse_hostserv(const char *hostserv, char **host, char **service,
                       enum BIO_hostserv_priorities hostserv_prio)
{
    const char *h = 0; size_t hl = 0;
    const char *p = 0; size_t pl = 0;

    if (*hostserv == '[') {
        if ((p = strchr(hostserv, ']')) == 0)
            goto spec_err;
        h = hostserv + 1;
        hl = p - h;
        p++;
        if (*p == '\0')
            p = 0;
        else if (*p != ':')
            goto spec_err;
        else {
            p++;
            pl = strlen(p);
        }
    } else {
        const char *p2 = strrchr(hostserv, ':');
        p = strchr(hostserv, ':');
# 502 "crypto/bio/b_addr.c"
        if (p != p2)
            goto amb_err;

        if (p != 0) {
            h = hostserv;
            hl = p - h;
            p++;
            pl = strlen(p);
        } else if (hostserv_prio == BIO_PARSE_PRIO_HOST) {
            h = hostserv;
            hl = strlen(h);
        } else {
            p = hostserv;
            pl = strlen(p);
        }
    }

    if (p != 0 && strchr(p, ':'))
        goto spec_err;

    if (h != 0 && host != 0) {
        if (hl == 0
            || (hl == 1 && h[0] == '*')) {
            *host = 0;
        } else {
            *host = CRYPTO_strndup(h, hl, "crypto/bio/b_addr.c", 527);
            if (*host == 0)
                goto memerr;
        }
    }
    if (p != 0 && service != 0) {
        if (pl == 0
            || (pl == 1 && p[0] == '*')) {
            *service = 0;
        } else {
            *service = CRYPTO_strndup(p, pl, "crypto/bio/b_addr.c", 537);
            if (*service == 0)
                goto memerr;
        }
    }

    return 1;
 amb_err:
    (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",545,__func__), ERR_set_error)(32, (129), 0);
    return 0;
 spec_err:
    (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",548,__func__), ERR_set_error)(32, (130), 0);
    return 0;
 memerr:
    (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",551,__func__), ERR_set_error)(32, ((1|64)), 0);
    return 0;
}
# 564 "crypto/bio/b_addr.c"
static int addrinfo_wrap(int family, int socktype,
                         const void *where, size_t wherelen,
                         unsigned short port,
                         BIO_ADDRINFO **bai)
{
    if ((*bai = CRYPTO_zalloc(sizeof(**bai), "crypto/bio/b_addr.c", 569)) == 0) {
        (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",570,__func__), ERR_set_error)(32, ((1|64)), 0);
        return 0;
    }

    (*bai)->ai_family = family;
    (*bai)->ai_socktype = socktype;
    if (socktype == 1)
        (*bai)->ai_protocol = 6;
    if (socktype == 2)
        (*bai)->ai_protocol = 17;

    if (family == 1)
        (*bai)->ai_protocol = 0;

    {





        BIO_ADDR *addr = BIO_ADDR_new();
        if (addr != 0) {
            BIO_ADDR_rawmake(addr, family, where, wherelen, port);
            (*bai)->ai_addr = BIO_ADDR_sockaddr_noconst(addr);
        }
    }
    (*bai)->ai_next = 0;
    if ((*bai)->ai_addr == 0) {
        BIO_ADDRINFO_free(*bai);
        *bai = 0;
        return 0;
    }
    return 1;
}

static int do_bio_lookup_init(void); static int do_bio_lookup_init_ossl_ret_ = 0; static void do_bio_lookup_init_ossl_(void) { do_bio_lookup_init_ossl_ret_ = do_bio_lookup_init(); } static int do_bio_lookup_init(void)
{
    if (!OPENSSL_init_crypto(0, 0))
        return 0;
    bio_lookup_lock = CRYPTO_THREAD_lock_new();
    return bio_lookup_lock != 0;
}

int BIO_lookup(const char *host, const char *service,
               enum BIO_lookup_type lookup_type,
               int family, int socktype, BIO_ADDRINFO **res)
{
    return BIO_lookup_ex(host, service, lookup_type, family, socktype, 0, res);
}
# 642 "crypto/bio/b_addr.c"
int BIO_lookup_ex(const char *host, const char *service, int lookup_type,
                  int family, int socktype, int protocol, BIO_ADDRINFO **res)
{
    int ret = 0;

    switch(family) {
    case 2:

    case 24:


    case 1:


    case 0:

        break;
    default:
        (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",660,__func__), ERR_set_error)(32, (131), 0);
        return 0;
    }


    if (family == 1) {
        if (addrinfo_wrap(family, socktype, host, strlen(host), 0, res))
            return 1;
        else
            (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",669,__func__), ERR_set_error)(32, ((1|64)), 0);
        return 0;
    }


    if (BIO_sock_init() != 1)
        return 0;

    if (1) {

        int gai_ret = 0, old_ret = 0;
        struct addrinfo hints;

        memset(&hints, 0, sizeof(hints));

        hints.ai_family = family;
        hints.ai_socktype = socktype;
        hints.ai_protocol = protocol;


        if (family == 0)

            hints.ai_flags |= 0x00000400;


        if (lookup_type == BIO_LOOKUP_SERVER)
            hints.ai_flags |= 0x00000001;





      retry:

        switch ((gai_ret = getaddrinfo(host, service, &hints, res))) {

        case 11:
            (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",706,__func__), ERR_set_error)(2, (* __get_errno_ptr()),
                           "calling getaddrinfo()");
            (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",708,__func__), ERR_set_error)(32, (2), 0);
            break;


        case 6:
            (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",713,__func__), ERR_set_error)(32, ((1|64)), 0);
            break;

        case 0:
            ret = 1;
            break;
        default:

            if (hints.ai_flags & 0x00000400) {
                hints.ai_flags &= ~0x00000400;
                hints.ai_flags |= 0x00000004;
                old_ret = gai_ret;
                goto retry;
            }

            (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",728,__func__), ERR_set_error)(32, (2), 0);
            ERR_add_error_data(1, gai_strerror(old_ret ? old_ret : gai_ret));
            break;
        }
    } else {

        const struct hostent *he;
# 750 "crypto/bio/b_addr.c"
        static in_addr_t he_fallback_address;
        static const char *he_fallback_addresses[] =
            { (char *)&he_fallback_address, 0 };

        static const struct hostent he_fallback =
            { 0, 0, 2, sizeof(he_fallback_address),
              (char **)&he_fallback_addresses };




        struct servent *se;




        struct servent se_fallback = { 0, 0, 0, 0 };


        if (!(CRYPTO_THREAD_run_once(&bio_lookup_init, do_bio_lookup_init_ossl_) ? do_bio_lookup_init_ossl_ret_ : 0)) {
            (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",770,__func__), ERR_set_error)(32, ((1|64)), 0);
            ret = 0;
            goto err;
        }

        CRYPTO_THREAD_write_lock(bio_lookup_lock);
        he_fallback_address = ((uint32_t)(0x00000000));
        if (host == 0) {
            he = &he_fallback;
            switch(lookup_type) {
            case BIO_LOOKUP_CLIENT:
                he_fallback_address = ((uint32_t)(0x7f000001));
                break;
            case BIO_LOOKUP_SERVER:
                he_fallback_address = ((uint32_t)(0x00000000));
                break;
            default:

                ((void)0);
                (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",789,__func__), ERR_set_error)(32, ((4|64)), 0);
                ret = 0;
                goto err;
            }
        } else {
            he = gethostbyname(host);

            if (he == 0) {
# 814 "crypto/bio/b_addr.c"
                (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",814,__func__), ERR_set_error)(2, 1000 + h_errno,
                               "calling gethostbyname()");





                ret = 0;
                goto err;
            }
        }

        if (service == 0) {
            se_fallback.s_port = 0;
            se_fallback.s_proto = 0;
            se = &se_fallback;
        } else {
            char *endp = 0;
            long portnum = strtol(service, &endp, 10);
# 842 "crypto/bio/b_addr.c"
            char *proto = 0;




            switch (socktype) {
            case 1:
                proto = "tcp";
                break;
            case 2:
                proto = "udp";
                break;
            }

            if (endp != service && *endp == '\0'
                    && portnum > 0 && portnum < 65536) {
                se_fallback.s_port = htons((unsigned short)portnum);
                se_fallback.s_proto = proto;
                se = &se_fallback;
            } else if (endp == service) {
                se = getservbyname(service, proto);

                if (se == 0) {
                    (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",865,__func__), ERR_set_error)(2, (* __get_errno_ptr()),
                                   "calling getservbyname()");
                    goto err;
                }
            } else {
                (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",870,__func__), ERR_set_error)(32, (130), 0);
                goto err;
            }
        }

        *res = 0;

        {
# 887 "crypto/bio/b_addr.c"
            char **addrlistp;



            size_t addresses;
            BIO_ADDRINFO *tmp_bai = 0;



            for(addrlistp = he->h_addr_list; *addrlistp != 0;
                addrlistp++)
                ;

            for(addresses = addrlistp - he->h_addr_list;
                addrlistp--, addresses-- > 0; ) {
                if (!addrinfo_wrap(he->h_addrtype, socktype,
                                   *addrlistp, he->h_length,
                                   se->s_port, &tmp_bai))
                    goto addrinfo_malloc_err;
                tmp_bai->ai_next = *res;
                *res = tmp_bai;
                continue;
             addrinfo_malloc_err:
                BIO_ADDRINFO_free(*res);
                *res = 0;
                (ERR_new(), ERR_set_debug("crypto/bio/b_addr.c",912,__func__), ERR_set_error)(32, ((1|64)), 0);
                ret = 0;
                goto err;
            }

            ret = 1;
        }
     err:
        CRYPTO_THREAD_unlock(bio_lookup_lock);
    }

    return ret;
}
