#pragma once

// Name: ArkUWP, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class CoreUObject.Object
// 0x0028
class UObject
{
public:
	static class TUObjectArray*                        GObjects;                                                  // 0x0000(0x0008)
	void*                                              VfTable;                                                   // 0x0000(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            Flags;                                                     // 0x0008(0x0004) NOT AUTO-GENERATED PROPERTY
	int                                                InternalIndex;                                             // 0x000C(0x0004) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                     // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                      // 0x0018(0x0008) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                     // 0x0020(0x0008) NOT AUTO-GENERATED PROPERTY


	static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static T* FindObject()
	{
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static std::vector<T*> FindObjects(const std::string& name)
	{
		std::vector<T*> ret;
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	template<typename T>
	static std::vector<T*> FindObjects()
	{
		std::vector<T*> ret;
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		// return;
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, /*FUNC_INDEX*/)(this, function, parms);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Object");
		return ptr;
	}



	void ExecuteUbergraph(int EntryPoint);
};

// Class CoreUObject.Interface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Interface");
		return ptr;
	}



};

// Class CoreUObject.GCObjectReferencer
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData_EBTF[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return ptr;
	}



};

// Class CoreUObject.TextBuffer
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData_FSZX[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.TextBuffer");
		return ptr;
	}



};

// Class CoreUObject.Field
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UField : public UObject
{
public:
	class UField*                                      Next;                                                      // 0x0028(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Field");
		return ptr;
	}



};

// Class CoreUObject.Struct
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UStruct : public UField
{
public:
	class UStruct*                                     SuperField;                                                // 0x0030(0x0008) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                  // 0x0038(0x0008) NOT AUTO-GENERATED PROPERTY
	int                                                PropertySize;                                              // 0x0040(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_Y88BK175UV[0x4];                                       // 0x0044(0x0004) NOT AUTO-GENERATED PROPERTY
	TArray<unsigned char>                              Script;                                                    // 0x0048(0x0010) NOT AUTO-GENERATED PROPERTY
	int                                                MinAlignment;                                              // 0x0058(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_HPDUKX47PF[0x4];                                       // 0x005C(0x0004) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PropertyLink;                                              // 0x0060(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   RefLink;                                                   // 0x0068(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   DestructorLink;                                            // 0x0070(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PostConstructLink;                                         // 0x0078(0x0008) NOT AUTO-GENERATED PROPERTY
	TArray<UObject*>                                   ScriptAndPropertyObjectReferences;                         // 0x0080(0x0010) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Struct");
		return ptr;
	}



};

// Class CoreUObject.ScriptStruct
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData_OUIQ[0x18];                                    // 0x0090(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return ptr;
	}



};

// Class CoreUObject.Package
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData_VZWB[0x68];                                    // 0x0028(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Package");
		return ptr;
	}



};

// Class CoreUObject.Class
// 0x00F8 (FullSize[0x0188] - InheritedSize[0x0090])
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData_N2EC[0xF8];                                    // 0x0090(0x00F8) MISSED OFFSET (PADDING)


template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		// return nullptr;
		GetVFunction<UObject*(*)(UClass*)>(this, /*FUNC_INDEX*/)(this);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Class");
		return ptr;
	}



};

// Class CoreUObject.Function
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UFunction : public UStruct
{
public:
	uint                                               FunctionFlags;                                             // 0x0090(0x0004) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         RepOffset;                                                 // 0x0094(0x0002) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_Q9XYBCPIBO[0x1];                                       // 0x0096(0x0001) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_6ZDXRETGJ3[0x1];                                       // 0x0097(0x0001) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         ParmsSize;                                                 // 0x0098(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         ReturnValueOffset;                                         // 0x009A(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         RPCId;                                                     // 0x009C(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         RPCResponseId;                                             // 0x009E(0x0002) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                       // 0x00A0(0x0008) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                      // 0x00A8(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Function");
		return ptr;
	}



};

// Class CoreUObject.PackageMap
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData_1E3J[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.PackageMap");
		return ptr;
	}



};

// Class CoreUObject.Enum
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData_YHMT[0x28];                                    // 0x0030(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Enum");
		return ptr;
	}



};

// Class CoreUObject.Linker
// 0x0190 (FullSize[0x01B8] - InheritedSize[0x0028])
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData_03KZ[0x190];                                   // 0x0028(0x0190) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Linker");
		return ptr;
	}



};

// Class CoreUObject.LinkerLoad
// 0x04B0 (FullSize[0x0668] - InheritedSize[0x01B8])
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData_G1AL[0x4B0];                                   // 0x01B8(0x04B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerLoad");
		return ptr;
	}



};

// Class CoreUObject.LinkerSave
// 0x0118 (FullSize[0x02D0] - InheritedSize[0x01B8])
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData_LL5P[0x118];                                   // 0x01B8(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerSave");
		return ptr;
	}



};

// Class CoreUObject.MetaData
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData_2FYV[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MetaData");
		return ptr;
	}



};

// Class CoreUObject.ObjectRedirector
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData_RRO1[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return ptr;
	}



};

// Class CoreUObject.Property
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData_HRI6[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Property");
		return ptr;
	}



};

// Class CoreUObject.NumericProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNumericProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
		return ptr;
	}



};

// Class CoreUObject.ArrayProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_C119[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return ptr;
	}



};

// Class CoreUObject.ObjectPropertyBase
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData_HJQ7[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return ptr;
	}



};

// Class CoreUObject.AssetObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAssetObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.AssetObjectProperty");
		return ptr;
	}



};

// Class CoreUObject.AssetClassProperty
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UAssetClassProperty : public UAssetObjectProperty
{
public:
	unsigned char                                      UnknownData_GG6U[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.AssetClassProperty");
		return ptr;
	}



};

// Class CoreUObject.BoolProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_JTK3[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
		return ptr;
	}



};

// Class CoreUObject.ByteProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData_ZKZB[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
		return ptr;
	}



};

// Class CoreUObject.ObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return ptr;
	}



};

// Class CoreUObject.ClassProperty
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData_7YKW[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
		return ptr;
	}



};

// Class CoreUObject.DelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_QI1H[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return ptr;
	}



};

// Class CoreUObject.DoubleProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UDoubleProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return ptr;
	}



};

// Class CoreUObject.FloatProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UFloatProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
		return ptr;
	}



};

// Class CoreUObject.IntProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UIntProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.IntProperty");
		return ptr;
	}



};

// Class CoreUObject.Int16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int16Property");
		return ptr;
	}



};

// Class CoreUObject.Int64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int64Property");
		return ptr;
	}



};

// Class CoreUObject.Int8Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt8Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int8Property");
		return ptr;
	}



};

// Class CoreUObject.InterfaceProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_2ULI[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return ptr;
	}



};

// Class CoreUObject.LazyObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class ULazyObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return ptr;
	}



};

// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_VOWO[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return ptr;
	}



};

// Class CoreUObject.NameProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNameProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.NameProperty");
		return ptr;
	}



};

// Class CoreUObject.StrProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UStrProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.StrProperty");
		return ptr;
	}



};

// Class CoreUObject.StructProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_ABDB[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.StructProperty");
		return ptr;
	}



};

// Class CoreUObject.UInt16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
		return ptr;
	}



};

// Class CoreUObject.UInt32Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt32Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
		return ptr;
	}



};

// Class CoreUObject.UInt64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
		return ptr;
	}



};

// Class CoreUObject.WeakObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UWeakObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return ptr;
	}



};

// Class CoreUObject.TextProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UTextProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.TextProperty");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
