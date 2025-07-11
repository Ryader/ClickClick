﻿#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2;
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
struct EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
struct Func_2_tD6A94C952B3804092A855172C7AB943068CC0AF1;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IIndexedProperties_1_t01A3A82927FBE289CDB19F05F922BCFDD35AEFC1;
struct IIndexedProperties_1_t460CFDCB1070EE881F2984DEF724B97EA2254BE1;
struct IIndexedProperties_1_t452C023303070FB0D58075B1B4CF4F79283DFCED;
struct IIndexedProperties_1_t16E7285CE8312C18902FA6791AE9D43AF334D41A;
struct IIndexedProperties_1_t912538E715322197D269DC6F8DC358A99E17740B;
struct IIndexedProperties_1_t4FE2DF1E528B5C420E2721E6817D95176EEC389D;
struct IIndexedProperties_1_t176AC67EFF45925CD2AE0E36898CFBD27EFC8616;
struct IIndexedProperties_1_t70053CA73D8885F14715D3AEB587416B801F4034;
struct IIndexedProperties_1_t83EF54E7B435CEBF148FE787D1713A2126FFCAD7;
struct IIndexedProperties_1_tF3DA684D1266DEF065B4AF11168813F5C197789A;
struct IIndexedProperties_1_t8E8A15719E6AA8EA4F05DF704DCAAEF53274BA9E;
struct IIndexedProperties_1_t34EA255F2225207F925F7BE02CA6D6504E3B0F06;
struct IIndexedProperties_1_tDBA610095BCF991787DA6A6F8F3B38C38ABE1CAF;
struct IIndexedProperties_1_t3CE3B60BE113A662349FA7ED9F98DBA3852A02E0;
struct IIndexedProperties_1_tF9FDB762345B8EB0308D61F4EAD9740263268495;
struct IIndexedProperties_1_t74B71999E27801D0F7E7BF8AB880FAE3394F114E;
struct IIndexedProperties_1_t5EF8101BEA603712F06B19F0E4DEBFB7FE7F5762;
struct IIndexedProperties_1_t080B360C2E36CF82C9EE4782422F861782B018CF;
struct IIndexedProperties_1_t639EA41CE76434E7F565F251062D2526B6C859B1;
struct IIndexedProperties_1_t17D050D5198F5C40BE5076976BE73E5DE3A40616;
struct IIndexedProperties_1_t8BDD4B434C93C02E5B295EEF206A5CDD4CDF1A49;
struct IIndexedProperties_1_t71E5114CF0A886C33A2B6390D1EE2C65EBA90201;
struct IIndexedProperties_1_t096831C2D16C1223B1920D9CF53BAF44CA1C4D7D;
struct IIndexedProperties_1_t2EAC50BF6CA2809DC2FFA4455E0CE5DDB42F7255;
struct IIndexedProperties_1_tD95D836C022B1D6D706D4D4F005A43452F90B461;
struct IIndexedProperties_1_tE87B9E4B65F12BA22F309A84727FD8ECB69A675E;
struct IIndexedProperties_1_tC040469C77384C59A28120E44F506787A4FE8147;
struct IIndexedProperties_1_t8593D250423522C397164B2532F16FFBF46E8CE4;
struct IIndexedProperties_1_t21B61A2618D8ADCA4334C9BB3B84032D1C1C326C;
struct IIndexedProperties_1_t5E1E45B05F21BBF9FD1EEDFA3EBEDA72570FB651;
struct IIndexedProperties_1_tFCAA33F6C1336A718046F4CA106563EF2359D7D4;
struct IIndexedProperties_1_t2A12A148495955C8888DEF8789F6D1A3EACBA0BA;
struct IIndexedProperties_1_tAAF5BFCECBADF0AA18CE78B21AA8DF954232EBD9;
struct IIndexedProperties_1_t53A3E1FD5D3C1A71E3EE74DD45200E48D2811EDC;
struct IIndexedProperties_1_t1D116166FE70D1830A3D640290D6F241A333CF9F;
struct IIndexedProperties_1_t36E675EFFB19E9CDF13B1E2A730D5F779ABEF34A;
struct IIndexedProperties_1_tBEFF9D11DCCCF8D1027C581CD5DD2113EF0B9C01;
struct IIndexedProperties_1_t2164B76B3ABBB12BB2904428A292D967BA2B8D66;
struct IIndexedProperties_1_tDF62C1333B179D9A77CBFC77DAA6D5A9867FEC06;
struct IIndexedProperties_1_t97C14414126D306B930F05AD013A6AAED1F96B4B;
struct IIndexedProperties_1_tE08AF68734B01C9C8CFB57FA3F97AB0EDC0E6D5D;
struct IIndexedProperties_1_t0FF378237BD405FCFE765DE52E32840F498CC018;
struct IIndexedProperties_1_t04E0AC0836EFF02375DC3D5CA8BC3011915743DF;
struct IIndexedProperties_1_t53D7D9BE937186704C540766E94ECA8108532648;
struct IIndexedProperties_1_t1F7D6089549DC44E9B6428F430E09A9FFBF7C1E3;
struct IIndexedProperties_1_t86E35CB8C77EBBED90C8A9C7CC3921EC31BB20FE;
struct IIndexedProperties_1_t50A58A41492B7C7430DE14B497BECE5060B8121D;
struct IIndexedProperties_1_t961108855F4FED4E213FA22D7065C5BD080AF035;
struct IKeyedProperties_2_t19B1ECB501B1662FEF1F7DB304B301CE4C5D44E7;
struct IKeyedProperties_2_t1043DFDEED369CD3BD81BFB4DAD1FD92FD929C37;
struct IKeyedProperties_2_t1BD97E695540B7C4AF475ADB617966D69A4BBBD5;
struct IKeyedProperties_2_tFEEB155CA2F8F48BC79CD4ED4A83B3EF48DF81F2;
struct IKeyedProperties_2_t81A9B5CF5A34BD66A1304DAD4F8F2B762B46F752;
struct IKeyedProperties_2_tFD30DF67A3087112DF4F9D80D6F29D27988CB385;
struct IKeyedProperties_2_tE09412C99BC5613C311EAF962D8893D11A648986;
struct IKeyedProperties_2_tA88DAC5A58A4E0988CE7F4887B9CC86D90F41527;
struct IKeyedProperties_2_tD6A27977845DFA2A603072E15640AAD337986F0A;
struct IKeyedProperties_2_t788F56BCA0EAF4F30A390D2A7AA07F3A7EC1C9AE;
struct IKeyedProperties_2_t065739225CA3D237A2AB78D6DB35D40762CE5267;
struct IKeyedProperties_2_t1C1874CE7982AD2C041A53CB8F5B6548E6B633DD;
struct IKeyedProperties_2_t45029612BEDE56BC950A157C9FFDC013126753FB;
struct IKeyedProperties_2_t746CE41099315F398F8986BBE40A4D6F97D065D1;
struct IKeyedProperties_2_tDDAADD175C90668F461B9244F7123E56CD8399E4;
struct IKeyedProperties_2_t949878DF74255000C297AE7E8D001799DF9044F5;
struct IKeyedProperties_2_tC6C7DC31B14B0B8FB0BA1484B711B9D557FAF51B;
struct IKeyedProperties_2_t967EC84FBCE5D2A2CEF4F345FCE861FC228A4388;
struct IKeyedProperties_2_tDB57C432D9454E6ACFD6C8DF98E5FC045FF93FAB;
struct IKeyedProperties_2_t0F1568EF8ED53D3D8A9967695D81F90DBF885385;
struct IKeyedProperties_2_t91EF38F947F5C7659A9E5FCA512AA3CD05654228;
struct IKeyedProperties_2_t837C41C41B1FF0EC0F8B60EAA95A00B4343E9D1B;
struct IKeyedProperties_2_t08ECD043F4D9419B77D6368DF2950D6B50B2FD12;
struct IKeyedProperties_2_t70C9706AE91BA01C5ECA1FF91A1B62657E792912;
struct IKeyedProperties_2_t0E5C886F39CA4A2D8F01E5E581D2577D30A66326;
struct IKeyedProperties_2_t987936D5A22DBE1ADF64756F73FBC88E650E8962;
struct IKeyedProperties_2_t686B53FD77B32F72D51A1627064F1909FB16230B;
struct IKeyedProperties_2_tEE13F211CA5144B10B2C88C63D5CC9B9BE9ECFD7;
struct IKeyedProperties_2_t6C7677D08C6D28ED0FD87C2B2A909837ADDB699C;
struct IKeyedProperties_2_t63FBAA493E36B51F9DB689271C3C2BA672FF1559;
struct IKeyedProperties_2_t9B2C49709504DF9486B603AC46EABFC3B357CB3D;
struct IKeyedProperties_2_t938C50F0FAFE492FD8A878F8A956DC7AD8CEBB96;
struct IKeyedProperties_2_t3CE29B7FFB1BA4B73817EB2ADF271DAD132F8135;
struct IKeyedProperties_2_tED1D6D0561B18E98C3ABE6D8222470D0292CD88F;
struct IKeyedProperties_2_t789DF98F04320F5DB5F24920029347EEA8D6468C;
struct IKeyedProperties_2_t3C5F0E8BA44CE27E56939D73D4860F87639D61A6;
struct IKeyedProperties_2_t3D25A70D504E8E60B9629A1594494D6345264EDC;
struct IKeyedProperties_2_t83615E9A59D626BB82A5BDD72AE74A7ACD5622A9;
struct IKeyedProperties_2_t0D2D89E2BBD79E3713D696CCCECA7C608A821582;
struct IKeyedProperties_2_t4DE55B637BF48BFD2366D30CDB6DEB3361E94734;
struct IKeyedProperties_2_tA0C8DA6EDF96B87EB35EC86A1C9F248D163C3F70;
struct IKeyedProperties_2_tF5D14BBC861BF117C12B95997A9D21A7D7BA7B91;
struct IKeyedProperties_2_t7AD9E1A3DE0EFA16744F85D78F0C07DE18CA8565;
struct IKeyedProperties_2_t6BF7C39D86B6C8D60566844F9CDFEAA6C1FA943C;
struct IKeyedProperties_2_tC811BB7ECD321A3818668F305EB6017A5968E9AE;
struct IKeyedProperties_2_t97269C138F34A366FD1544054B7613CDBD903501;
struct IKeyedProperties_2_tA07B56415F64F554D6991FC16C98EBDC93107E1A;
struct IKeyedProperties_2_tD4BB2092951A0BFA224D7E1E8FDA19E0F5439689;
struct INamedProperties_1_tA8DF70936621A8474D155805DDBF5D7FC21B8FC8;
struct INamedProperties_1_tB2E1B7081DBA33CED11CCC209C26E97894844352;
struct INamedProperties_1_t7026F157B00CD3728975CB8D32126DC1431EFD36;
struct INamedProperties_1_t58DB6621AD53FD7387E7420A16EB159F7D04600C;
struct INamedProperties_1_tE552B984086951046EED71FA4A800FC83F549DC0;
struct INamedProperties_1_t43ACDF45E9B9BA244D85F8A72B22BDAF34729FCC;
struct INamedProperties_1_t676FBE52A17D87ED9143E37A21EDF049AE138D8F;
struct INamedProperties_1_tEA8542EE26E82ED37E76460BC51F7D99DABA75CD;
struct INamedProperties_1_t6C798D5D239F18748B4C6ACDCCFFF00ABEA2A98F;
struct INamedProperties_1_t2F26FDCEB0DC32D18187B76D203D9D6689339A3E;
struct INamedProperties_1_t2F49E3D1B0282611F2758D8FFD3FBB1D2B5CDDF8;
struct INamedProperties_1_t58D871FBE867E0CC2484AF1E6036FD3C4A258615;
struct INamedProperties_1_t3F542CD1610337170D2D54A3057AA073EAF53E92;
struct INamedProperties_1_t786C28150DCD0B35D9C812410152C521850FA8C7;
struct INamedProperties_1_t6A3C2764356C1988E9A7B4EE5F7C275B9725E73D;
struct INamedProperties_1_tA4F9034069B1A90C97FF0B0CC937D2113018018E;
struct INamedProperties_1_t6F9427D96BD8E5D13A1E4EDEE3A370E3B9C9BA1B;
struct INamedProperties_1_tC4FECCA22D3803045C87E4B932CB066B112B2479;
struct INamedProperties_1_t612F1FED6457D820A3F3F872A59CF2BDB5E355E7;
struct INamedProperties_1_tA3CAEC28B6D52E852B4AC9F29DB6FA088633DD6C;
struct INamedProperties_1_t8E23BC09110A6837EBD0B520578D9DF56D37FABD;
struct INamedProperties_1_t1BBCCD028EB48DC36F92974D5AD34E24F78ECB6C;
struct INamedProperties_1_t95B2F53972BC7D50C1E6ACFAAC564D0F73B8BE5F;
struct INamedProperties_1_t1F3189F89ED3C7265515E4ED6E2C08DCBEA9207D;
struct INamedProperties_1_t1F9756EFAD44E1C2EF6F3E18DCFF30FE017502E5;
struct INamedProperties_1_tB1E2FF63DD111D382796BA8AFF14B9A774D3057B;
struct INamedProperties_1_t9A998978F62C6CB1D3058B6127524B8DD5CE04F6;
struct INamedProperties_1_t31AC961854B3369CAAE54F23ECB5F54AAD1340C0;
struct INamedProperties_1_t73E1E44CDE25620E286221659D799B141B48CFCE;
struct INamedProperties_1_tA6C136C8A68302D9A0294C45B6EC44EF5D392698;
struct INamedProperties_1_tFA20CB0546901B57483692C9CFE7599E1FBA9320;
struct INamedProperties_1_tF3F853824F6EC87EF1A0C385F85475913D45A743;
struct INamedProperties_1_t0964A4032772AF11FE87786356C1C45211E160F2;
struct INamedProperties_1_t168B619313C4BA4EA2616B258217A43F65A45F98;
struct INamedProperties_1_t4F86B76330B8A0AC7EBFDCFEA05748AB457017D6;
struct INamedProperties_1_t987A31BEF1685BB1843062CF820A484F7AC99AA3;
struct INamedProperties_1_tE3D3212BDC791EA03FDB4AC4ECB21C106B25D5CB;
struct INamedProperties_1_t3FE8FA5604647543035F0A15A7DEA22B437137BE;
struct INamedProperties_1_tCC94DBBA36E55718C717C212B723985B87922AA0;
struct INamedProperties_1_t6BB696CE20AC1F4329ABE1127EF5FA09B74D29D2;
struct INamedProperties_1_t9CAD65641BCE99081F8896B5528FABEE8DE7A651;
struct INamedProperties_1_t2EECE0888610931567586B04648D6C1EC7FBC224;
struct INamedProperties_1_tE3844B09FB237E55FF01400D93E3C1DA39911532;
struct INamedProperties_1_t4A02B245C3BABA9D1314BF4DD5AD5061A23887FC;
struct INamedProperties_1_t7E458864B86699704A37970AF00BBFC51503DB24;
struct INamedProperties_1_tA84090D3F3FB19CBDA58D879F3B18AA5DE3AB6D8;
struct INamedProperties_1_t2E7C0038E40850320B0CDE3116137DC622B2A70B;
struct INamedProperties_1_t1762CAC2E72BD27B04AD4693D6537F66241A758A;
struct IObservable_1_t6A88B15915275CE92411906C989057BD5C18C20A;
struct IObservable_1_t3B5CA6CF57A9734CD1D166FB2074FE7FB725EDDC;
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
struct IPropertyBag_1_tF38E0DD26816C30F7A291A4C229273286EF81690;
struct IPropertyBag_1_t34647E6DBA2B3FBAF772A30AB58389B957EB2353;
struct IPropertyBag_1_t4503949B37B2AF7B859307C5B9FC0D205FBBB58C;
struct IPropertyBag_1_t0C3656FAD043E643AE0AF2CE556A8B0EFC08BAF0;
struct IPropertyBag_1_t12476CBFA03E553669FC0F78B8B392643D0EA98D;
struct IPropertyBag_1_tC89C7D801308BB118F51FC38D2EDF9150099CD87;
struct IPropertyBag_1_tA5F5E06CD7B6D9DA44B0C96DD751E125A2838965;
struct IPropertyBag_1_tB4F574342A3326282E305E935876E09BA8AC2A2E;
struct IPropertyBag_1_t0F569CB3E3DD679044B9F9E594B94E991D876F55;
struct IPropertyBag_1_tD0AC48FB723053E10D50C4F4ACA187049C60A52A;
struct IPropertyBag_1_tA86B0AA7564B969B39432363A3CC153860369CF8;
struct IPropertyBag_1_tF96AD753C8C0604F73BEC05D07FB8DB0E652D9D7;
struct IPropertyBag_1_tCC672A5FC4DF9FCAEDB0E95C78D8B03C0BE79D1F;
struct IPropertyBag_1_tFB0D9D329A0DD352CA6F2E401245E71D132AF6B1;
struct IPropertyBag_1_tD475E86AD532B7E07FF336E6D5F45242390B1331;
struct IPropertyBag_1_tAA5B8A65854B645C4BE0170D2629B00A15218E3E;
struct IPropertyBag_1_t474CE322BDE46B0885DE33A9810CBF959176FBE8;
struct IPropertyBag_1_tABC6AB8A0C2984D47212C161B82BB4CD34EE4B42;
struct IPropertyBag_1_t6AFC0AC74501529BFF9E097DC21249C06852B690;
struct IPropertyBag_1_tAE3DEC013C632256F0D7F5C1CBC3680AC185F979;
struct IPropertyBag_1_tC38B0E23F5A4EEEB1496FA49888AE669B1A22163;
struct IPropertyBag_1_t35C2AC27D6AF7F85B944D05BFC0298C9A7080388;
struct IPropertyBag_1_t852A24B93B53A9516797D747FE08D0DDDB2288B5;
struct IPropertyBag_1_tC4A861BBA0615CB45605B37C7604CB3950574558;
struct IPropertyBag_1_t0609AEAC1BAF0CC00E12F517D94A0BB20C869A05;
struct IPropertyBag_1_t21591A9B7F6B7F2B6226C8314B530B2C5CBEF548;
struct IPropertyBag_1_tAD71D1994E82547416831FC2DAE21F038A38CAAD;
struct IPropertyBag_1_t06FC2AE397C1A711BCF674C0438149C49A561045;
struct IPropertyBag_1_tF770C1A78A72D7B8E24F537F9409CFDB5B0C11A6;
struct IPropertyBag_1_t28707B699C3F6C7965A9AF253C21DE32BCB4148F;
struct IPropertyBag_1_t9834E39BF4BD812099CECA37DF60749AAE274FCD;
struct IPropertyBag_1_t145445023A0B2CED5FB1C2CCA065A0C2678B4CC3;
struct IPropertyBag_1_t8A3D63921BE840B9ACA3F45D9B9F6918AFD54CA5;
struct IPropertyBag_1_t4E3151D7F146BCDA0FA72786B3B30359FF54504F;
struct IPropertyBag_1_tD1F3A7DBE2F49D15806E8AC1B537F0B133DA265E;
struct IPropertyBag_1_t4F700C12974F20F57E80BF1374C40ADA92303CA3;
struct IPropertyBag_1_tB4AF5D6F5B05C75849FABA9CF0F7410F2058ADCD;
struct IPropertyBag_1_t6C3B3ECBE136DE8EB30C6E3C4C68260118B90C67;
struct IPropertyBag_1_t11B17E28AD004BEECDF730E60F377FEBBAE629D5;
struct IPropertyBag_1_t81B42929CDBDAC1B8C1775D38F8646DAF065F8F9;
struct IPropertyBag_1_tDAC9D4EA568EDC701E9AC378EF87FE080958271E;
struct IPropertyBag_1_t62EF8C2C7D11C796F3ECB8AD3461E8C3A2D87E5A;
struct IPropertyBag_1_t5EBA6E56CEB6DFD9CA30F8DA7E06E09A8211DE60;
struct IPropertyBag_1_t9CE20305E04AC1EB512CCC226C03A84714030C34;
struct IPropertyBag_1_tF3ED76A0B3B3C7C939F96D3F9D303DAD0210804D;
struct IPropertyBag_1_t87438811C2F2F5EDBD73279779C029EED554B3CB;
struct IPropertyBag_1_tBBDD5A5B3F8E9F119138331A16572F6626C67749;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct IProperty_1_tAAC6C42E64F1F1C9C014BDBA7BC3D5A724C1EE66;
struct IProperty_1_t49CEA58F187BC2188B8C7455257619386615F2D9;
struct IProperty_1_t4BDA5F59B6CF957E8D8E3802E69B767A12C532B0;
struct IProperty_1_tF20CE8FBC7B20A09C2A7E0EB9630919D71339E99;
struct IProperty_1_t5E43D0F89C8C835C74BBF564571DA984A6415335;
struct IProperty_1_tD9FE1AF3703439208728AD16A49693976E1C4BC0;
struct IProperty_1_t0CED323160A5869C2EF0D8E073FBEEDBDA2EFF28;
struct IProperty_1_tB7F6496CEFBE912425446A3DB3235CAE0654CB1D;
struct IProperty_1_t33BD2C97D37F86F94427C4DAD86A13162B485570;
struct IProperty_1_tD244114CE436FD9ED0FFA2D1D455AEDAC05FF05E;
struct IProperty_1_tA0905C4267FB6A7FD0A05C37B6A16B0F607E7169;
struct IProperty_1_t8885BD5CD7EF54503D9E4531265EFE41C32A76A7;
struct IProperty_1_tA91D958F297A9E6CAA1A37517EE12264CE046A34;
struct IProperty_1_t07316563C3064E0D46C1476430CB2E10558FE27D;
struct IProperty_1_tCFEF868BA125BBF458061067FBFEFE885B76B8DD;
struct IProperty_1_t326CF524CC80B6F64C96D78AFB3CB0A694D3B714;
struct IProperty_1_t9F627ED1E5150ABCABC70109B20AE5BAC8C78131;
struct IProperty_1_tEBB8266DC6A35BE366DEDDADAC3058C4F9B09515;
struct IProperty_1_tC8A9F7A47A6336EB9794E9A3C9FF3CDDBE47FC3F;
struct IProperty_1_t9FE05EB8AFC85DCB41CB2F5213FCF6A9D160D485;
struct IProperty_1_t5B25A2721B5E4AE6634B2B1494E725296A1D8AA6;
struct IProperty_1_t34F484178257879F595602865D833FBB36E25609;
struct IProperty_1_t3C38EDA987E18932165E4D3AAC5655C99DC314C6;
struct IProperty_1_t5FF1B889D0F2BC3603CAD8421073C8E07036D826;
struct IProperty_1_t16851B2242BE6D75845567D065579B8A82F0F766;
struct IProperty_1_t690452A259821E292DF4FED348BBFFAB0C29C46D;
struct IProperty_1_t79C1337C9F8525F749DDF1D234309C6FACEF9F83;
struct IProperty_1_tF7EF99542FB8234BAA46C88E688AA6393B3EE7FF;
struct IProperty_1_t6C7004C6DB8DFFA2A3D4654E38248B04A15D0EB1;
struct IProperty_1_tECC241D1D210C65FCAD259D0183F9D167B424FFA;
struct IProperty_1_t2481B62C7E7B4F1EBA8580B2D1AFB43BD439BD7F;
struct IProperty_1_tB2BB5F24788BF2E4BAF1D8A0228943216217A680;
struct IProperty_1_t578DDEBAA2A91F19DDB259DB85226B438091998A;
struct IProperty_1_t7DD1A0033BA45A0A00F6C5DD2595CAEF490F666C;
struct IProperty_1_t34993F32F2DDBE80D298CE14C80483415BD5A725;
struct IProperty_1_t2781E725B1462A4426C549FA5D012588E648C263;
struct IProperty_1_t12C99126ED85120DC9BDD8A1721003A0B2907D3B;
struct IProperty_1_t9322C99A9228ED1E00DCCC9712B3CAA8BAAB8398;
struct IProperty_1_t8A9879FB1F0190B5CC47F7000F0B7142216A439C;
struct IProperty_1_t0E317E01E6618E11E9F06771E5DB46F5CC25B22A;
struct IProperty_1_tA5E463FB3AF5B8F812635E7D7D8C1124890E39F8;
struct IProperty_1_t62CD11377E18F32D95E3CDAA42637012900C3DB3;
struct IProperty_1_tD5B55B2B653E1DBADDE8E494F6B9568FCCFB815A;
struct IProperty_1_tD0857FC9D3C29214DBCB766720DD32AD2E2E29D3;
struct IProperty_1_t4F0CAE821D34ED1A55A2913142EDF092E2F0996A;
struct IProperty_1_t71FC6CE3B63C7989BB59D6C8E47462A535257BC9;
struct IProperty_1_t2F93486C4F1EF31204AB9C24EB17075238B881D5;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A;
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B;
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640;
struct ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A;
struct ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442;
struct ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281;
struct ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15;
struct ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D;
struct ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2;
struct ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tFED1C27AA4B8AC9813FF4858B3ABB1B3F74558EF;
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2;
struct Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087;
struct Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC;
struct Property_2_tB2B25D50A07137613571C599F2D927783128F4B2;
struct Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1;
struct Property_2_t8803DA217446897A3DBF392B50C90530471C6822;
struct Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A;
struct Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151;
struct Property_2_tF274BD13981F14C9234EED2454BA5879F339129A;
struct Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5;
struct Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B;
struct Property_2_tA37B381C421869CA10862B372913EA34498BC042;
struct SelectObservable_2_t18DB3BD84546E800C7EE666A12BCD59E0D98A94C;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct WhereObservable_1_tB008380494D0278B3A31B13E77A835ABEB13B597;
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
struct InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
struct OnScreenDeviceInfoU5BU5D_t0C70881971941DEFDD18CFFD3E4133B5CA0B7F30;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889;
struct IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418;
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
typedef Il2CppFullySharedGenericStruct Il2CppFullySharedGenericStruct;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0166BFBEA755AEC68D894E2718E0F43AC621B48E;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral19710C29C28F677ED5E80B5C8FFB9B9F5CD6AB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F;
IL2CPP_EXTERN_C String_t* _stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D17034B21712EB7B5957FBBF819632D04221839;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628;
IL2CPP_EXTERN_C String_t* _stringLiteral8F08B108AE90A47E2C4B3A0DC16321A36C9AFB54;
IL2CPP_EXTERN_C String_t* _stringLiteralC9DDDC1BB86D19164517493AC7ED9674192AFD37;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEF83955BF61125FC832C506DE4DB5985B784A2C0;
IL2CPP_EXTERN_C String_t* _stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF  : public RuntimeObject
{
	RuntimeObject* ___subscription;
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};
struct EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};
struct ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849  : public RuntimeObject
{
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___m_OnNext;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnCompleted;
};
struct Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tB2B25D50A07137613571C599F2D927783128F4B2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t8803DA217446897A3DBF392B50C90530471C6822  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tF274BD13981F14C9234EED2454BA5879F339129A  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tA37B381C421869CA10862B372913EA34498BC042  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* ___m_Filter;
};
struct SelectObservable_2_t18DB3BD84546E800C7EE666A12BCD59E0D98A94C  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_tD6A94C952B3804092A855172C7AB943068CC0AF1* ___m_Filter;
};
struct SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___m_Filter;
};
struct TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	int32_t ___m_Count;
};
struct TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4  : public RuntimeObject
{
};
struct TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9  : public RuntimeObject
{
};
struct TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28  : public RuntimeObject
{
};
struct TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE  : public RuntimeObject
{
};
struct WhereObservable_1_tB008380494D0278B3A31B13E77A835ABEB13B597  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___m_Predicate;
};
struct WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___m_Predicate;
};
struct ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device;
	Type_t* ___m_DeviceType;
};
struct InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NativeSliceExtensions_tA2B0303180122826FD5887061B8DBA5F342A726B  : public RuntimeObject
{
};
struct NativeSliceUnsafeUtility_tA7CBE88BA4246367450DB167A878F2FA408E10CD  : public RuntimeObject
{
};
struct NativeSortExtension_t69298E80751CF0D0DB847C79277B6E0A2C92A4F2  : public RuntimeObject
{
};
struct NoAllocHelpers_t5108A9272D2BFBFF50B14D2A1B5330A629180360  : public RuntimeObject
{
};
struct Observable_t74D8C01B38DEE3309AAA0204C87021D320DBEF47  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	int32_t ___length;
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue;
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues;
};
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	int32_t ___length;
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue;
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues;
};
struct InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 
{
	int32_t ___length;
	InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* ___firstValue;
	InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9* ___additionalValues;
};
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData;
};
struct NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA89467F62CCE518E9D8EF59DE4A3660B39C573D5 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t896C643D92AC9B70D47A50D65CB166F74009189F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tC7AC7DD3A727BCA7CF8B7EBDD6DE68FB33E8D9D2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t14A9CE6361CD2BA1425D4FF7F9C320B32E3F8B63 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
typedef Il2CppFullySharedGenericStruct SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A;
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE 
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_pinvoke
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_com
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	String_t* ___m_InterfaceName;
	String_t* ___m_DeviceClass;
	String_t* ___m_Manufacturer;
	String_t* ___m_Product;
	String_t* ___m_Serial;
	String_t* ___m_Version;
	String_t* ___m_Capabilities;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName;
	char* ___m_DeviceClass;
	char* ___m_Manufacturer;
	char* ___m_Product;
	char* ___m_Serial;
	char* ___m_Version;
	char* ___m_Capabilities;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName;
	Il2CppChar* ___m_DeviceClass;
	Il2CppChar* ___m_Manufacturer;
	Il2CppChar* ___m_Product;
	Il2CppChar* ___m_Serial;
	Il2CppChar* ___m_Version;
	Il2CppChar* ___m_Capabilities;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD 
{
	PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD_marshaled_pinvoke
{
	PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD_marshaled_com
{
	PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 
{
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___Data;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___Comp;
};
typedef Il2CppFullySharedGenericStruct SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A;
struct SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD 
{
	Il2CppFullySharedGenericStruct* ___Data;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___Comp;
	int32_t ___Length;
};
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 
{
	Il2CppFullySharedGenericStruct* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FindObjectsInactive_t10C7BE036CAD0178142374F945283DA50D02B87A 
{
	int32_t ___value__;
};
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	uint32_t ___m_ByteOffset;
	uint32_t ___U3CbitOffsetU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer;
	int32_t ___Items;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct ControlFlags_t9C297F208DE19CEB00A0560F7FDE59F6A2004132 
{
	int32_t ___value__;
};
struct DeviceFlags_tF02F85DA24FF16879A67B540FCA560EC955CE728 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC 
{
	ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_pinvoke
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_com
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_pinvoke
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_com
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___m_Value;
};
struct StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
};
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range;
	int32_t ___BytesPerItem;
	int32_t ___AllocatedItems;
	uint8_t ___Log2Alignment;
	uint8_t ___Padding0;
	uint16_t ___Padding1;
	uint32_t ___Padding2;
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Func_2_tD6A94C952B3804092A855172C7AB943068CC0AF1  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	String_t* ___m_Path;
	String_t* ___m_DisplayName;
	String_t* ___m_DisplayNameFromLayout;
	String_t* ___m_ShortDisplayName;
	String_t* ___m_ShortDisplayNameFromLayout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent;
	int32_t ___m_UsageCount;
	int32_t ___m_UsageStartIndex;
	int32_t ___m_AliasCount;
	int32_t ___m_AliasStartIndex;
	int32_t ___m_ChildCount;
	int32_t ___m_ChildStartIndex;
	int32_t ___m_ControlFlags;
	bool ___m_CachedValueIsStale;
	bool ___m_UnprocessedCachedValueIsStale;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 
{
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC 
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_marshaled_pinvoke
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_marshaled_com
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct InlinedArray_1_tC8A32AF03BC5EA969AD4315DC5E67BBAF2765992 
{
	int32_t ___length;
	OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC ___firstValue;
	OnScreenDeviceInfoU5BU5D_t0C70881971941DEFDD18CFFD3E4133B5CA0B7F30* ___additionalValues;
};
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack;
	float ___m_CachedValue;
	float ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CachedValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E {};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	int32_t ___m_DeviceFlags;
	int32_t ___m_DeviceId;
	int32_t ___m_ParticipantId;
	int32_t ___m_DeviceIndex;
	uint32_t ___m_CurrentProcessedEventBytesOnUpdate;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description;
	double ___m_LastUpdateTimeInternal;
	uint32_t ___m_CurrentUpdateStepCount;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___m_UpdatedButtons;
	List_1_tFED1C27AA4B8AC9813FF4858B3ABB1B3F74558EF* ___m_ButtonControlsCheckingPressState;
	bool ___m_UseCachePathForButtonPresses;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap;
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 
{
	UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 ___m_Stream;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 
{
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 
{
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Control;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___m_NextControlOnDevice;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_InputEventPtr;
};
struct ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 
{
	NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 ___Container;
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* ___List;
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer;
};
struct EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852_StaticFields
{
	EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8_StaticFields
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___s_emptyArray;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_StaticFields
{
	RuntimeObject* ___s_Instance;
	double ___s_CurrentTimeOffsetToRealtimeSinceStartup;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418_StaticFields
{
	InlinedArray_1_tC8A32AF03BC5EA969AD4315DC5E67BBAF2765992 ___s_OnScreenDevices;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mB3722DE92029235F31FBD5EA0C922C94EC1EB1A6_gshared (NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9* __this, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D_gshared (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0* __this, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD_gshared (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9* __this, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_gshared (ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m7F7EEAC0A5F9619B9A028BE880C504844C338E8D_gshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject** UnsafeUtility_As_TisRuntimeObject_TisRuntimeObject_m427D45188F037E6A44060E2DC34BCD470560D8C9_gshared_inline (RuntimeObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F_gshared (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectObservable_2__ctor_mE5FD6403A8AAFAB05CFFD25EC5B6683938116434_gshared (SelectObservable_2_t18DB3BD84546E800C7EE666A12BCD59E0D98A94C* __this, RuntimeObject* ___0_source, Func_2_tD6A94C952B3804092A855172C7AB943068CC0AF1* ___1_filter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereObservable_1__ctor_m1C21CE1BEA9304A64B9BD1475123600EB595202B_gshared (WhereObservable_1_tB008380494D0278B3A31B13E77A835ABEB13B597* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlExtensions_WriteValueIntoEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6846DBDEE718463B2788993E941703D5487D6AB3_gshared (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___0_control, float ___1_value, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_eventPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlExtensions_WriteValueIntoEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB4F47D8692DF6A43F031850C600040CCAFBAA30C_gshared (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___0_control, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_eventPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E_gshared (int32_t* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441_gshared (RuntimeObject* ___0_visitor, int32_t* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01_gshared (RuntimeObject** ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39_gshared (RuntimeObject* ___0_visitor, RuntimeObject** ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m639CE2C899C469A55ECC66D6793B590C5EBE3E42_gshared (float* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7E97E817C5D3F92B56F729FE44CBC11EFEA02EE_gshared (RuntimeObject* ___0_visitor, float* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m7A9EA143096E3C18C2DD2EDEF28A519CA4A73802_gshared (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m991F23402D966D410BBC89F0A2AD615D3CEC81D6_gshared (RuntimeObject* ___0_visitor, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* EqualityComparer_1_CreateComparer_mE5BC74FD18313E1237342B0626EB109CDF69CE26_gshared (const RuntimeMethod* method) ;

inline void NativeSlice_1__ctor_mB3722DE92029235F31FBD5EA0C922C94EC1EB1A6 (NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9* __this, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9*, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mB3722DE92029235F31FBD5EA0C922C94EC1EB1A6_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0* __this, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0*, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9* __this, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9*, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeStream_AllocateBlock_mAD29C962FDE6B17A135737E09693B6FAB6E974AF (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* ___0_stream, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF (ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_gshared)(___0_jobData, ___1_dependsOn, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m7F7EEAC0A5F9619B9A028BE880C504844C338E8D (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m7F7EEAC0A5F9619B9A028BE880C504844C338E8D_gshared)(__this, ___0_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9_gshared)(__this, method);
}
inline void List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline)(__this, method);
}
inline ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** UnsafeUtility_As_TisList_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mCF5F8927BE5A0D9A4F9E7858A43AE6987DA7C753_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317**, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_TisRuntimeObject_m427D45188F037E6A44060E2DC34BCD470560D8C9_gshared_inline)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* UnsafeUtility_As_TisListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442_m32094283939C75A047F5F7EC76EE93ACA2AC0F66 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method)
{
	return ((  RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* (*) (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, const RuntimeMethod*))List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*, const RuntimeMethod*))List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F (Type_t* ___0_type, int32_t ___1_findObjectsInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26 (RuntimeObject* ___0_arg, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312 (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94 (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared)(___0_original, ___1_parent, ___2_worldPositionStays, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m99F2A72EF6BFE09E6CF4FCF6207C5BCFAD1D76CF (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_instantiateInWorldSpace, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m99C9917ED3F7B2B9C569B55F52411620B52DA19D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForDeviceEventObservable__ctor_mB1C31FA7E513DB5D377B8F95AB66DBA80A0B2EFC (ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889* __this, RuntimeObject* ___0_source, Type_t* ___1_deviceType, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___2_device, const RuntimeMethod* method) ;
inline void SelectObservable_2__ctor_mE5FD6403A8AAFAB05CFFD25EC5B6683938116434 (SelectObservable_2_t18DB3BD84546E800C7EE666A12BCD59E0D98A94C* __this, RuntimeObject* ___0_source, Func_2_tD6A94C952B3804092A855172C7AB943068CC0AF1* ___1_filter, const RuntimeMethod* method)
{
	((  void (*) (SelectObservable_2_t18DB3BD84546E800C7EE666A12BCD59E0D98A94C*, RuntimeObject*, Func_2_tD6A94C952B3804092A855172C7AB943068CC0AF1*, const RuntimeMethod*))SelectObservable_2__ctor_mE5FD6403A8AAFAB05CFFD25EC5B6683938116434_gshared)(__this, ___0_source, ___1_filter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void WhereObservable_1__ctor_m1C21CE1BEA9304A64B9BD1475123600EB595202B (WhereObservable_1_tB008380494D0278B3A31B13E77A835ABEB13B597* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereObservable_1_tB008380494D0278B3A31B13E77A835ABEB13B597*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereObservable_1__ctor_m1C21CE1BEA9304A64B9BD1475123600EB595202B_gshared)(__this, ___0_source, ___1_predicate, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OnScreenControl_get_controlPath_m70FBF27F59E8953B7DE270BA8C426970E7D118D1 (OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEventPtr_set_internalTime_mBD0B465C6882DD13F5FA3AAE487C0FA8A68E3810 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, double ___0_value, const RuntimeMethod* method) ;
inline void InputControlExtensions_WriteValueIntoEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6846DBDEE718463B2788993E941703D5487D6AB3 (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___0_control, float ___1_value, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_eventPtr, const RuntimeMethod* method)
{
	((  void (*) (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*, float, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*))InputControlExtensions_WriteValueIntoEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6846DBDEE718463B2788993E941703D5487D6AB3_gshared)(___0_control, ___1_value, ___2_eventPtr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueEvent_mC30D182ADDD60BFC2AF10D24CEE2481D0EB77996 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_eventPtr, const RuntimeMethod* method) ;
inline void InputControlExtensions_WriteValueIntoEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB4F47D8692DF6A43F031850C600040CCAFBAA30C (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___0_control, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_eventPtr, const RuntimeMethod* method)
{
	((  void (*) (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*))InputControlExtensions_WriteValueIntoEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB4F47D8692DF6A43F031850C600040CCAFBAA30C_gshared)(___0_control, ___1_value, ___2_eventPtr, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D (AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, const RuntimeMethod* method) ;
inline bool PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E (int32_t* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline)(method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF (PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD* __this, PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___0_visitor, RuntimeObject* ___1_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922 (PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD* __this, const RuntimeMethod* method) ;
inline void PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441 (RuntimeObject* ___0_visitor, int32_t* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
inline bool PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01 (RuntimeObject** ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject**, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39 (RuntimeObject* ___0_visitor, RuntimeObject** ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject**, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline bool PropertyBag_TryGetPropertyBagForValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m639CE2C899C469A55ECC66D6793B590C5EBE3E42 (float* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (float*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m639CE2C899C469A55ECC66D6793B590C5EBE3E42_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7E97E817C5D3F92B56F729FE44CBC11EFEA02EE (RuntimeObject* ___0_visitor, float* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, float*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7E97E817C5D3F92B56F729FE44CBC11EFEA02EE_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline bool PropertyBag_TryGetPropertyBagForValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m7A9EA143096E3C18C2DD2EDEF28A519CA4A73802 (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m7A9EA143096E3C18C2DD2EDEF28A519CA4A73802_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline)(method);
}
inline EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m991F23402D966D410BBC89F0A2AD615D3CEC81D6 (RuntimeObject* ___0_visitor, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m991F23402D966D410BBC89F0A2AD615D3CEC81D6_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared)(method);
}
inline EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* EqualityComparer_1_CreateComparer_mE5BC74FD18313E1237342B0626EB109CDF69CE26 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE5BC74FD18313E1237342B0626EB109CDF69CE26_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 NativeSliceExtensions_Slice_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mBE04543E2671A62D2C549826282EE4135B906C36_gshared (NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mB3722DE92029235F31FBD5EA0C922C94EC1EB1A6((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 NativeSliceExtensions_Slice_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m877677D420E575DCBE695DCB60B1AF3FE9C1E81F_gshared (NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 NativeSliceExtensions_Slice_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_mA902AF6CBD285F1A7F631E533330F582E702AEE0_gshared (NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mFE6F19196458580AE39F48B36CA1E4FB3E242032_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m209A5CA848B5D71860FF727A488EBB61699F029D_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m633DAEBC11F916CAC6408C5B1B105D222E015213_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF7B7FA019164962E7BF9FDB47A4AB92199BF9DDA_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m997DBC83795B518830731B888AD2A97C3237115D_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m2AB234C1F61762C9891F9CA0954C954BF50AA8A8_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m62F21E65FB80AF955E4998488B792C8D6D0F15AE_gshared (NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9A2B4BB7177667D1A9E3AC345815C6478C6B441_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m6BD8C7B6687079F4D938B1D123852D1B1DB738D2_gshared (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m1D5DB0F0A202A5CBC424E412F2371F118D6716B9_gshared (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m7130837ADE7AB97C8D108E52DA01A1BDB7E38C9F_gshared (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m96BF1DA7D07BBC9CBB70382DC0B3582F3E927D38_gshared (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m669D65026ECD6F1A5A38A88C1FAD087034253418_gshared (NativeSlice_1_tA89467F62CCE518E9D8EF59DE4A3660B39C573D5 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA89467F62CCE518E9D8EF59DE4A3660B39C573D5 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m0363D0A70C0868B740951975373BBE4502FCA03C_gshared (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF44527197CB7BA7ACF50A07F98F92E94C04770E7_gshared (NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_mA28ABDFFEBBBE1B3463D9D30DD91C5FD554E2D6E_gshared (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2A54AC8EC29C95F1B6C54D461621EC5AED00C842_gshared (NativeSlice_1_t896C643D92AC9B70D47A50D65CB166F74009189F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t896C643D92AC9B70D47A50D65CB166F74009189F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m9D4BF5EB68F80854A5D189827BA29954C5D8A79F_gshared (NativeSlice_1_tC7AC7DD3A727BCA7CF8B7EBDD6DE68FB33E8D9D2 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tC7AC7DD3A727BCA7CF8B7EBDD6DE68FB33E8D9D2 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6587359875DD85AF7B9BD3317FADF46E4DEA3918_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m255EF169635E8E992D7CCBEE82993ADF03EFEB81_gshared (NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m74258394834D8ACF24F195559B5CDEBE8E12FAEA_gshared (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m56EEC99856FD511773B66A80826B633FD8BF9FEB_gshared (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m46659EC4AFC5B6616D666FC149A4290A40382A8C_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m80388B3784FBE64078CE4E604792B4A98F0DBCE2_gshared (NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m05ACEB0EFCB44495F16F8344F95B7E0279BBAFCD_gshared (NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mC5DC4B3A077F4E0B8F85609318B0BADC9FF47D46_gshared (NativeSlice_1_t14A9CE6361CD2BA1425D4FF7F9C320B32E3F8B63 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t14A9CE6361CD2BA1425D4FF7F9C320B32E3F8B63 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_m4AD2F7823138BA69ACE113B59840711708C620C3_gshared (NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_mA02C024D486D564B699E82DF81B47C556F78B96C_gshared (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m09A026CC0643E2A0214AFF9A3C5DDBF9CBD63024_gshared (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m363AC6C6F7FE24031C819DB8047CDC74E077B220_gshared (NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0B676DC51FACE97ED8BDBE80FDEE1D024D852A62_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_mF3128B9DF1FB9E59D3C89E07478F86936C03E2B5_gshared (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m2D36E1680EC31E78C2BC8BEC532706B4BA4BAC0C_gshared (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mD9AC766A8FD8ADED06FA02A938EBEC9A12432838_gshared (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC9D932B1F59928C2C2D4CAFDBEB2FD0BDC46241A_gshared (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m200FC821837E1FB5E8B84E4449AEE41953537C91_gshared (NativeSlice_1_tA89467F62CCE518E9D8EF59DE4A3660B39C573D5 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA89467F62CCE518E9D8EF59DE4A3660B39C573D5 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m8BE452E031BAA5D0737B2D915B3ED0932A4C3492_gshared (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mEC1AFAC960FD48CA2A336183B83469047B5B851D_gshared (NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m3C73B4A268E6EF19731588FC96256341D1482190_gshared (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mB2D4E96439C3307C6E4AF42DC7FE8A4B44487921_gshared (NativeSlice_1_t896C643D92AC9B70D47A50D65CB166F74009189F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t896C643D92AC9B70D47A50D65CB166F74009189F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m46EDE79316E525B07A8704AEE91089A5DDEF9D97_gshared (NativeSlice_1_tC7AC7DD3A727BCA7CF8B7EBDD6DE68FB33E8D9D2 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tC7AC7DD3A727BCA7CF8B7EBDD6DE68FB33E8D9D2 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m25D2FEAD1520E2DEEBA11E8A6BF32EFCEC42D9EA_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5294D967B5B293CF1E25BE01849C5C55CEDD0C7E_gshared (NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB3AAF18DA01A2871ABC3A6C17DE5051ABF758556_gshared (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C21A5534F31A98810D38191D4F5511CDF6F7FCD_gshared (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mBA68ADCEE03FE9686B3E1093209D25043E18946D_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mC25AD4D19FDBB9ECF75908D5032323A2F10CA478_gshared (NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m2D706533C8AA0A14AB3885C131452DDA2A7FE175_gshared (NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m9613EACAEFEF791BCEC1B9A0628F48CA5889792F_gshared (NativeSlice_1_t14A9CE6361CD2BA1425D4FF7F9C320B32E3F8B63 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t14A9CE6361CD2BA1425D4FF7F9C320B32E3F8B63 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mEDE7DCEEFBA8B9C848B3E1E717D985180F4DF465_gshared (NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m8FB8E5DCE79D10E8CBF71676376F40449AD3EB5F_gshared (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m8AFD952643487BBF08BE2CB7CE45BCF3C9652815_gshared (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m3A6F8C968B38411A4351D3E06251E4A6830BDE23_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mF37FF893F4B9859C00A38E0D8AABABE18D409F58_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 L_0;
		L_0 = ((  ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mEED7C960744565E22ABDCF47B04BB4F1D3D4D3AF_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_slice;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mE00CC35601503008B6319F4E8011CE96782269AE_gshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_array, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 L_0 = ___0_array;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m4BA2B56A0EB03E04AECC09FFCF0B4320A4788AD6_gshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_list, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_0 = ___0_list;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m0B57431881D9F67C3BDA5D83629DB00DCCDF1BC8_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, ___2_value, SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		int32_t L_4;
		L_4 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m18BDEFA9ACBD2B0621A230F42CA1190C13E40A59_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_3, ___1_value, SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___2_comp : &___2_comp), SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEB3008F32EC83831765762622BBB11C6B7BC1D7C_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
	{
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 L_0;
		L_0 = ((  ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___2_comp : &___2_comp), SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mD435A28E9461F36F9490F8E0CF60763FE5B5EED3_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_slice;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_slice), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_3, ___1_value, SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___2_comp : &___2_comp), SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m67CE23383C6721FDEF03FE37FD31C02F398B4C2B_gshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_array, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
	{
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 L_0 = ___0_array;
		void* L_1;
		L_1 = ((  void* (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_3, ___1_value, SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___2_comp : &___2_comp), SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE55072B5E1ACDB3644FBC3A1E093674E369CBFFB_gshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_list, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_0 = ___0_list;
		Il2CppFullySharedGenericStruct* L_1 = L_0.___Ptr;
		int32_t L_2;
		L_2 = ((  int32_t (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_3, ___1_value, SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___2_comp : &___2_comp), SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_1, L_2, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	memset(V_3, 0, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		goto IL_0045;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		Il2CppFullySharedGenericStruct* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		uint32_t L_5 = SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D;
		il2cpp_codegen_memcpy(L_6, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))), SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(V_3, L_6, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(L_7, ___2_value, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_9, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_comp : &___3_comp), L_7, L_8);
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0034:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0041:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)(L_16>>1));
	}

IL_0045:
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_18 = V_0;
		return ((~L_18));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_CheckComparer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m85F09B28E4C56532C553F26702140AD780B0C83F_gshared (Il2CppFullySharedGenericStruct* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_16 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_29 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_38 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_13 = L_2;
	const Il2CppFullySharedGenericStruct L_18 = L_2;
	const Il2CppFullySharedGenericStruct L_22 = L_2;
	const Il2CppFullySharedGenericStruct L_27 = L_2;
	const Il2CppFullySharedGenericStruct L_32 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_14 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = L_3;
	const Il2CppFullySharedGenericStruct L_23 = L_3;
	const Il2CppFullySharedGenericStruct L_28 = L_3;
	const Il2CppFullySharedGenericStruct L_33 = L_3;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_15 = L_4;
	const Il2CppFullySharedGenericStruct L_36 = L_4;
	const Il2CppFullySharedGenericStruct L_37 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	memset(V_0, 0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	memset(V_3, 0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1 = ___0_array;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		int32_t L_6;
		L_6 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_5, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), L_3, L_4);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19710C29C28F677ED5E80B5C8FFB9B9F5CD6AB3A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_002a:
	{
		V_1 = 1;
		int32_t L_8 = ___1_length;
		int32_t L_9;
		L_9 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(L_8, 8, NULL);
		V_2 = L_9;
		goto IL_00d3;
	}

IL_0039:
	{
		Il2CppFullySharedGenericStruct* L_10 = ___0_array;
		int32_t L_11 = V_1;
		uint32_t L_12 = SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619;
		il2cpp_codegen_memcpy(L_13, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(V_3, L_13, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_15, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		int32_t L_17;
		L_17 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_16, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), L_14, L_15);
		if (L_17)
		{
			goto IL_006c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_18, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_19, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		int32_t L_21;
		L_21 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_20, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), L_18, L_19);
		if (!L_21)
		{
			goto IL_00cf;
		}
	}

IL_006c:
	{
		il2cpp_codegen_memcpy(L_22, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_23, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		int32_t L_25;
		L_25 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_24, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), L_22, L_23);
		if (L_25)
		{
			goto IL_0088;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_26 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0166BFBEA755AEC68D894E2718E0F43AC621B48E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0088:
	{
		il2cpp_codegen_memcpy(L_27, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_28, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		int32_t L_30;
		L_30 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_29, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), L_27, L_28);
		if (L_30)
		{
			goto IL_00a4;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_31 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F08B108AE90A47E2C4B3A0DC16321A36C9AFB54)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, method);
	}

IL_00a4:
	{
		il2cpp_codegen_memcpy(L_32, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_33, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		int32_t L_35;
		L_35 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_34, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), L_32, L_33);
		il2cpp_codegen_memcpy(L_36, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_37, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		int32_t L_39;
		L_39 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_38, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), L_36, L_37);
		if ((!(((uint32_t)L_35) == ((uint32_t)L_39))))
		{
			goto IL_00da;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_40 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF83955BF61125FC832C506DE4DB5985B784A2C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
	}

IL_00cf:
	{
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00d3:
	{
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0039;
		}
	}

IL_00da:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_CheckStrideMatchesSize_TisIl2CppFullySharedGenericStruct_mA73CB99208E9AE13EAB0F7E1854579E56B98B6E1_gshared (int32_t ___0_stride, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_stride;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9DDDC1BB86D19164517493AC7ED9674192AFD37)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
	const Il2CppFullySharedGenericAny L_18 = L_7;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_7: *(void**)L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_18: *(void**)L_18));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8_gshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
	const Il2CppFullySharedGenericAny L_22 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___2_hi;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t* L_2 = ___1_lo;
		int32_t L_3 = *((int32_t*)L_2);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_1, L_3)), 1));
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(L_4/2));
		goto IL_001c;
	}

IL_000e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		int32_t* L_8 = ___1_lo;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_9: *(void**)L_9));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_001c:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_0042;
	}

IL_0024:
	{
		void* L_13 = ___0_array;
		int32_t* L_14 = ___1_lo;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t* L_16 = ___1_lo;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18 = V_2;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_13, L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_17, L_18)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_19 = ___0_array;
		int32_t L_20 = V_2;
		int32_t* L_21 = ___1_lo;
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_19, 1, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_22: *(void**)L_22));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0042:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756_gshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_21 = L_3;
	const Il2CppFullySharedGenericStruct L_31 = L_3;
	const Il2CppFullySharedGenericStruct L_38 = L_3;
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_22 = L_14;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	memset(V_0, 0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	int32_t V_1 = 0;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		goto IL_0073;
	}

IL_000e:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_003e;
		}
	}
	{
		void* L_7 = ___0_array;
		int32_t L_8 = ___3_lo;
		int32_t L_9 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1)), (Il2CppFullySharedGenericStruct*)L_10);
		void* L_11 = ___0_array;
		int32_t L_12 = ___3_lo;
		int32_t L_13 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (Il2CppFullySharedGenericStruct*)L_14);
		int32_t L_16;
		L_16 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_15, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), L_10, L_14);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_003e:
	{
		void* L_18 = ___0_array;
		int32_t L_19 = ___3_lo;
		int32_t L_20 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_18, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_19, L_20)), 1)), (Il2CppFullySharedGenericStruct*)L_21);
		il2cpp_codegen_memcpy(L_22, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		int32_t L_24;
		L_24 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_23, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), L_21, L_22);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), (Il2CppFullySharedGenericStruct*)L_31);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31);
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_0073:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_000e;
		}
	}

IL_0079:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		il2cpp_codegen_memcpy(L_38, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921_gshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t* ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_27 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	const Il2CppFullySharedGenericStruct L_12 = L_4;
	const Il2CppFullySharedGenericStruct L_25 = L_4;
	const Il2CppFullySharedGenericStruct L_37 = L_4;
	const Il2CppFullySharedGenericStruct L_45 = L_4;
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	const Il2CppFullySharedGenericStruct L_26 = L_17;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	memset(V_0, 0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	int32_t V_1 = 0;
	{
		void* L_0 = ___0_array;
		int32_t* L_1 = ___3_lo;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3 = ___1_i;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1)), (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		goto IL_0079;
	}

IL_000f:
	{
		int32_t L_5 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_5));
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_n;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0041;
		}
	}
	{
		void* L_8 = ___0_array;
		int32_t* L_9 = ___3_lo;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_10, L_11)), 1)), (Il2CppFullySharedGenericStruct*)L_12);
		void* L_13 = ___0_array;
		int32_t* L_14 = ___3_lo;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_13, ((int32_t)il2cpp_codegen_add(L_15, L_16)), (Il2CppFullySharedGenericStruct*)L_17);
		int32_t L_19;
		L_19 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_18, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), L_12, L_17);
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0041:
	{
		void* L_21 = ___0_array;
		int32_t* L_22 = ___3_lo;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_21, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_23, L_24)), 1)), (Il2CppFullySharedGenericStruct*)L_25);
		il2cpp_codegen_memcpy(L_26, V_0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		int32_t L_28;
		L_28 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_27, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), L_25, L_26);
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		void* L_29 = ___0_array;
		int32_t* L_30 = ___3_lo;
		int32_t L_31 = *((int32_t*)L_30);
		int32_t L_32 = ___1_i;
		void* L_33 = ___0_array;
		int32_t* L_34 = ___3_lo;
		int32_t L_35 = *((int32_t*)L_34);
		int32_t L_36 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_33, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1)), (Il2CppFullySharedGenericStruct*)L_37);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_29, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_31, L_32)), 1)), L_37);
		int32_t L_38 = V_1;
		___1_i = L_38;
	}

IL_0079:
	{
		int32_t L_39 = ___1_i;
		int32_t L_40 = ___2_n;
		if ((((int32_t)L_39) <= ((int32_t)((int32_t)(L_40/2)))))
		{
			goto IL_000f;
		}
	}

IL_007f:
	{
		void* L_41 = ___0_array;
		int32_t* L_42 = ___3_lo;
		int32_t L_43 = *((int32_t*)L_42);
		int32_t L_44 = ___1_i;
		il2cpp_codegen_memcpy(L_45, V_0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_41, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1)), L_45);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericStruct L_9 = L_4;
	const Il2CppFullySharedGenericStruct L_13 = L_4;
	const Il2CppFullySharedGenericStruct L_21 = L_4;
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	memset(V_2, 0, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0050;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		void* L_14 = ___0_array;
		int32_t L_15 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_14, L_15, (Il2CppFullySharedGenericStruct*)L_16);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_17, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), L_13, L_16);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_0042:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		il2cpp_codegen_memcpy(L_21, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0050:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471_gshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	const Il2CppFullySharedGenericStruct L_10 = L_5;
	const Il2CppFullySharedGenericStruct L_15 = L_5;
	const Il2CppFullySharedGenericStruct L_23 = L_5;
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	memset(V_2, 0, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	{
		int32_t* L_0 = ___1_lo;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		goto IL_0052;
	}

IL_0005:
	{
		int32_t L_2 = V_0;
		V_1 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), (Il2CppFullySharedGenericStruct*)L_5);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		goto IL_0027;
	}

IL_0013:
	{
		void* L_6 = ___0_array;
		int32_t L_7 = V_1;
		void* L_8 = ___0_array;
		int32_t L_9 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0027:
	{
		int32_t L_12 = V_1;
		int32_t* L_13 = ___1_lo;
		int32_t L_14 = *((int32_t*)L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_memcpy(L_15, V_2, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		void* L_16 = ___0_array;
		int32_t L_17 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_16, L_17, (Il2CppFullySharedGenericStruct*)L_18);
		int32_t L_20;
		L_20 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_19, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), L_15, L_18);
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}

IL_0044:
	{
		void* L_21 = ___0_array;
		int32_t L_22 = V_1;
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_21, ((int32_t)il2cpp_codegen_add(L_22, 1)), L_23);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0052:
	{
		int32_t L_25 = V_0;
		int32_t* L_26 = ___2_hi;
		int32_t L_27 = *((int32_t*)L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_gshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_4: *(void**)L_4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_gshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		void* L_0 = ___0_array;
		V_0 = 0;
		int32_t L_1 = ___1_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
		InvokerActionInvoker5< void*, int32_t*, int32_t*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, (&V_0), (&V_1), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_4: *(void**)L_4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2_gshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2__hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_18 = L_12;
	const Il2CppFullySharedGenericAny L_30 = L_12;
	const Il2CppFullySharedGenericAny L_34 = L_12;
	const Il2CppFullySharedGenericAny L_38 = L_12;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_43 = L_23;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = ___2__hi;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		goto IL_0093;
	}

IL_0008:
	{
		int32_t L_2 = V_0;
		int32_t* L_3 = ___1_lo;
		int32_t L_4 = *((int32_t*)L_3);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, L_4)), 1));
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)16))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		void* L_8 = ___0_array;
		int32_t* L_9 = ___1_lo;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = V_0;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_8, L_10, L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_12: *(void**)L_12));
		return;
	}

IL_0029:
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_0052;
		}
	}
	{
		void* L_14 = ___0_array;
		int32_t* L_15 = ___1_lo;
		int32_t L_16 = *((int32_t*)L_15);
		int32_t L_17 = V_0;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_14, L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_18: *(void**)L_18));
		void* L_19 = ___0_array;
		int32_t* L_20 = ___1_lo;
		int32_t L_21 = *((int32_t*)L_20);
		int32_t L_22 = V_0;
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_19, L_21, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_23: *(void**)L_23));
		void* L_24 = ___0_array;
		int32_t L_25 = V_0;
		int32_t L_26 = V_0;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_27: *(void**)L_27));
		return;
	}

IL_0052:
	{
		void* L_28 = ___0_array;
		int32_t* L_29 = ___1_lo;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_28, L_29, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_30: *(void**)L_30));
		return;
	}

IL_005e:
	{
		int32_t L_31 = ___3_depth;
		if (L_31)
		{
			goto IL_006d;
		}
	}
	{
		void* L_32 = ___0_array;
		int32_t* L_33 = ___1_lo;
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_32, L_33, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_34: *(void**)L_34));
		return;
	}

IL_006d:
	{
		int32_t L_35 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		void* L_36 = ___0_array;
		int32_t* L_37 = ___1_lo;
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		int32_t L_39;
		L_39 = InvokerFuncInvoker4< int32_t, void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_36, L_37, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_38: *(void**)L_38));
		V_2 = L_39;
		void* L_40 = ___0_array;
		int32_t L_41 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = ___3_depth;
		il2cpp_codegen_memcpy(L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker5< void*, int32_t*, int32_t*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_40, (&V_3), (&V_0), L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_43: *(void**)L_43));
		int32_t L_44 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
	}

IL_0093:
	{
		int32_t L_45 = V_0;
		int32_t* L_46 = ___1_lo;
		int32_t L_47 = *((int32_t*)L_46);
		if ((((int32_t)L_45) > ((int32_t)L_47)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_13 = L_8;
	const Il2CppFullySharedGenericAny L_25 = L_8;
	const Il2CppFullySharedGenericAny L_30 = L_8;
	const Il2CppFullySharedGenericAny L_35 = L_8;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_41 = L_17;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_8: *(void**)L_8));
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_13: *(void**)L_13));
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_14, L_15, L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_17: *(void**)L_17));
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_21: *(void**)L_21));
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_22, L_23, L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_25: *(void**)L_25));
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_27, L_28, L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_30: *(void**)L_30));
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		int32_t L_36;
		L_36 = InvokerFuncInvoker4< int32_t, void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_32, L_33, L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_35: *(void**)L_35));
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_41: *(void**)L_41));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_30 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_39 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_25 = L_17;
	const Il2CppFullySharedGenericStruct L_34 = L_17;
	const Il2CppFullySharedGenericStruct L_29 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_38 = L_29;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	memset(V_1, 0, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_6: *(void**)L_6));
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_7, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_10: *(void**)L_10));
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_11, L_12, L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_14: *(void**)L_14));
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_15, L_16, (Il2CppFullySharedGenericStruct*)L_17);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_0089;
	}

