/* ISC license. */

#ifndef SYSDEPS_H
#define SYSDEPS_H

#define SKALIBS_TARGET "armv7l-linux-gnueabihf"
#define SKALIBS_HASCLOCKRT
#define SKALIBS_HASCLOCKMON
#define SKALIBS_HASPOSIXSPAWN
#define SKALIBS_HASTIMER
#define SKALIBS_ENDIANNESS "little"
#define SKALIBS_SIZEOFUSHORT 2
#define SKALIBS_SIZEOFUINT 4
#define SKALIBS_SIZEOFULONG 4
#define SKALIBS_SIZEOFSIZE 4
#define SKALIBS_SIZEOFUID 4
#define SKALIBS_SIZEOFGID 4
#define SKALIBS_SIZEOFPID 4
#define SKALIBS_SIZEOFTIME 4
#define SKALIBS_SIZEOFDEV 8
#define SKALIBS_SIZEOFINO 4
#undef SKALIBS_HASSIGNEDSIZE
#define SKALIBS_HASUNSIGNEDSIZE
#undef SKALIBS_HASSIGNEDUID
#define SKALIBS_HASUNSIGNEDUID
#undef SKALIBS_HASSIGNEDGID
#define SKALIBS_HASUNSIGNEDGID
#define SKALIBS_HASSIGNEDPID
#undef SKALIBS_HASUNSIGNEDPID
#define SKALIBS_HASSIGNEDTIME
#undef SKALIBS_HASUNSIGNEDTIME
#undef SKALIBS_HASSIGNEDDEV
#define SKALIBS_HASUNSIGNEDDEV
#undef SKALIBS_HASSIGNEDINO
#define SKALIBS_HASUNSIGNEDINO
#define SKALIBS_HASNULLISPOINTER
#define SKALIBS_HASACCEPT4
#undef SKALIBS_HASANCILAUTOCLOSE
#define SKALIBS_HASCMSGCLOEXEC
#define SKALIBS_HASDEVURANDOM
#define SKALIBS_HASDIRFD
#define SKALIBS_HASEPROTO
#define SKALIBS_HASEVENTFD
#define SKALIBS_HASFLOCK
#undef SKALIBS_HASGETPEEREID
#define SKALIBS_HASSOPEERCRED
#undef SKALIBS_HASGETPEERUCRED
#define SKALIBS_HASIPV6
#define SKALIBS_HASMALLOC0
#define SKALIBS_HASMSGDONTWAIT
#define SKALIBS_HASNBWAITALL
#define SKALIBS_HASODIRECTORY
#define SKALIBS_HASOPENAT
#define SKALIBS_HASLINKAT
#define SKALIBS_HASMEMMEM
#define SKALIBS_HASPIPE2
#define SKALIBS_HASPPOLL
#define SKALIBS_HASREVOKE
#define SKALIBS_HASSENDFILE
#define SKALIBS_HASSETGROUPS
#define SKALIBS_HASSETTIMEOFDAY
#define SKALIBS_HASSIGNALFD
#define SKALIBS_HASSPLICE
#define SKALIBS_HASSTRCASESTR
#define SKALIBS_HASSTRNLEN
#define SKALIBS_HASUINT64T
#define SKALIBS_HASFUTIMENS
#define SKALIBS_HASFUTIMES
#undef SKALIBS_HASARC4RANDOM
#undef SKALIBS_HASARC4RANDOM_ADDRANDOM
#define SKALIBS_HASGETRANDOM
#define SKALIBS_HASITIMER
#define SKALIBS_HASNAMESPACES
#undef SKALIBS_HASNSGETPARENT
#define SKALIBS_HASEXPLICIT_BZERO
#endif
