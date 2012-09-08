
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_validation_xmlschema_XMLSchemaAttributeTypeInfo__
#define __gnu_xml_validation_xmlschema_XMLSchemaAttributeTypeInfo__

#pragma interface

#include <gnu/xml/validation/xmlschema/XMLSchemaTypeInfo.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace validation
      {
        namespace datatype
        {
            class SimpleType;
        }
        namespace xmlschema
        {
            class AttributeDeclaration;
            class XMLSchema;
            class XMLSchemaAttributeTypeInfo;
        }
      }
    }
  }
}

class gnu::xml::validation::xmlschema::XMLSchemaAttributeTypeInfo : public ::gnu::xml::validation::xmlschema::XMLSchemaTypeInfo
{

public: // actually package-private
  XMLSchemaAttributeTypeInfo(::gnu::xml::validation::xmlschema::XMLSchema *, ::gnu::xml::validation::xmlschema::AttributeDeclaration *, jboolean);
public:
  ::java::lang::String * getTypeName();
  ::java::lang::String * getTypeNamespace();
  jboolean isDerivedFrom(::java::lang::String *, ::java::lang::String *, jint);
public: // actually package-private
  ::gnu::xml::validation::xmlschema::XMLSchema * __attribute__((aligned(__alignof__( ::gnu::xml::validation::xmlschema::XMLSchemaTypeInfo)))) schema;
  ::gnu::xml::validation::xmlschema::AttributeDeclaration * decl;
  ::gnu::xml::validation::datatype::SimpleType * type;
  jboolean id;
  jboolean specified;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_validation_xmlschema_XMLSchemaAttributeTypeInfo__
