//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'config_type.h'                            *
//                       Generated by version 1.9.10                         *
//                      march 18th, 2010, at 9h49'49"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef config_type_DEFINED
#define config_type_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "goil_options.h"
#include "goil_types_root.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_os_config ;
class cPtr_os_config ;

//---------------------------------------------------------------------------*
//                                                                           *
//                       GALGAS class 'GGS_os_config'                        *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_os_config ;

//---------------------------------------------------------------------------*

class GGS_os_config : public AC_galgas_class {
//--- Default constructor
  public : inline GGS_os_config (void) :
  AC_galgas_class () {}

//--- Pointer assignment constructor
  public : GGS_os_config (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_os_config (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_os_config
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_os_config constructor_new (C_Compiler & inLexique,
                                const GGS_bool& argument_0,
                                const GGS_bool& argument_1,
                                const GGS_bool& argument_2,
                                const GGS_bool& argument_3,
                                const GGS_bool& argument_4,
                                const GGS_bool& argument_5,
                                const GGS_bool& argument_6,
                                const GGS_bool& argument_7,
                                const GGS_bool& argument_8,
                                const GGS_bool& argument_9,
                                const GGS_bool& argument_10,
                                const GGS_bool& argument_11,
                                const GGS_bool& argument_12,
                                const GGS_bool& argument_13,
                                const GGS_bool& argument_14,
                                const GGS_bool& argument_15,
                                const GGS_bool& argument_16,
                                const GGS_uint & argument_17
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_os_config * getPtr (void) const {
    return (cPtr_os_config *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_bool reader_with_compilersettings (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_memmap (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_com (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_autosar (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_osapplication (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_timingprotection (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_stackmonitoring (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_memoryprotection (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_systemcall (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_errorhook (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_startuphook (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_shutdownhook (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_pretaskhook (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_postaskhook (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_protectionhook (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_trace (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_bool reader_with_it_table (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_uint  reader_scalability_class (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_os_config * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_os_config * operator () (LOCATION_ARGS) const {
      return (cPtr_os_config *) mPointer ;
    }
  #endif

//--- Galgas RTTI
AC_galgasClassRunTimeInformationEX * galgasObjectRunTimeInfo (void) const ;

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_os_config castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasRootClassRunTimeInformationEX gClassInfoFor__os_config ;

//---------------------------------------------------------------------------*
//                                                                           *
//                            Function 'os_cfg'                              *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_function_descriptorEX kFunction_descriptor_os_cfg ;

//---------------------------------------------------------------------------*

GGS_os_config  function_os_cfg (C_Compiler &,
                                GGS_root_obj   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     abstract class 'cPtr_os_config'                       *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_os_config : public cPtr__AC_galgas_class {
//--- Constructor
  public : cPtr_os_config (const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_bool& ,
                                const GGS_uint & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_bool with_compilersettings ;
  public : GGS_bool with_memmap ;
  public : GGS_bool with_com ;
  public : GGS_bool with_autosar ;
  public : GGS_bool with_osapplication ;
  public : GGS_bool with_timingprotection ;
  public : GGS_bool with_stackmonitoring ;
  public : GGS_bool with_memoryprotection ;
  public : GGS_bool with_systemcall ;
  public : GGS_bool with_errorhook ;
  public : GGS_bool with_startuphook ;
  public : GGS_bool with_shutdownhook ;
  public : GGS_bool with_pretaskhook ;
  public : GGS_bool with_postaskhook ;
  public : GGS_bool with_protectionhook ;
  public : GGS_bool with_trace ;
  public : GGS_bool with_it_table ;
  public : GGS_uint  scalability_class ;
//--- Method 'generate'
  public : virtual void method_generate (C_Compiler &,
                                GGS_string& 
                                COMMA_LOCATION_ARGS) const ;

//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*

#endif
