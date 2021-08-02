// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIxueqilindIKDetSim2dIsrcdIKDetSimDictUX
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/xueqilin/KDetSim2/inc/KPad.h"
#include "/home/xueqilin/KDetSim2/inc/KDetector.h"
#include "/home/xueqilin/KDetSim2/inc/KField.h"
#include "/home/xueqilin/KDetSim2/inc/K3D.h"
#include "/home/xueqilin/KDetSim2/inc/KPixel.h"
#include "/home/xueqilin/KDetSim2/inc/KGeometry.h"
#include "/home/xueqilin/KDetSim2/inc/KMaterial.h"
#include "/home/xueqilin/KDetSim2/inc/KStruct.h"
#include "/home/xueqilin/KDetSim2/inc/KStrip.h"
#include "/home/xueqilin/KDetSim2/inc/KMesh.h"
#include "/home/xueqilin/KDetSim2/inc/KImplant3D.h"
#include "/home/xueqilin/KDetSim2/inc/KImplant2D.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KField(void *p = 0);
   static void *newArray_KField(Long_t size, void *p);
   static void delete_KField(void *p);
   static void deleteArray_KField(void *p);
   static void destruct_KField(void *p);
   static void streamer_KField(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KField*)
   {
      ::KField *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KField >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KField", ::KField::Class_Version(), "inc/KField.h", 25,
                  typeid(::KField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KField::Dictionary, isa_proxy, 16,
                  sizeof(::KField) );
      instance.SetNew(&new_KField);
      instance.SetNewArray(&newArray_KField);
      instance.SetDelete(&delete_KField);
      instance.SetDeleteArray(&deleteArray_KField);
      instance.SetDestructor(&destruct_KField);
      instance.SetStreamerFunc(&streamer_KField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KField*)
   {
      return GenerateInitInstanceLocal((::KField*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KField*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KMaterial(void *p = 0);
   static void *newArray_KMaterial(Long_t size, void *p);
   static void delete_KMaterial(void *p);
   static void deleteArray_KMaterial(void *p);
   static void destruct_KMaterial(void *p);
   static void streamer_KMaterial(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KMaterial*)
   {
      ::KMaterial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KMaterial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KMaterial", ::KMaterial::Class_Version(), "inc/KMaterial.h", 21,
                  typeid(::KMaterial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KMaterial::Dictionary, isa_proxy, 16,
                  sizeof(::KMaterial) );
      instance.SetNew(&new_KMaterial);
      instance.SetNewArray(&newArray_KMaterial);
      instance.SetDelete(&delete_KMaterial);
      instance.SetDeleteArray(&deleteArray_KMaterial);
      instance.SetDestructor(&destruct_KMaterial);
      instance.SetStreamerFunc(&streamer_KMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KMaterial*)
   {
      return GenerateInitInstanceLocal((::KMaterial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KMaterial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KStruct(void *p = 0);
   static void *newArray_KStruct(Long_t size, void *p);
   static void delete_KStruct(void *p);
   static void deleteArray_KStruct(void *p);
   static void destruct_KStruct(void *p);
   static void streamer_KStruct(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KStruct*)
   {
      ::KStruct *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KStruct >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KStruct", ::KStruct::Class_Version(), "inc/KStruct.h", 27,
                  typeid(::KStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KStruct::Dictionary, isa_proxy, 16,
                  sizeof(::KStruct) );
      instance.SetNew(&new_KStruct);
      instance.SetNewArray(&newArray_KStruct);
      instance.SetDelete(&delete_KStruct);
      instance.SetDeleteArray(&deleteArray_KStruct);
      instance.SetDestructor(&destruct_KStruct);
      instance.SetStreamerFunc(&streamer_KStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KStruct*)
   {
      return GenerateInitInstanceLocal((::KStruct*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KStruct*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KGeometry(void *p = 0);
   static void *newArray_KGeometry(Long_t size, void *p);
   static void delete_KGeometry(void *p);
   static void deleteArray_KGeometry(void *p);
   static void destruct_KGeometry(void *p);
   static void streamer_KGeometry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KGeometry*)
   {
      ::KGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KGeometry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KGeometry", ::KGeometry::Class_Version(), "inc/KGeometry.h", 10,
                  typeid(::KGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KGeometry::Dictionary, isa_proxy, 16,
                  sizeof(::KGeometry) );
      instance.SetNew(&new_KGeometry);
      instance.SetNewArray(&newArray_KGeometry);
      instance.SetDelete(&delete_KGeometry);
      instance.SetDeleteArray(&deleteArray_KGeometry);
      instance.SetDestructor(&destruct_KGeometry);
      instance.SetStreamerFunc(&streamer_KGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KGeometry*)
   {
      return GenerateInitInstanceLocal((::KGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KGeometry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KDetector(void *p = 0);
   static void *newArray_KDetector(Long_t size, void *p);
   static void delete_KDetector(void *p);
   static void deleteArray_KDetector(void *p);
   static void destruct_KDetector(void *p);
   static void streamer_KDetector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KDetector*)
   {
      ::KDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KDetector", ::KDetector::Class_Version(), "inc/KDetector.h", 40,
                  typeid(::KDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KDetector::Dictionary, isa_proxy, 16,
                  sizeof(::KDetector) );
      instance.SetNew(&new_KDetector);
      instance.SetNewArray(&newArray_KDetector);
      instance.SetDelete(&delete_KDetector);
      instance.SetDeleteArray(&deleteArray_KDetector);
      instance.SetDestructor(&destruct_KDetector);
      instance.SetStreamerFunc(&streamer_KDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KDetector*)
   {
      return GenerateInitInstanceLocal((::KDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KPad(void *p = 0);
   static void *newArray_KPad(Long_t size, void *p);
   static void delete_KPad(void *p);
   static void deleteArray_KPad(void *p);
   static void destruct_KPad(void *p);
   static void streamer_KPad(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KPad*)
   {
      ::KPad *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KPad >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KPad", ::KPad::Class_Version(), "inc/KPad.h", 29,
                  typeid(::KPad), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KPad::Dictionary, isa_proxy, 16,
                  sizeof(::KPad) );
      instance.SetNew(&new_KPad);
      instance.SetNewArray(&newArray_KPad);
      instance.SetDelete(&delete_KPad);
      instance.SetDeleteArray(&deleteArray_KPad);
      instance.SetDestructor(&destruct_KPad);
      instance.SetStreamerFunc(&streamer_KPad);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KPad*)
   {
      return GenerateInitInstanceLocal((::KPad*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KPad*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_K3D(void *p);
   static void deleteArray_K3D(void *p);
   static void destruct_K3D(void *p);
   static void streamer_K3D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::K3D*)
   {
      ::K3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::K3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("K3D", ::K3D::Class_Version(), "inc/K3D.h", 25,
                  typeid(::K3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::K3D::Dictionary, isa_proxy, 16,
                  sizeof(::K3D) );
      instance.SetDelete(&delete_K3D);
      instance.SetDeleteArray(&deleteArray_K3D);
      instance.SetDestructor(&destruct_K3D);
      instance.SetStreamerFunc(&streamer_K3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::K3D*)
   {
      return GenerateInitInstanceLocal((::K3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::K3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KPixel(void *p);
   static void deleteArray_KPixel(void *p);
   static void destruct_KPixel(void *p);
   static void streamer_KPixel(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KPixel*)
   {
      ::KPixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KPixel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KPixel", ::KPixel::Class_Version(), "inc/KPixel.h", 15,
                  typeid(::KPixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KPixel::Dictionary, isa_proxy, 16,
                  sizeof(::KPixel) );
      instance.SetDelete(&delete_KPixel);
      instance.SetDeleteArray(&deleteArray_KPixel);
      instance.SetDestructor(&destruct_KPixel);
      instance.SetStreamerFunc(&streamer_KPixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KPixel*)
   {
      return GenerateInitInstanceLocal((::KPixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KPixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KStrip(void *p = 0);
   static void *newArray_KStrip(Long_t size, void *p);
   static void delete_KStrip(void *p);
   static void deleteArray_KStrip(void *p);
   static void destruct_KStrip(void *p);
   static void streamer_KStrip(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KStrip*)
   {
      ::KStrip *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KStrip >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KStrip", ::KStrip::Class_Version(), "inc/KStrip.h", 18,
                  typeid(::KStrip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KStrip::Dictionary, isa_proxy, 16,
                  sizeof(::KStrip) );
      instance.SetNew(&new_KStrip);
      instance.SetNewArray(&newArray_KStrip);
      instance.SetDelete(&delete_KStrip);
      instance.SetDeleteArray(&deleteArray_KStrip);
      instance.SetDestructor(&destruct_KStrip);
      instance.SetStreamerFunc(&streamer_KStrip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KStrip*)
   {
      return GenerateInitInstanceLocal((::KStrip*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KStrip*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KMesh(void *p);
   static void deleteArray_KMesh(void *p);
   static void destruct_KMesh(void *p);
   static void streamer_KMesh(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KMesh*)
   {
      ::KMesh *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KMesh >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KMesh", ::KMesh::Class_Version(), "inc/KMesh.h", 17,
                  typeid(::KMesh), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KMesh::Dictionary, isa_proxy, 16,
                  sizeof(::KMesh) );
      instance.SetDelete(&delete_KMesh);
      instance.SetDeleteArray(&deleteArray_KMesh);
      instance.SetDestructor(&destruct_KMesh);
      instance.SetStreamerFunc(&streamer_KMesh);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KMesh*)
   {
      return GenerateInitInstanceLocal((::KMesh*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KMesh*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KImplant3D(void *p);
   static void deleteArray_KImplant3D(void *p);
   static void destruct_KImplant3D(void *p);
   static void streamer_KImplant3D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KImplant3D*)
   {
      ::KImplant3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KImplant3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KImplant3D", ::KImplant3D::Class_Version(), "inc/KImplant3D.h", 17,
                  typeid(::KImplant3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KImplant3D::Dictionary, isa_proxy, 16,
                  sizeof(::KImplant3D) );
      instance.SetDelete(&delete_KImplant3D);
      instance.SetDeleteArray(&deleteArray_KImplant3D);
      instance.SetDestructor(&destruct_KImplant3D);
      instance.SetStreamerFunc(&streamer_KImplant3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KImplant3D*)
   {
      return GenerateInitInstanceLocal((::KImplant3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KImplant3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KImplant2D(void *p);
   static void deleteArray_KImplant2D(void *p);
   static void destruct_KImplant2D(void *p);
   static void streamer_KImplant2D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KImplant2D*)
   {
      ::KImplant2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KImplant2D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KImplant2D", ::KImplant2D::Class_Version(), "inc/KImplant2D.h", 17,
                  typeid(::KImplant2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KImplant2D::Dictionary, isa_proxy, 16,
                  sizeof(::KImplant2D) );
      instance.SetDelete(&delete_KImplant2D);
      instance.SetDeleteArray(&deleteArray_KImplant2D);
      instance.SetDestructor(&destruct_KImplant2D);
      instance.SetStreamerFunc(&streamer_KImplant2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KImplant2D*)
   {
      return GenerateInitInstanceLocal((::KImplant2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KImplant2D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KField::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KField::Class_Name()
{
   return "KField";
}

//______________________________________________________________________________
const char *KField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KField*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KField*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KField*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KField*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KMaterial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KMaterial::Class_Name()
{
   return "KMaterial";
}

//______________________________________________________________________________
const char *KMaterial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMaterial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KMaterial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMaterial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KMaterial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMaterial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KMaterial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMaterial*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KStruct::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KStruct::Class_Name()
{
   return "KStruct";
}

//______________________________________________________________________________
const char *KStruct::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KStruct*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KStruct::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KStruct*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KStruct::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KStruct*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KStruct::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KStruct*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KGeometry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KGeometry::Class_Name()
{
   return "KGeometry";
}

//______________________________________________________________________________
const char *KGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KGeometry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KGeometry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KGeometry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KGeometry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KDetector::Class_Name()
{
   return "KDetector";
}

//______________________________________________________________________________
const char *KDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KPad::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KPad::Class_Name()
{
   return "KPad";
}

//______________________________________________________________________________
const char *KPad::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KPad*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KPad::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KPad*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KPad::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KPad*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KPad::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KPad*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr K3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *K3D::Class_Name()
{
   return "K3D";
}

//______________________________________________________________________________
const char *K3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::K3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int K3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::K3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *K3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::K3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *K3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::K3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KPixel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KPixel::Class_Name()
{
   return "KPixel";
}

//______________________________________________________________________________
const char *KPixel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KPixel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KPixel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KPixel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KPixel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KPixel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KPixel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KPixel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KStrip::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KStrip::Class_Name()
{
   return "KStrip";
}

//______________________________________________________________________________
const char *KStrip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KStrip*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KStrip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KStrip*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KStrip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KStrip*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KStrip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KStrip*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KMesh::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KMesh::Class_Name()
{
   return "KMesh";
}

//______________________________________________________________________________
const char *KMesh::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMesh*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KMesh::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMesh*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KMesh::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMesh*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KMesh::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMesh*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KImplant3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KImplant3D::Class_Name()
{
   return "KImplant3D";
}

//______________________________________________________________________________
const char *KImplant3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KImplant3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KImplant3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KImplant3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KImplant3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KImplant3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KImplant3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KImplant3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KImplant2D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KImplant2D::Class_Name()
{
   return "KImplant2D";
}

//______________________________________________________________________________
const char *KImplant2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KImplant2D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KImplant2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KImplant2D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KImplant2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KImplant2D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KImplant2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KImplant2D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KField::Streamer(TBuffer &R__b)
{
   // Stream an object of class KField.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> Method;
      R__b >> dim;
      R__b >> U;
      R__b >> Ex;
      R__b >> Ey;
      R__b >> Ez;
      R__b >> E;
      R__b.CheckByteCount(R__s, R__c, KField::IsA());
   } else {
      R__c = R__b.WriteVersion(KField::IsA(), kTRUE);
      R__b << Method;
      R__b << dim;
      R__b << (TObject*)U;
      R__b << (TObject*)Ex;
      R__b << (TObject*)Ey;
      R__b << (TObject*)Ez;
      R__b << (TObject*)E;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KField(void *p) {
      return  p ? new(p) ::KField : new ::KField;
   }
   static void *newArray_KField(Long_t nElements, void *p) {
      return p ? new(p) ::KField[nElements] : new ::KField[nElements];
   }
   // Wrapper around operator delete
   static void delete_KField(void *p) {
      delete ((::KField*)p);
   }
   static void deleteArray_KField(void *p) {
      delete [] ((::KField*)p);
   }
   static void destruct_KField(void *p) {
      typedef ::KField current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KField(TBuffer &buf, void *obj) {
      ((::KField*)obj)->::KField::Streamer(buf);
   }
} // end of namespace ROOT for class ::KField

//______________________________________________________________________________
void KMaterial::Streamer(TBuffer &R__b)
{
   // Stream an object of class KMaterial.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, KMaterial::IsA());
   } else {
      R__c = R__b.WriteVersion(KMaterial::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KMaterial(void *p) {
      return  p ? new(p) ::KMaterial : new ::KMaterial;
   }
   static void *newArray_KMaterial(Long_t nElements, void *p) {
      return p ? new(p) ::KMaterial[nElements] : new ::KMaterial[nElements];
   }
   // Wrapper around operator delete
   static void delete_KMaterial(void *p) {
      delete ((::KMaterial*)p);
   }
   static void deleteArray_KMaterial(void *p) {
      delete [] ((::KMaterial*)p);
   }
   static void destruct_KMaterial(void *p) {
      typedef ::KMaterial current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KMaterial(TBuffer &buf, void *obj) {
      ((::KMaterial*)obj)->::KMaterial::Streamer(buf);
   }
} // end of namespace ROOT for class ::KMaterial

//______________________________________________________________________________
void KStruct::Streamer(TBuffer &R__b)
{
   // Stream an object of class KStruct.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> PCharge;
      R__b >> Steps;
      R__b >> DStrip;
      R__b >> Xlength;
      R__b >> Ylength;
      R__b >> Zlength;
      R__b >> TTime;
      R__b.ReadStaticArray((float*)TCharge);
      R__b.ReadStaticArray((float*)Xtrack);
      R__b.ReadStaticArray((float*)Ytrack);
      R__b.ReadStaticArray((float*)Ztrack);
      R__b.ReadStaticArray((float*)Charge);
      R__b.ReadStaticArray((float*)Time);
      R__b.ReadStaticArray((float*)Efield);
      R__b.ReadStaticArray((float*)MulCar);
      R__b.CheckByteCount(R__s, R__c, KStruct::IsA());
   } else {
      R__c = R__b.WriteVersion(KStruct::IsA(), kTRUE);
      R__b << PCharge;
      R__b << Steps;
      R__b << DStrip;
      R__b << Xlength;
      R__b << Ylength;
      R__b << Zlength;
      R__b << TTime;
      R__b.WriteArray(TCharge, 99);
      R__b.WriteArray(Xtrack, 10001);
      R__b.WriteArray(Ytrack, 10001);
      R__b.WriteArray(Ztrack, 10001);
      R__b.WriteArray(Charge, 10001);
      R__b.WriteArray(Time, 10001);
      R__b.WriteArray(Efield, 10001);
      R__b.WriteArray(MulCar, 10001);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KStruct(void *p) {
      return  p ? new(p) ::KStruct : new ::KStruct;
   }
   static void *newArray_KStruct(Long_t nElements, void *p) {
      return p ? new(p) ::KStruct[nElements] : new ::KStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_KStruct(void *p) {
      delete ((::KStruct*)p);
   }
   static void deleteArray_KStruct(void *p) {
      delete [] ((::KStruct*)p);
   }
   static void destruct_KStruct(void *p) {
      typedef ::KStruct current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KStruct(TBuffer &buf, void *obj) {
      ((::KStruct*)obj)->::KStruct::Streamer(buf);
   }
} // end of namespace ROOT for class ::KStruct

//______________________________________________________________________________
void KGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class KGeometry.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> EG;
      R__b >> DM;
      R__b >> nx;
      R__b >> ny;
      R__b >> nz;
      R__b.CheckByteCount(R__s, R__c, KGeometry::IsA());
   } else {
      R__c = R__b.WriteVersion(KGeometry::IsA(), kTRUE);
      R__b << (TObject*)EG;
      R__b << (TObject*)DM;
      R__b << nx;
      R__b << ny;
      R__b << nz;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KGeometry(void *p) {
      return  p ? new(p) ::KGeometry : new ::KGeometry;
   }
   static void *newArray_KGeometry(Long_t nElements, void *p) {
      return p ? new(p) ::KGeometry[nElements] : new ::KGeometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_KGeometry(void *p) {
      delete ((::KGeometry*)p);
   }
   static void deleteArray_KGeometry(void *p) {
      delete [] ((::KGeometry*)p);
   }
   static void destruct_KGeometry(void *p) {
      typedef ::KGeometry current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KGeometry(TBuffer &buf, void *obj) {
      ((::KGeometry*)obj)->::KGeometry::Streamer(buf);
   }
} // end of namespace ROOT for class ::KGeometry

//______________________________________________________________________________
void KDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class KDetector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KGeometry::Streamer(R__b);
      KMaterial::Streamer(R__b);
      R__b >> Deps;
      R__b >> ran;
      R__b >> CalErr;
      R__b >> MaxIter;
      R__b >> Debug;
      R__b >> Voltage;
      R__b >> Voltage2;
      Voltages.Streamer(R__b);
      R__b >> NeffF;
      R__b >> NeffH;
      int R__i;
      for (R__i = 0; R__i < 99; R__i++)
         Ramo[R__i].Streamer(R__b);
      Real.Streamer(R__b);
      R__b.ReadStaticArray((float*)B);
      R__b >> Landau;
      R__b >> taue;
      R__b >> tauh;
      R__b >> BreakDown;
      R__b >> MTresh;
      R__b >> BDTresh;
      R__b.ReadStaticArray((float*)enp);
      R__b.ReadStaticArray((float*)exp);
      R__b >> diff;
      R__b >> average;
      R__b >> SStep;
      R__b >> pos;
      R__b >> neg;
      R__b >> sum;
      R__b.ReadStaticArray((double*)qnode);
      R__b >> q_sum;
      R__b.CheckByteCount(R__s, R__c, KDetector::IsA());
   } else {
      R__c = R__b.WriteVersion(KDetector::IsA(), kTRUE);
      KGeometry::Streamer(R__b);
      KMaterial::Streamer(R__b);
      R__b << Deps;
      R__b << ran;
      R__b << CalErr;
      R__b << MaxIter;
      R__b << Debug;
      R__b << Voltage;
      R__b << Voltage2;
      Voltages.Streamer(R__b);
      R__b << NeffF;
      R__b << (TObject*)NeffH;
      int R__i;
      for (R__i = 0; R__i < 99; R__i++)
         Ramo[R__i].Streamer(R__b);
      Real.Streamer(R__b);
      R__b.WriteArray(B, 3);
      R__b << Landau;
      R__b << taue;
      R__b << tauh;
      R__b << BreakDown;
      R__b << MTresh;
      R__b << BDTresh;
      R__b.WriteArray(enp, 3);
      R__b.WriteArray(exp, 3);
      R__b << diff;
      R__b << average;
      R__b << SStep;
      R__b << (TObject*)pos;
      R__b << (TObject*)neg;
      R__b << (TObject*)sum;
      R__b.WriteArray(qnode, 99);
      R__b << q_sum;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KDetector(void *p) {
      return  p ? new(p) ::KDetector : new ::KDetector;
   }
   static void *newArray_KDetector(Long_t nElements, void *p) {
      return p ? new(p) ::KDetector[nElements] : new ::KDetector[nElements];
   }
   // Wrapper around operator delete
   static void delete_KDetector(void *p) {
      delete ((::KDetector*)p);
   }
   static void deleteArray_KDetector(void *p) {
      delete [] ((::KDetector*)p);
   }
   static void destruct_KDetector(void *p) {
      typedef ::KDetector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KDetector(TBuffer &buf, void *obj) {
      ((::KDetector*)obj)->::KDetector::Streamer(buf);
   }
} // end of namespace ROOT for class ::KDetector

//______________________________________________________________________________
void KPad::Streamer(TBuffer &R__b)
{
   // Stream an object of class KPad.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KDetector::Streamer(R__b);
      PhyPot.Streamer(R__b);
      PhyField.Streamer(R__b);
      R__b >> Neff;
      R__b >> CellY;
      R__b >> CellX;
      R__b.CheckByteCount(R__s, R__c, KPad::IsA());
   } else {
      R__c = R__b.WriteVersion(KPad::IsA(), kTRUE);
      KDetector::Streamer(R__b);
      PhyPot.Streamer(R__b);
      PhyField.Streamer(R__b);
      R__b << Neff;
      R__b << CellY;
      R__b << CellX;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KPad(void *p) {
      return  p ? new(p) ::KPad : new ::KPad;
   }
   static void *newArray_KPad(Long_t nElements, void *p) {
      return p ? new(p) ::KPad[nElements] : new ::KPad[nElements];
   }
   // Wrapper around operator delete
   static void delete_KPad(void *p) {
      delete ((::KPad*)p);
   }
   static void deleteArray_KPad(void *p) {
      delete [] ((::KPad*)p);
   }
   static void destruct_KPad(void *p) {
      typedef ::KPad current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KPad(TBuffer &buf, void *obj) {
      ((::KPad*)obj)->::KPad::Streamer(buf);
   }
} // end of namespace ROOT for class ::KPad

//______________________________________________________________________________
void K3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class K3D.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KDetector::Streamer(R__b);
      R__b >> Col;
      R__b >> CellZ;
      R__b >> CellX;
      R__b >> CellY;
      delete [] PosD;
      PosD = new Float_t[Col];
      R__b.ReadFastArray(PosD,Col);
      delete [] PosX;
      PosX = new Float_t[Col];
      R__b.ReadFastArray(PosX,Col);
      delete [] PosY;
      PosY = new Float_t[Col];
      R__b.ReadFastArray(PosY,Col);
      delete [] PosR;
      PosR = new Float_t[Col];
      R__b.ReadFastArray(PosR,Col);
      delete [] PosW;
      PosW = new Short_t[Col];
      R__b.ReadFastArray(PosW,Col);
      delete [] PosM;
      PosM = new Short_t[Col];
      R__b.ReadFastArray(PosM,Col);
      R__b.CheckByteCount(R__s, R__c, K3D::IsA());
   } else {
      R__c = R__b.WriteVersion(K3D::IsA(), kTRUE);
      KDetector::Streamer(R__b);
      R__b << Col;
      R__b << CellZ;
      R__b << CellX;
      R__b << CellY;
      R__b.WriteFastArray(PosD,Col);
      R__b.WriteFastArray(PosX,Col);
      R__b.WriteFastArray(PosY,Col);
      R__b.WriteFastArray(PosR,Col);
      R__b.WriteFastArray(PosW,Col);
      R__b.WriteFastArray(PosM,Col);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_K3D(void *p) {
      delete ((::K3D*)p);
   }
   static void deleteArray_K3D(void *p) {
      delete [] ((::K3D*)p);
   }
   static void destruct_K3D(void *p) {
      typedef ::K3D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_K3D(TBuffer &buf, void *obj) {
      ((::K3D*)obj)->::K3D::Streamer(buf);
   }
} // end of namespace ROOT for class ::K3D

//______________________________________________________________________________
void KPixel::Streamer(TBuffer &R__b)
{
   // Stream an object of class KPixel.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KDetector::Streamer(R__b);
      R__b >> nPix;
      R__b >> CellZ;
      R__b >> CellX;
      R__b >> CellY;
      delete [] PSx;
      PSx = new Float_t[nPix];
      R__b.ReadFastArray(PSx,nPix);
      delete [] PSy;
      PSy = new Float_t[nPix];
      R__b.ReadFastArray(PSy,nPix);
      delete [] PSWx;
      PSWx = new Float_t[nPix];
      R__b.ReadFastArray(PSWx,nPix);
      delete [] PSWy;
      PSWy = new Float_t[nPix];
      R__b.ReadFastArray(PSWy,nPix);
      delete [] PSd;
      PSd = new Float_t[nPix];
      R__b.ReadFastArray(PSd,nPix);
      delete [] PSW;
      PSW = new Short_t[nPix];
      R__b.ReadFastArray(PSW,nPix);
      R__b.CheckByteCount(R__s, R__c, KPixel::IsA());
   } else {
      R__c = R__b.WriteVersion(KPixel::IsA(), kTRUE);
      KDetector::Streamer(R__b);
      R__b << nPix;
      R__b << CellZ;
      R__b << CellX;
      R__b << CellY;
      R__b.WriteFastArray(PSx,nPix);
      R__b.WriteFastArray(PSy,nPix);
      R__b.WriteFastArray(PSWx,nPix);
      R__b.WriteFastArray(PSWy,nPix);
      R__b.WriteFastArray(PSd,nPix);
      R__b.WriteFastArray(PSW,nPix);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KPixel(void *p) {
      delete ((::KPixel*)p);
   }
   static void deleteArray_KPixel(void *p) {
      delete [] ((::KPixel*)p);
   }
   static void destruct_KPixel(void *p) {
      typedef ::KPixel current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KPixel(TBuffer &buf, void *obj) {
      ((::KPixel*)obj)->::KPixel::Streamer(buf);
   }
} // end of namespace ROOT for class ::KPixel

//______________________________________________________________________________
void KStrip::Streamer(TBuffer &R__b)
{
   // Stream an object of class KStrip.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KDetector::Streamer(R__b);
      R__b >> Pitch;
      R__b >> Width;
      R__b >> Depth;
      R__b >> CellX;
      R__b >> CellY;
      R__b >> NoStrips;
      R__b >> RamoStrip;
      R__b.CheckByteCount(R__s, R__c, KStrip::IsA());
   } else {
      R__c = R__b.WriteVersion(KStrip::IsA(), kTRUE);
      KDetector::Streamer(R__b);
      R__b << Pitch;
      R__b << Width;
      R__b << Depth;
      R__b << CellX;
      R__b << CellY;
      R__b << NoStrips;
      R__b << RamoStrip;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KStrip(void *p) {
      return  p ? new(p) ::KStrip : new ::KStrip;
   }
   static void *newArray_KStrip(Long_t nElements, void *p) {
      return p ? new(p) ::KStrip[nElements] : new ::KStrip[nElements];
   }
   // Wrapper around operator delete
   static void delete_KStrip(void *p) {
      delete ((::KStrip*)p);
   }
   static void deleteArray_KStrip(void *p) {
      delete [] ((::KStrip*)p);
   }
   static void destruct_KStrip(void *p) {
      typedef ::KStrip current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KStrip(TBuffer &buf, void *obj) {
      ((::KStrip*)obj)->::KStrip::Streamer(buf);
   }
} // end of namespace ROOT for class ::KStrip

//______________________________________________________________________________
void KMesh::Streamer(TBuffer &R__b)
{
   // Stream an object of class KMesh.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> N;
      R__b >> Max;
      R__b >> Min;
      R__b.CheckByteCount(R__s, R__c, KMesh::IsA());
   } else {
      R__c = R__b.WriteVersion(KMesh::IsA(), kTRUE);
      R__b << N;
      R__b << Max;
      R__b << Min;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KMesh(void *p) {
      delete ((::KMesh*)p);
   }
   static void deleteArray_KMesh(void *p) {
      delete [] ((::KMesh*)p);
   }
   static void destruct_KMesh(void *p) {
      typedef ::KMesh current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KMesh(TBuffer &buf, void *obj) {
      ((::KMesh*)obj)->::KMesh::Streamer(buf);
   }
} // end of namespace ROOT for class ::KMesh

//______________________________________________________________________________
void KImplant3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class KImplant3D.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.ReadStaticArray((double*)Dim);
      R__b >> fConc;
      R__b.CheckByteCount(R__s, R__c, KImplant3D::IsA());
   } else {
      R__c = R__b.WriteVersion(KImplant3D::IsA(), kTRUE);
      R__b.WriteArray(Dim, 6);
      R__b << fConc;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KImplant3D(void *p) {
      delete ((::KImplant3D*)p);
   }
   static void deleteArray_KImplant3D(void *p) {
      delete [] ((::KImplant3D*)p);
   }
   static void destruct_KImplant3D(void *p) {
      typedef ::KImplant3D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KImplant3D(TBuffer &buf, void *obj) {
      ((::KImplant3D*)obj)->::KImplant3D::Streamer(buf);
   }
} // end of namespace ROOT for class ::KImplant3D

//______________________________________________________________________________
void KImplant2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class KImplant2D.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.ReadStaticArray((double*)Dim);
      R__b >> fConc;
      R__b.CheckByteCount(R__s, R__c, KImplant2D::IsA());
   } else {
      R__c = R__b.WriteVersion(KImplant2D::IsA(), kTRUE);
      R__b.WriteArray(Dim, 3);
      R__b << fConc;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KImplant2D(void *p) {
      delete ((::KImplant2D*)p);
   }
   static void deleteArray_KImplant2D(void *p) {
      delete [] ((::KImplant2D*)p);
   }
   static void destruct_KImplant2D(void *p) {
      typedef ::KImplant2D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KImplant2D(TBuffer &buf, void *obj) {
      ((::KImplant2D*)obj)->::KImplant2D::Streamer(buf);
   }
} // end of namespace ROOT for class ::KImplant2D

namespace {
  void TriggerDictionaryInitialization_KDetSimDictUX_Impl() {
    static const char* headers[] = {
"inc/KPad.h",
"inc/KDetector.h",
"inc/KField.h",
"inc/K3D.h",
"inc/KPixel.h",
"inc/KGeometry.h",
"inc/KMaterial.h",
"inc/KStruct.h",
"inc/KStrip.h",
"inc/KMesh.h",
"inc/KImplant3D.h",
"inc/KImplant2D.h",
0
    };
    static const char* includePaths[] = {
"/home/xueqilin/root/include/",
"/home/xueqilin/KDetSim2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "KDetSimDictUX dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$inc/KPad.h")))  KField;
class __attribute__((annotate("$clingAutoload$inc/KPad.h")))  KMaterial;
class __attribute__((annotate("$clingAutoload$inc/KPad.h")))  KStruct;
class __attribute__((annotate("$clingAutoload$inc/KPad.h")))  KGeometry;
class __attribute__((annotate("$clingAutoload$inc/KPad.h")))  KDetector;
class __attribute__((annotate("$clingAutoload$inc/KPad.h")))  KPad;
class __attribute__((annotate("$clingAutoload$inc/K3D.h")))  K3D;
class __attribute__((annotate("$clingAutoload$inc/KPixel.h")))  KPixel;
class __attribute__((annotate("$clingAutoload$inc/KStrip.h")))  KStrip;
class __attribute__((annotate("$clingAutoload$inc/KMesh.h")))  KMesh;
class __attribute__((annotate("$clingAutoload$inc/KImplant3D.h")))  KImplant3D;
class __attribute__((annotate("$clingAutoload$inc/KImplant2D.h")))  KImplant2D;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "KDetSimDictUX dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "inc/KPad.h"
#include "inc/KDetector.h"
#include "inc/KField.h"
#include "inc/K3D.h"
#include "inc/KPixel.h"
#include "inc/KGeometry.h"
#include "inc/KMaterial.h"
#include "inc/KStruct.h"
#include "inc/KStrip.h"
#include "inc/KMesh.h"
#include "inc/KImplant3D.h"
#include "inc/KImplant2D.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"GetNhs", payloadCode, "@",
"K3D", payloadCode, "@",
"KAlpha", payloadCode, "@",
"KDetector", payloadCode, "@",
"KField", payloadCode, "@",
"KGeometry", payloadCode, "@",
"KHisProject", payloadCode, "@",
"KImplant2D", payloadCode, "@",
"KImplant3D", payloadCode, "@",
"KInterpolate2D", payloadCode, "@",
"KM", payloadCode, "@",
"KMaterial", payloadCode, "@",
"KMesh", payloadCode, "@",
"KPad", payloadCode, "@",
"KPixel", payloadCode, "@",
"KStrip", payloadCode, "@",
"KStruct", payloadCode, "@",
"laser", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("KDetSimDictUX",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_KDetSimDictUX_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_KDetSimDictUX_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_KDetSimDictUX() {
  TriggerDictionaryInitialization_KDetSimDictUX_Impl();
}