IL_003d:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_25, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_26 = ___0_array;
		int32_t L_27 = V_2;
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		V_2 = L_28;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_26, L_28, (Il2CppFullySharedGenericStruct*)L_29);
		int32_t L_31;
		L_31 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 6), L_30, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), L_25, L_29);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}

IL_005d:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_007d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_34, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_35 = ___0_array;
		int32_t L_36 = V_3;
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		V_3 = L_37;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_35, L_37, (Il2CppFullySharedGenericStruct*)L_38);
		int32_t L_40;
		L_40 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 6), L_39, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), L_34, L_38);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}

IL_007d:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_008d;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_43, L_44, L_45, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0089:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_003d;
		}
	}

IL_008d:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_51 = V_2;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909_gshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_41 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_50 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	const Il2CppFullySharedGenericStruct L_36 = L_24;
	const Il2CppFullySharedGenericStruct L_45 = L_24;
	const Il2CppFullySharedGenericStruct L_40 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	const Il2CppFullySharedGenericStruct L_49 = L_40;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	memset(V_1, 0, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = ___1_lo;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t* L_2 = ___2_hi;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t* L_4 = ___1_lo;
		int32_t L_5 = *((int32_t*)L_4);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_3, L_5))/2))));
		void* L_6 = ___0_array;
		int32_t* L_7 = ___1_lo;
		int32_t L_8 = *((int32_t*)L_7);
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_6, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_10: *(void**)L_10));
		void* L_11 = ___0_array;
		int32_t* L_12 = ___1_lo;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t* L_14 = ___2_hi;
		int32_t L_15 = *((int32_t*)L_14);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_11, L_13, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_16: *(void**)L_16));
		void* L_17 = ___0_array;
		int32_t L_18 = V_0;
		int32_t* L_19 = ___2_hi;
		int32_t L_20 = *((int32_t*)L_19);
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_17, L_18, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_21: *(void**)L_21));
		void* L_22 = ___0_array;
		int32_t L_23 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_22, L_23, (Il2CppFullySharedGenericStruct*)L_24);
		il2cpp_codegen_memcpy(V_1, L_24, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_25 = ___0_array;
		int32_t L_26 = V_0;
		int32_t* L_27 = ___2_hi;
		int32_t L_28 = *((int32_t*)L_27);
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_25, L_26, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t* L_29 = ___1_lo;
		int32_t L_30 = *((int32_t*)L_29);
		V_2 = L_30;
		int32_t* L_31 = ___2_hi;
		int32_t L_32 = *((int32_t*)L_31);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		goto IL_0094;
	}

