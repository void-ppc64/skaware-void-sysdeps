/* ISC license. */

#ifndef SYSDEPS_H
#define SYSDEPS_H

#undef SKALIBS_TARGET
#define SKALIBS_TARGET "powerpc-linux-gnu"

#undef SKALIBS_BSD_SUCKS
#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__bsdi__) || defined(__DragonFly__)
# define SKALIBS_BSD_SUCKS
#endif

#undef SKALIBS_HASCLOCKRT
#define SKALIBS_HASCLOCKRT

#undef SKALIBS_HASCLOCKMON
#define SKALIBS_HASCLOCKMON

#undef SKALIBS_HASPOSIXSPAWN
#define SKALIBS_HASPOSIXSPAWN

#undef SKALIBS_HASTIMER
#define SKALIBS_HASTIMER

#undef SKALIBS_ENDIANNESS
#define SKALIBS_ENDIANNESS "big"

#undef SKALIBS_SIZEOFUSHORT
#define SKALIBS_SIZEOFUSHORT 2

#undef SKALIBS_SIZEOFUINT
#define SKALIBS_SIZEOFUINT 4

#undef SKALIBS_SIZEOFULONG
#define SKALIBS_SIZEOFULONG 4

#undef SKALIBS_SIZEOFSIZE
#define SKALIBS_SIZEOFSIZE 4

#undef SKALIBS_SIZEOFUID
#define SKALIBS_SIZEOFUID 4

#undef SKALIBS_SIZEOFGID
#define SKALIBS_SIZEOFGID 4

#undef SKALIBS_SIZEOFPID
#define SKALIBS_SIZEOFPID 4

#undef SKALIBS_SIZEOFTIME
#define SKALIBS_SIZEOFTIME 4

#undef SKALIBS_SIZEOFDEV
#define SKALIBS_SIZEOFDEV 8

#undef SKALIBS_SIZEOFINO
#define SKALIBS_SIZEOFINO 4

#undef SKALIBS_HASUNSIGNEDSIZE
#undef SKALIBS_HASSIGNEDSIZE
#define SKALIBS_HASUNSIGNEDSIZE

#undef SKALIBS_HASUNSIGNEDUID
#undef SKALIBS_HASSIGNEDUID
#define SKALIBS_HASUNSIGNEDUID

#undef SKALIBS_HASUNSIGNEDGID
#undef SKALIBS_HASSIGNEDGID
#define SKALIBS_HASUNSIGNEDGID

#undef SKALIBS_HASUNSIGNEDPID
#undef SKALIBS_HASSIGNEDPID
#define SKALIBS_HASSIGNEDPID

#undef SKALIBS_HASUNSIGNEDTIME
#undef SKALIBS_HASSIGNEDTIME
#define SKALIBS_HASSIGNEDTIME

#undef SKALIBS_HASUNSIGNEDDEV
#undef SKALIBS_HASSIGNEDDEV
#define SKALIBS_HASUNSIGNEDDEV

#undef SKALIBS_HASUNSIGNEDINO
#undef SKALIBS_HASSIGNEDINO
#define SKALIBS_HASUNSIGNEDINO

#undef SKALIBS_HASNULLISPOINTER
#define SKALIBS_HASNULLISPOINTER

#undef SKALIBS_HASACCEPT4
#define SKALIBS_HASACCEPT4

#undef SKALIBS_HASCMSGCLOEXEC
#define SKALIBS_HASCMSGCLOEXEC

#undef SKALIBS_HASDEVURANDOM
#define SKALIBS_HASDEVURANDOM

#undef SKALIBS_HASDIRFD
#define SKALIBS_HASDIRFD

#undef SKALIBS_HASEVENTFD
#define SKALIBS_HASEVENTFD

#undef SKALIBS_HASFLOCK
#define SKALIBS_HASFLOCK

#undef SKALIBS_HASGETPEEREID

#undef SKALIBS_HASSOPEERCRED
#define SKALIBS_HASSOPEERCRED

#undef SKALIBS_HASGETPEERUCRED

#undef SKALIBS_HASIPV6
#define SKALIBS_HASIPV6

#undef SKALIBS_HASMALLOC0
#define SKALIBS_HASMALLOC0

#undef SKALIBS_HASMSGDONTWAIT
#define SKALIBS_HASMSGDONTWAIT

#undef SKALIBS_HASODIRECTORY
#define SKALIBS_HASODIRECTORY

#undef SKALIBS_HASOPENAT
#define SKALIBS_HASOPENAT

#undef SKALIBS_HASLINKAT
#define SKALIBS_HASLINKAT

#undef SKALIBS_HASMEMMEM
#define SKALIBS_HASMEMMEM

#undef SKALIBS_HASPIPE2
#define SKALIBS_HASPIPE2

#undef SKALIBS_HASPPOLL
#define SKALIBS_HASPPOLL

#undef SKALIBS_HASREVOKE

#undef SKALIBS_HASSENDFILE
#define SKALIBS_HASSENDFILE

#undef SKALIBS_HASSETGROUPS
#define SKALIBS_HASSETGROUPS

#undef SKALIBS_HASSETTIMEOFDAY
#define SKALIBS_HASSETTIMEOFDAY

#undef SKALIBS_HASSIGNALFD
#define SKALIBS_HASSIGNALFD

#undef SKALIBS_HASSPLICE
#define SKALIBS_HASSPLICE

#undef SKALIBS_HASSTRCASESTR
#define SKALIBS_HASSTRCASESTR

#undef SKALIBS_HASSTRNLEN
#define SKALIBS_HASSTRNLEN

#undef SKALIBS_HASUINT64T
#define SKALIBS_HASUINT64T

#undef SKALIBS_HASFUTIMENS
#define SKALIBS_HASFUTIMENS

#undef SKALIBS_HASFUTIMES
#define SKALIBS_HASFUTIMES

#undef SKALIBS_HASARC4RANDOM

#undef SKALIBS_HASARC4RANDOM_ADDRANDOM

#undef SKALIBS_HASGETRANDOM
#define SKALIBS_HASGETRANDOM

#undef SKALIBS_HASITIMER
#define SKALIBS_HASITIMER

#undef SKALIBS_HASNAMESPACES
#define SKALIBS_HASNAMESPACES

#undef SKALIBS_HASNSGETPARENT
#define SKALIBS_HASNSGETPARENT

#undef SKALIBS_HASEXPLICIT_BZERO
#define SKALIBS_HASEXPLICIT_BZERO

#undef SKALIBS_HASEMPTYREGEX
#define SKALIBS_HASEMPTYREGEX

#endif
