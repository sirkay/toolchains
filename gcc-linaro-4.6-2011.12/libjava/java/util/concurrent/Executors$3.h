
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_Executors$3__
#define __java_util_concurrent_Executors$3__

#pragma interface

#include <java/lang/Object.h>

class java::util::concurrent::Executors$3 : public ::java::lang::Object
{

public: // actually package-private
  Executors$3(::java::util::concurrent::Executors$PrivilegedThreadFactory *, ::java::lang::Runnable *);
public:
  virtual void run();
public: // actually package-private
  static ::java::util::concurrent::Executors$PrivilegedThreadFactory * access$0(::java::util::concurrent::Executors$3 *);
  ::java::util::concurrent::Executors$PrivilegedThreadFactory * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$1;
private:
  ::java::lang::Runnable * val$r;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_Executors$3__