IL_0047:
	{
		int32_t L_33 = V_2;
		int32_t* L_34 = ___2_hi;
		int32_t L_35 = *((int32_t*)L_34);
		if ((((int32_t)L_33) >= ((int32_t)L_35)))
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_memcpy(L_36, V_1, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_37 = ___0_array;
		int32_t L_38 = V_2;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		V_2 = L_39;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_37, L_39, (Il2CppFullySharedGenericStruct*)L_40);
		int32_t L_42;
		L_42 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 6), L_41, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), L_36, L_40);
		if ((((int32_t)L_42) > ((int32_t)0)))
		{
			goto IL_0047;
		}
	}

IL_0068:
	{
		int32_t L_43 = V_3;
		int32_t L_44 = V_2;
		if ((((int32_t)L_43) <= ((int32_t)L_44)))
		{
			goto IL_0088;
		}
	}
	{
		il2cpp_codegen_memcpy(L_45, V_1, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_46 = ___0_array;
		int32_t L_47 = V_3;
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
		V_3 = L_48;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_46, L_48, (Il2CppFullySharedGenericStruct*)L_49);
		int32_t L_51;
		L_51 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 6), L_50, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), L_45, L_49);
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}

IL_0088:
	{
		int32_t L_52 = V_2;
		int32_t L_53 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)L_53)))
		{
			goto IL_0098;
		}
	}
	{
		void* L_54 = ___0_array;
		int32_t L_55 = V_2;
		int32_t L_56 = V_3;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_54, L_55, L_56, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0094:
	{
		int32_t L_57 = V_2;
		int32_t L_58 = V_3;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0047;
		}
	}

