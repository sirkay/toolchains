
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableServer_POAPackage_WrongAdapterHelper__
#define __org_omg_PortableServer_POAPackage_WrongAdapterHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace PortableServer
      {
        namespace POAPackage
        {
            class WrongAdapter;
            class WrongAdapterHelper;
        }
      }
    }
  }
}

class org::omg::PortableServer::POAPackage::WrongAdapterHelper : public ::java::lang::Object
{

public:
  WrongAdapterHelper();
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::PortableServer::POAPackage::WrongAdapter *);
  static ::org::omg::PortableServer::POAPackage::WrongAdapter * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static ::org::omg::PortableServer::POAPackage::WrongAdapter * read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::PortableServer::POAPackage::WrongAdapter *);
private:
  static ::org::omg::CORBA::TypeCode * typeCode;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableServer_POAPackage_WrongAdapterHelper__