IL_0098:
	{
		void* L_59 = ___0_array;
		int32_t L_60 = V_2;
		int32_t* L_61 = ___2_hi;
		int32_t L_62 = *((int32_t*)L_61);
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_59, L_60, ((int32_t)il2cpp_codegen_subtract(L_62, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_63 = V_2;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		InvokerActionInvoker3< void*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_1, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m1859D96C5F86215E7A5E852801B9AE8C2B95E239_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		InvokerActionInvoker2< NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m4FEF95715361F218DC8D173A80638DD74D4CF9DC_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_slice;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		InvokerActionInvoker2< NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mB449135843E754594001B0EAD70A205709265163_gshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_0 = ___0_list;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		InvokerActionInvoker2< UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m197B30912ECA075B47D7BD7712A9F37F52EA5D8D_gshared (Il2CppFullySharedGenericStruct* ___0_array, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		InvokerActionInvoker3< void*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (void*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m5E371D15E2A098907CED70FD190AB6E6A7A7286D_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = (Il2CppFullySharedGenericStruct*)L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		int32_t L_4 = V_1;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_comp : &___1_comp), SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, (void*)L_3, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_5: *(void**)L_5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m740CC60990F0F5017BED9F38F26CECFCC1BA78C1_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ((  Il2CppFullySharedGenericStruct* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___1_comp : &___1_comp), SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, (void*)L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_3: *(void**)L_3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m201F2E16B83FD461CE57913123761F986C0F912D_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_slice;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = (Il2CppFullySharedGenericStruct*)L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_slice), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		int32_t L_4 = V_1;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_comp : &___1_comp), SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, (void*)L_3, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_5: *(void**)L_5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEA0AAB94EC7DADF99B56086E173D45DD63A2AF35_gshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_list, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_0 = ___0_list;
		Il2CppFullySharedGenericStruct* L_1 = L_0.___Ptr;
		int32_t L_2;
		L_2 = ((  int32_t (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_comp : &___1_comp), SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, (void*)L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_3: *(void**)L_3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1_gshared (Il2CppFullySharedGenericStruct* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (void*)L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_2: *(void**)L_2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m52C3084BCC423645720ECD04047E9DFF095C1E04_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_4;
		L_4 = InvokerFuncInvoker3< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Il2CppFullySharedGenericStruct*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mB0EF9F438D8F4C889C4190D038616A751AD65191_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = InvokerFuncInvoker2< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m618668B901D3B28C9500C5AF37A84C0F064D750B_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_slice;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_slice), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_4;
		L_4 = InvokerFuncInvoker3< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Il2CppFullySharedGenericStruct*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mAD15487126464DAE40F7F98A11708118DC89AA8D_gshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_0 = ___0_list;
		Il2CppFullySharedGenericStruct* L_1 = L_0.___Ptr;
		int32_t L_2;
		L_2 = ((  int32_t (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_4;
		L_4 = InvokerFuncInvoker3< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Il2CppFullySharedGenericStruct*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mCDB8D25250D9675E93E37552EA51A8CB24C09931_gshared (Il2CppFullySharedGenericStruct* ___0_array, int32_t ___1_length, const RuntimeMethod* method) 
{
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD));
		Il2CppFullySharedGenericStruct* L_0 = ___0_array;
		(&V_0)->___Data = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___Length = L_1;
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522* L_2 = (DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522*)(&(&V_0)->___Comp);
		il2cpp_codegen_initobj(L_2, sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mDEDD35A24EC7064750CF9A006D9ED072EC9CC47A_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_6 = alloca(SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	int32_t V_1 = 0;
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_2 = alloca(SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
	memset(V_2, 0, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = (Il2CppFullySharedGenericStruct*)L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_2;
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_2, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		il2cpp_codegen_write_instance_field_data<Il2CppFullySharedGenericStruct*>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 4),0), L_3);
		int32_t L_4 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 4),2), L_4);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___1_comp : &___1_comp), SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
		il2cpp_codegen_write_instance_field_data((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 4),1), L_5, SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mB3A64630AC80B0CD54DDB37DABCA63F03F45C57D_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_4 = alloca(SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ((  Il2CppFullySharedGenericStruct* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___1_comp : &___1_comp), SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
		InvokerActionInvoker4< Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_3: *(void**)L_3), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m156DD6D59CA5B809BEFB0724A56CACE0B92B035D_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_4 = alloca(SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_slice;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_slice), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_comp : &___1_comp), SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
		InvokerActionInvoker4< Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_3: *(void**)L_3), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m803FCB042598C1E503C59013F0DD3E33DE8D5F04_gshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_list, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_4 = alloca(SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_0 = ___0_list;
		Il2CppFullySharedGenericStruct* L_1 = L_0.___Ptr;
		int32_t L_2;
		L_2 = ((  int32_t (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_comp : &___1_comp), SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
		InvokerActionInvoker4< Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_3: *(void**)L_3), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_gshared (Il2CppFullySharedGenericStruct* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_0 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	memset(V_0, 0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	{
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		Il2CppFullySharedGenericStruct* L_0 = ___0_array;
		il2cpp_codegen_write_instance_field_data<Il2CppFullySharedGenericStruct*>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),0), L_0);
		int32_t L_1 = ___1_length;
		il2cpp_codegen_write_instance_field_data<int32_t>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),2), L_1);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
		il2cpp_codegen_write_instance_field_data((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),1), L_2, SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_m32EF1EDFDD285088E68A52C9FA22CF962A0315F0_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 L_2;
		L_2 = InvokerFuncInvoker2< SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m08A07FE4FC0572B5AD96D95F043F26AD8020A463_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, Il2CppFullySharedGenericAny ___1_comp, SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
	const SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A L_2 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A V_0 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	memset(V_0, 0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	{
		il2cpp_codegen_initobj((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		il2cpp_codegen_write_instance_field_data<NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1>((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),0), L_0);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
		il2cpp_codegen_write_instance_field_data((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),1), L_1, SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF_gshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	memset(V_0, 0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_3, L_4, L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_9, L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C_gshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		void* L_2 = ___0_array;
		int32_t L_3 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		int32_t L_9;
		L_9 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_8, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), L_4, L_7);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_10, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322_gshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0);
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		void* L_2 = ___0_array;
		int32_t L_3 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		int32_t L_9;
		L_9 = ConstrainedFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_8, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), L_4, L_7);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_10, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24_gshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	memset(V_0, 0, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_3, L_4, L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_9, L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NativeStream_ScheduleConstruct_TisIl2CppFullySharedGenericStruct_m27645D3BD937891B0D2D164E55DCCD4A4F4D4E89_gshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* ___0_stream, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___1_bufferCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___2_dependency, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* L_0 = ___0_stream;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___3_allocator;
		NativeStream_AllocateBlock_mAD29C962FDE6B17A135737E09693B6FAB6E974AF(L_0, L_1, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_2;
		L_2 = ((  UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_bufferCount), il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___List = (UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2*)L_2;
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* L_3 = ___0_stream;
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 L_4 = (*(NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376*)L_3);
		(&V_0)->___Container = L_4;
		ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 L_5 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = ___2_dependency;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_7;
		L_7 = IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF(L_5, L_6, IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m7F7EEAC0A5F9619B9A028BE880C504844C338E8D_gshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* L_0 = (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*)(&__this->___m_Stream);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m7F7EEAC0A5F9619B9A028BE880C504844C338E8D_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = NativeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m7F7EEAC0A5F9619B9A028BE880C504844C338E8D(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCC69B853EEBECBAF3DCBFD8A0B26691430128057_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* V_4 = NULL;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___1_count;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_002c:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_6 = ___0_list;
		NullCheck(L_6);
		List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_7 = ___0_list;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_9 = ___1_count;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_11 = ___0_list;
		int32_t L_12 = ___1_count;
		NullCheck(L_11);
		List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8(L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0048:
	{
		int32_t L_13 = ___1_count;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_14 = ___0_list;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** L_17;
		L_17 = UnsafeUtility_As_TisList_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mCF5F8927BE5A0D9A4F9E7858A43AE6987DA7C753_inline((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 5));
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_18 = *((ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D**)L_17);
		V_4 = L_18;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_19 = V_4;
		int32_t L_20 = ___1_count;
		NullCheck(L_19);
		L_19->____size = L_20;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_21 = V_4;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->____version;
		NullCheck(L_22);
		L_22->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericAny_m28F7CCEFA354ED25B6E156C88890C5D01F5D9B6B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_4 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___1_count;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_002c:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = ___0_list;
		NullCheck(L_6);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7 = ___0_list;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_9 = ___1_count;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_11 = ___0_list;
		int32_t L_12 = ___1_count;
		NullCheck(L_11);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0048:
	{
		int32_t L_13 = ___1_count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_14 = ___0_list;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C** L_17;
		L_17 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C** (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 5));
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_18 = *((ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C**)L_17);
		V_4 = L_18;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_19 = V_4;
		int32_t L_20 = ___1_count;
		NullCheck(L_19);
		L_19->____size = L_20;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_21 = V_4;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->____version;
		NullCheck(L_22);
		L_22->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* V_0 = NULL;
	bool V_1 = false;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_2 = NULL;
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_4 = V_0;
		NullCheck(L_4);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NoAllocHelpers_ExtractArrayFromList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4AAC237725FD42066F40BCFA27A194003603208C_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* V_0 = NULL;
	bool V_1 = false;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442_m32094283939C75A047F5F7EC76EE93ACA2AC0F66((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* L_4 = V_0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* NoAllocHelpers_ExtractArrayFromList_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m94EB8197B54F97258F5E5D32716FB2C46B6A9BD0_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	bool V_1 = false;
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_2 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_4 = V_0;
		NullCheck(L_4);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* V_0 = NULL;
	bool V_1 = false;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___0_list;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_4 = V_0;
		NullCheck(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* V_0 = NULL;
	bool V_1 = false;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_2 = NULL;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_4 = V_0;
		NullCheck(L_4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m86C3B8CC91B7D7314F277C8EE09559E89700607E_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_0 = NULL;
	bool V_1 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_3;
		L_3 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_4 = V_0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m7A14E78563B72D165D0B4A58591E7D8CF2AE542B_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_2 = V_0;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3;
		L_3 = ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_2);
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_inline((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_4);
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_6 = V_0;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____version;
		NullCheck(L_7);
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisIl2CppFullySharedGenericAny_mF46DE29CC6CC8E6A7CAA86D0FB91CDDAE4DF29EE_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_0 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_1;
		L_1 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_2);
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_4 = V_0;
		int32_t L_5;
		L_5 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_4);
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_6 = V_0;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____version;
		NullCheck(L_7);
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mC69AC2FE59E4ED2C813055058FCB5D28E30EA2DA_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_3 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_4;
		L_4 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_5 = V_0;
		int32_t L_6 = ___1_size;
		NullCheck(L_5);
		L_5->____size = L_6;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_7 = V_0;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->____version;
		NullCheck(L_8);
		L_8->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisIl2CppFullySharedGenericStruct_mDDE45120A34583A64D84E8FDC700E61266084864_gshared (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* V_0 = NULL;
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_3 = ___0_list;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_4;
		L_4 = ((  ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_5 = V_0;
		int32_t L_6 = ___1_size;
		NullCheck(L_5);
		L_5->____size = L_6;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_7 = V_0;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->____version;
		NullCheck(L_8);
		L_8->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDE7B561CE172B3EB697DE30C3A79C67F70018E6F_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m910F55DA116EEF0221ADFF22689A9842AC46C5FE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB85A915B5401A23E2802BF2945052148967220E2_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m201A65A21E6A7CC7D1A0C35A7D5CEBE2DD8A49B2_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericAny_mD1DA27D7DEDDDE717B58255E05299BE55E56F095_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindFirstObjectByType_TisRuntimeObject_mC5927319EB5B80095EFBA653D414D6F8AA87DC0A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F(L_1, (int32_t)0, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_original;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26(L_0, _stringLiteralF704B54D833421164E45E576DFD279921246BCEA, NULL);
		RuntimeObject* L_1 = ___0_original;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_6 = (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)));
		UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_003e:
	{
		RuntimeObject* L_7 = V_0;
		V_2 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_original;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_parent;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94(L_0, L_1, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_original;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_parent;
		bool L_2 = ___2_worldPositionStays;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Object_Instantiate_m99F2A72EF6BFE09E6CF4FCF6207C5BCFAD1D76CF((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_original;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_rotation;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Object_Instantiate_m99C9917ED3F7B2B9C569B55F52411620B52DA19D((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Call_TisIl2CppFullySharedGenericAny_m98BA218FB32F6BD71591145929AD70307A2080A5_gshared (RuntimeObject* ___0_source, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___1_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_2 = ___1_action;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_5 = ___1_action;
		Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849* L_6 = (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		((  void (*) (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_6, L_5, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_4, (RuntimeObject*)L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_CallOnce_TisIl2CppFullySharedGenericAny_m967FE7E3F2B0865DA091FE0114DF9C5E39027B3B_gshared (RuntimeObject* ___0_source, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___1_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_0 = (U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_source;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_3 = ___1_action;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_5 = V_0;
		NullCheck(L_5);
		L_5->___subscription = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___subscription), (void*)(RuntimeObject*)NULL);
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_6 = V_0;
		RuntimeObject* L_7 = ___0_source;
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_7, 1, il2cpp_rgctx_method(method->rgctx_data, 4));
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_9 = ___1_action;
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_10 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, (RuntimeObject*)L_10, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 5)), NULL);
		Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849* L_12 = (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		((  void (*) (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_12, L_9, L_11, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_8);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_8, (RuntimeObject*)L_12);
		NullCheck(L_6);
		L_6->___subscription = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___subscription), (void*)L_13);
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___subscription;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_ForDevice_TisRuntimeObject_m2A6419FB121E384585C66D4965B0C4329F008A21_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_source;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889* L_5 = (ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889*)il2cpp_codegen_object_new(ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889_il2cpp_TypeInfo_var);
		ForDeviceEventObservable__ctor_mB1C31FA7E513DB5D377B8F95AB66DBA80A0B2EFC(L_5, L_2, L_4, (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)NULL, NULL);
		return (RuntimeObject*)L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Select_TisInputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0_TisRuntimeObject_mD95EF3BAFC9B9D9B39959EBDA1E1B1900763AE5F_gshared (RuntimeObject* ___0_source, Func_2_tD6A94C952B3804092A855172C7AB943068CC0AF1* ___1_filter, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Func_2_tD6A94C952B3804092A855172C7AB943068CC0AF1* L_2 = ___1_filter;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Func_2_tD6A94C952B3804092A855172C7AB943068CC0AF1* L_5 = ___1_filter;
		SelectObservable_2_t18DB3BD84546E800C7EE666A12BCD59E0D98A94C* L_6 = (SelectObservable_2_t18DB3BD84546E800C7EE666A12BCD59E0D98A94C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		SelectObservable_2__ctor_mE5FD6403A8AAFAB05CFFD25EC5B6683938116434(L_6, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1D4CDBCC87BAAB5B21B32BE27B7A5DCB226F6E71_gshared (RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_filter, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___1_filter;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_5 = ___1_filter;
		SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* L_6 = (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		((  void (*) (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383*, RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_6, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_SelectMany_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m6B8B7ECD69CDB004D46D0E106F7740644C2C15E3_gshared (RuntimeObject* ___0_source, Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* ___1_filter, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* L_2 = ___1_filter;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* L_5 = ___1_filter;
		SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* L_6 = (SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		((  void (*) (SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8*, RuntimeObject*, Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_6, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Take_TisIl2CppFullySharedGenericAny_m3193EEC4711789816ADFE2B254FB5833764C6377_gshared (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___0_source;
		int32_t L_5 = ___1_count;
		TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D* L_6 = (TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_6, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Where_TisRuntimeObject_m525F09BE9932378B97B042F5374032D48AC6F9EC_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___1_predicate;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_5 = ___1_predicate;
		WhereObservable_1_tB008380494D0278B3A31B13E77A835ABEB13B597* L_6 = (WhereObservable_1_tB008380494D0278B3A31B13E77A835ABEB13B597*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		WhereObservable_1__ctor_m1C21CE1BEA9304A64B9BD1475123600EB595202B(L_6, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Where_TisIl2CppFullySharedGenericAny_mA2778DBF842AD108A115A4BCF0D6D30F7F4F5B32_gshared (RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___1_predicate;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_5 = ___1_predicate;
		WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* L_6 = (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		((  void (*) (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_6, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenControl_SendValueToControl_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB2DC79F1724A6E638E35C2AFB3CC7E6B5951745_gshared (OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* __this, float ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* V_0 = NULL;
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___m_Control;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_1 = __this->___m_Control;
		V_0 = ((InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0)));
		InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* L_2 = V_0;
		if (L_2)
		{
			goto IL_0074;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = OnScreenControl_get_controlPath_m70FBF27F59E8953B7DE270BA8C426970E7D118D1(__this, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_9 = __this->___m_Control;
		NullCheck((RuntimeObject*)L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_9, NULL);
		NullCheck((MemberInfo_t*)L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck((MemberInfo_t*)L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_15);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0074:
	{
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* L_19 = (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0*)(&__this->___m_InputEventPtr);
		RuntimeObject* L_20 = ((InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_StaticFields*)il2cpp_codegen_static_fields_for(InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var))->___s_Instance;
		NullCheck(L_20);
		double L_21;
		L_21 = InterfaceFuncInvoker0< double >::Invoke(19, IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var, L_20);
		InputEventPtr_set_internalTime_mBD0B465C6882DD13F5FA3AAE487C0FA8A68E3810(L_19, L_21, NULL);
		InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* L_22 = V_0;
		float L_23 = ___0_value;
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_24 = __this->___m_InputEventPtr;
		InputControlExtensions_WriteValueIntoEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6846DBDEE718463B2788993E941703D5487D6AB3(L_22, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 3));
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_25 = __this->___m_InputEventPtr;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueEvent_mC30D182ADDD60BFC2AF10D24CEE2481D0EB77996(L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenControl_SendValueToControl_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m671D355740E4BC40EBDDECE5204680E0E605C664_gshared (OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* V_0 = NULL;
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___m_Control;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_1 = __this->___m_Control;
		V_0 = ((InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0)));
		InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* L_2 = V_0;
		if (L_2)
		{
			goto IL_0074;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = OnScreenControl_get_controlPath_m70FBF27F59E8953B7DE270BA8C426970E7D118D1(__this, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_9 = __this->___m_Control;
		NullCheck((RuntimeObject*)L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_9, NULL);
		NullCheck((MemberInfo_t*)L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck((MemberInfo_t*)L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_15);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0074:
	{
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* L_19 = (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0*)(&__this->___m_InputEventPtr);
		RuntimeObject* L_20 = ((InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_StaticFields*)il2cpp_codegen_static_fields_for(InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var))->___s_Instance;
		NullCheck(L_20);
		double L_21;
		L_21 = InterfaceFuncInvoker0< double >::Invoke(19, IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var, L_20);
		InputEventPtr_set_internalTime_mBD0B465C6882DD13F5FA3AAE487C0FA8A68E3810(L_19, L_21, NULL);
		InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* L_22 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ___0_value;
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_24 = __this->___m_InputEventPtr;
		InputControlExtensions_WriteValueIntoEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB4F47D8692DF6A43F031850C600040CCAFBAA30C(L_22, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 3));
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_25 = __this->___m_InputEventPtr;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueEvent_mC30D182ADDD60BFC2AF10D24CEE2481D0EB77996(L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenControl_SendValueToControl_TisIl2CppFullySharedGenericStruct_m5CF45A210F89CBADDC0AA576A7E7FDF653A63CCA_gshared (OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_23 = alloca(SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292);
	InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* V_0 = NULL;
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___m_Control;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_1 = __this->___m_Control;
		V_0 = ((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0)));
		InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* L_2 = V_0;
		if (L_2)
		{
			goto IL_0074;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = OnScreenControl_get_controlPath_m70FBF27F59E8953B7DE270BA8C426970E7D118D1(__this, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_9 = __this->___m_Control;
		NullCheck((RuntimeObject*)L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_9, NULL);
		NullCheck((MemberInfo_t*)L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck((MemberInfo_t*)L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_15);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0074:
	{
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* L_19 = (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0*)(&__this->___m_InputEventPtr);
		RuntimeObject* L_20 = ((InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_StaticFields*)il2cpp_codegen_static_fields_for(InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var))->___s_Instance;
		NullCheck(L_20);
		double L_21;
		L_21 = InterfaceFuncInvoker0< double >::Invoke(19, IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var, L_20);
		InputEventPtr_set_internalTime_mBD0B465C6882DD13F5FA3AAE487C0FA8A68E3810(L_19, L_21, NULL);
		InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* L_22 = V_0;
		il2cpp_codegen_memcpy(L_23, ___0_value, SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292);
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_24 = __this->___m_InputEventPtr;
		InvokerActionInvoker3< InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*, Il2CppFullySharedGenericStruct, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_22, L_23, L_24);
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_25 = __this->___m_InputEventPtr;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueEvent_mC30D182ADDD60BFC2AF10D24CEE2481D0EB77996(L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mA394CA588280E4927890676FB2E18D80909B05F3_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mF52C0D18465701E27B2CF0B6A64B025842122BD9_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m8AB03480CE50441C2EE915E24FC36FF49311AB26_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mD8F9F62D3F0BFC1368C3A6B26F0E472E5502C7FA_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m6B2055062515332A8330B3257EFDB4887D6021D4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m7AA071BF4FF634076D9EE7FA6B9AE7AE5A65A28E_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mC8496C117806D8E867957A17B97A53B57B40A87A_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m1BEFD6F94F5C94EDA0D005A99C98C964B9B1B912_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mFE9BE91D601114E259477098EAE7879677828756_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA1777DB79A2A1372D456E86895D9A2AAA7C59A8D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m6701010CE0AE59D323F8F84FA6A579A2CE35CF53_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m859CD9F9709DBD2E03CB29355B0C9C2B08469B4E_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m309B2553946691818BFF63A15C8D21B9E3FA07A1_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m03544BB4EA485F1A33BE31007B4F94ADB5C9A431_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m653C2A2A678F773BC2953D6F9FFDF03F1475B2E7_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m95615FDABAA0BBCA1036F8BD1F3BAF844140765D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRuntimeObject_m94D49D355E334CDD36397BAB547B14945A3DCF6C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, RuntimeObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		RuntimeObject** L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, RuntimeObject**, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		RuntimeObject** L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		RuntimeObject** L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, RuntimeObject**, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			RuntimeObject** L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		RuntimeObject** L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, RuntimeObject**, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			RuntimeObject** L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA7BB80DB28ADB84C1E180CDC2F995BE6C48D69C3_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mC7435512D91CB55EDFF2DC84814D602C1E3F8314_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m6AE998E2A2414E44DF5A20027B6933A388C3DB2C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mF637FB3B593396B2317F0D3A6C3410DCAE2A8BD4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3EA26E78F7808B1525260D8542CDB1230C757464_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m1A32A7F8799DCAD993E3F1C842E67E080C304D0B_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m70EC4F0D01A015CBECA96E482D19AD88909A35AD_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mBECD934FD3E1E9EDC2367DED244DF3F44D5CAB7B_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m087A4C698125FFAF67CD6BEB1C897C50D18891ED_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m7802CB6BD0332ABDAFBCD002B6083980CF481ECF_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m0A70E62F81EEFA6AEB1FB1859F4D64F5048076AF_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mD1CAAEEAA93627445BC47DF2AFF9321DA3FF3F7A_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m82E1163312014F427FA69527D395D1F1B2A16A4B_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mC68B89261EA1BB8A1DC4C6A9150A9148B63E7369_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m483FD952658280DFA2D296C9549CA875ED22FF42_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m45E297908E8E8D846B2D7C4958D20500355B0CA7_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3C0CB18CE87403E33C37F6278C5A7038E0C86017_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mF2FFD43AA026A0FD177F43C2A25E890C619D2919_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mA676859F5D9456675642EF987D26EC2C4C414E83_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m62275DD2F8069694D40BA4D6F4C3200D7FEB1EF1_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m9B92F7028C96F990CC5C76746FC6C486E6ED9720_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m487A110E4985E524A1CBD80EDF0EC7724409C0F8_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m7EC34B7D12DF0F5320B417C6951CA8EB7353753C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m0E24B89E2F70614D92B3C8565F23D6B12CC5EF47_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m93BA1BAB12267DAB13BB9A99A4920B56AA4E144D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB5359D594E93CA95CF77DB06AAF03392747BD182_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m99F73E835319493D6FCCA0EA552CBD3D831E62F4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAC5B0B2329C8E652BC4D51548546E0EA28D31899_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mE09C9181C89D1B1B8AD102ED803CD10EFF657ADE_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAB864971AC0E9E1928498A48F062AB1FDA74EA10_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_mF1E2CE4C83C60AC29C925BB4548F6186E2FB27EC_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Il2CppFullySharedGenericAny* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Il2CppFullySharedGenericAny* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Il2CppFullySharedGenericAny* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Il2CppFullySharedGenericAny* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Il2CppFullySharedGenericAny* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3Invoker< bool, Il2CppFullySharedGenericAny*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Il2CppFullySharedGenericAny* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCE1CE49F6C98BA9A1D9720C0503BDF83571C846C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* ___0_property, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_0 = ___0_property;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_7 = ___0_property;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_23 = ___0_property;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_24 = ___1_container;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mAD42E2A5148440AD1DD60E62D0DE2BBF0F3BD4B9_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* ___0_property, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_0 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_7 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_23 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_24 = ___1_container;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_TisRuntimeObject_mAEF24FC2133CE510A333A4825BA0896808F110D9_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* ___0_property, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_0 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_1 = ___1_container;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_7 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, RuntimeObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_12;
		L_12 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_23 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_24 = ___1_container;
		RuntimeObject* L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, RuntimeObject* >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m515538C8CC1CF1A23FF50D0CE0FFDF1DD8F470D4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* ___0_property, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_0 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_7 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tB2B25D50A07137613571C599F2D927783128F4B2*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_23 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_24 = ___1_container;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_TisRuntimeObject_mAADD779C87D46A955DFC4197DD566A6695153258_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* ___0_property, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* L_0 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_1 = ___1_container;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* L_7 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, RuntimeObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_12;
		L_12 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* L_23 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_24 = ___1_container;
		RuntimeObject* L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, RuntimeObject* >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBD88804F7E1381FA8EEC3563BE240E62C6332F26_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t8803DA217446897A3DBF392B50C90530471C6822* ___0_property, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t8803DA217446897A3DBF392B50C90530471C6822* L_0 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t8803DA217446897A3DBF392B50C90530471C6822* L_7 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t8803DA217446897A3DBF392B50C90530471C6822*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t8803DA217446897A3DBF392B50C90530471C6822* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t8803DA217446897A3DBF392B50C90530471C6822* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t8803DA217446897A3DBF392B50C90530471C6822* L_23 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_24 = ___1_container;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_TisRuntimeObject_m0FBE6B874E92B9EA009F8DC69DF14875F045BB7D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* ___0_property, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* L_0 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_1 = ___1_container;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* L_7 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, RuntimeObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_12;
		L_12 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* L_23 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_24 = ___1_container;
		RuntimeObject* L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, RuntimeObject* >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFA8880BDD0E25A04ECD1D3CB5958E91BA745BE38_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* ___0_property, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* L_0 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* L_7 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* L_23 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_24 = ___1_container;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC222F74AFAF1B7F4A10598B8F946FC9FF61E13C4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* ___0_property, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* L_0 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_1 = ___1_container;
		NullCheck(L_0);
		float L_2;
		L_2 = VirtualFuncInvoker1< float, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* L_7 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tF274BD13981F14C9234EED2454BA5879F339129A*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, float* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m639CE2C899C469A55ECC66D6793B590C5EBE3E42((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_12;
		L_12 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		float L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(float));
		float L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7E97E817C5D3F92B56F729FE44CBC11EFEA02EE((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* L_23 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_24 = ___1_container;
		float L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, float >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_TisRuntimeObject_m7A716CD5A54899FA727CC3334E65DA5C30F1AC65_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* ___0_property, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* L_0 = ___0_property;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_1 = ___1_container;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* L_7 = ___0_property;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, RuntimeObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_12;
		L_12 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* L_23 = ___0_property;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_24 = ___1_container;
		RuntimeObject* L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, RuntimeObject* >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4C5B4BC6A5CA84D80B0629BF2053BC433066398C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* ___0_property, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* L_0 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* L_7 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* L_23 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_24 = ___1_container;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mCDA2FB5D9C03550A65CF5CC360ED506EAB179995_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tA37B381C421869CA10862B372913EA34498BC042* ___0_property, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tA37B381C421869CA10862B372913EA34498BC042* L_0 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_1 = ___1_container;
		NullCheck(L_0);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_2;
		L_2 = VirtualFuncInvoker1< Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tA37B381C421869CA10862B372913EA34498BC042* L_7 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tA37B381C421869CA10862B372913EA34498BC042*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m7A9EA143096E3C18C2DD2EDEF28A519CA4A73802((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_12;
		L_12 = EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tA37B381C421869CA10862B372913EA34498BC042* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m991F23402D966D410BBC89F0A2AD615D3CEC81D6((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tA37B381C421869CA10862B372913EA34498BC042* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tA37B381C421869CA10862B372913EA34498BC042* L_23 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_24 = ___1_container;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = __this->___U3CPathU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Kind;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReturnCodeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CPropertyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CReadonlyVisitU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject** UnsafeUtility_As_TisRuntimeObject_TisRuntimeObject_m427D45188F037E6A44060E2DC34BCD470560D8C9_gshared_inline (RuntimeObject** ___0_from, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_from;
		return (RuntimeObject**)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_0 = NULL;
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0 = ((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* V_0 = NULL;
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* V_0 = NULL;
	{
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_0 = ((EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE5BC74FD18313E1237342B0626EB109CDF69CE26(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_4 = V_0;
		return L_4;
	}
}
