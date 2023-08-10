#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<Explosion>
struct Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TouchParticle>
struct Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Single>
struct Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC;
// System.Func`2<System.Int32,System.Single>
struct Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Linq.IOrderedEnumerable`1<System.Int32>
struct IOrderedEnumerable_1_t07B8E72925E861AB83B6CF77BBBB4758A2D0706C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Single>
struct KeyCollection_t3C0BA1F084EA69F4F08E2AC2C2B8502947BB51BD;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<card>
struct List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242;
// ObjectPool`1<Explosion>
struct ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5;
// ObjectPool`1<System.Object>
struct ObjectPool_1_t548CF41BF5F3157291CF0CC8B9836AA675FF475A;
// ObjectPool`1<TouchParticle>
struct ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641;
// System.Collections.Generic.Stack`1<Explosion>
struct Stack_1_tE0E28829B12FE694D2263CBC11FB7DB3EED5DC65;
// System.Collections.Generic.Stack`1<TouchParticle>
struct Stack_1_t8A9253AB973197D5849CFDBF0E30ADEC4B036C72;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>
struct ValueCollection_tA792A7A8359239E0726D27330A82AB3B5C6194FD;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Single>[]
struct EntryU5BU5D_t073FACA530F2690A9E997B1617C81029BBC8FD2C;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// card[]
struct cardU5BU5D_tBCED50AE46132685633D8CE5DD0F0C23789071C4;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Explosion
struct Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847;
// FadeScene
struct FadeScene_t1C1B497B2AA475BEC1565B63F1EC2AA117CB0A20;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectPooler
struct ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TouchParticle
struct TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// aboutGameBtn
struct aboutGameBtn_t22E0B7864C5B18915C990C755E1832CB2E92343E;
// audioManager
struct audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13;
// card
struct card_tD5C541331908CF70357E72C9CD140BC92705AE4E;
// endText
struct endText_tB4573EF285E7E5397C9C784EA2AD0F5C0727E949;
// goHomeBtn
struct goHomeBtn_t6D8C85F155A5F2D30E3B0683417442CF6B97027F;
// nextStageBtn
struct nextStageBtn_tDE52BBEC717A51BFB2B652BED2960787EF2F27F1;
// stageCatBtn
struct stageCatBtn_tA66DF49C3F788B29892373CBBB19BDCCDE17E7CF;
// stageManager
struct stageManager_t549D281035189BBC400D73397FE08178D59E2631;
// stageSelectManager
struct stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1;
// startBtn
struct startBtn_t4E3CBFAE676D7A3E3E393DB1F76769CE15C23328;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameManager/<CoVerifyMatching>d__43
struct U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E;
// GameManager/<Start>d__40
struct U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// TouchParticle/<CoRemainWhile>d__6
struct U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909;
// card/<CoFlip>d__16
struct U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2;
// card/<CoReverseFlip>d__17
struct U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748;
// stageManager/<>c
struct U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F;
// stageManager/<CoMoveOffsetPosition>d__16
struct U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258;
// stageSelectManager/<CoFade>d__11
struct U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0273680B3107EAA25513934A67F69AF51E0B3082;
IL2CPP_EXTERN_C String_t* _stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D;
IL2CPP_EXTERN_C String_t* _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A;
IL2CPP_EXTERN_C String_t* _stringLiteral1E030F50FB5C5E779E51BD17A1A9ED7BF68C5812;
IL2CPP_EXTERN_C String_t* _stringLiteral2D344CCD39D3CD23AEFE1F1CA347B93785660422;
IL2CPP_EXTERN_C String_t* _stringLiteral3366F334BA687B5F09C809786A02BFA24ADA8FE4;
IL2CPP_EXTERN_C String_t* _stringLiteral37E71CFCAB09AA69BDC6A68562FC08A0DFFDC837;
IL2CPP_EXTERN_C String_t* _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F;
IL2CPP_EXTERN_C String_t* _stringLiteral4024FC9440E76032D8FF697972847D6DB815BBF7;
IL2CPP_EXTERN_C String_t* _stringLiteral483CA30182E3D1B463EC385AEF9A03F3D98E0AD8;
IL2CPP_EXTERN_C String_t* _stringLiteral4B7DAFC5FC381C0298C881B144F68F58FABC62C7;
IL2CPP_EXTERN_C String_t* _stringLiteral57663CB5266DBA1BEBB7FB3341AEB409507261ED;
IL2CPP_EXTERN_C String_t* _stringLiteral669C4C4316BB0D8800268D421965F7350B189F2D;
IL2CPP_EXTERN_C String_t* _stringLiteral6E5A7AE29E55B0CECDBAE997BF96BC45AF8C234E;
IL2CPP_EXTERN_C String_t* _stringLiteral793124C2C69F7C5AD956B8E7C24C95DFD06780A5;
IL2CPP_EXTERN_C String_t* _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8;
IL2CPP_EXTERN_C String_t* _stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7;
IL2CPP_EXTERN_C String_t* _stringLiteralA0CE9B4DB130E3DCF0ADEB3EA7F7EB1D4A500264;
IL2CPP_EXTERN_C String_t* _stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40;
IL2CPP_EXTERN_C String_t* _stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722;
IL2CPP_EXTERN_C String_t* _stringLiteralAA7ABFC452D5BB4DD9DCD5432AE53F51D9FCFB22;
IL2CPP_EXTERN_C String_t* _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C;
IL2CPP_EXTERN_C String_t* _stringLiteralADE3A5294FA17AC9817CF668B5F1FA54B374187D;
IL2CPP_EXTERN_C String_t* _stringLiteralC60C5FFA1D94D479D1FEADBE31225357CB60B464;
IL2CPP_EXTERN_C String_t* _stringLiteralCA7C9A81684CAFD7E7FA823676FE4E730F56C1C9;
IL2CPP_EXTERN_C String_t* _stringLiteralCFDF4F0BC4E24A3167446E6E9B2F006F3B8DFE3E;
IL2CPP_EXTERN_C String_t* _stringLiteralFAF4D67D78B55FF0B8A62F2B1CFEC43222ADA427;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2BDAB666DF2DAB54DFF282A66818CE5DBCE0356F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3B9BDFABC3A31681FBD8FFAD9CDFC3EFE531259E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m984F1CDB5AA6B90E5D54FE50CC499BDB8A95A635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m840539B2E0C2D5386BBE6608E396C0E99071EE3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9A7CA8FC1B6C77E3026EDAA92D0D834525D624D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3B7DEE69BA76028D04B976F3961387A9C020B30A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEDF585625A887A87FFFBD2D47E174660AC8AC163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m37632393A87AD3B4D83D5AC016CBA385D2BC98AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB7F66C85B203206BAD1D61ACC96F7DBFF4A5134C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m8EC4BBDABB9537C0ED3E0BA6DCDF55C5E565AC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB8C94110CBF8BD3309899C08D40288B211C566E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_GetObject_m496EE67E2E90D0AEAE53477546F17AEC90275A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_GetObject_mDF78A71253E859BD9BE1FCF1BDDB7A65282AF787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m77D1E43182CCD548B1D6C78C5D8F35B154E76615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_mBABF9E5337610DDE4996E20B1F8A4EFD43BDFA81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisExplosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847_m492DAC8CF4E1C4720FFA9966CA77DDFADC77EB80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1_mDB88FA29810573C84DD4DD7E71C542A67B75D89F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoFadeU3Ed__11_System_Collections_IEnumerator_Reset_mECE3C2A021B7E10FDE41241EFB9839614F893C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoFlipU3Ed__16_System_Collections_IEnumerator_Reset_m73763338210D40D27DD2E737F581FFF7F7A189B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoMoveOffsetPositionU3Ed__16_System_Collections_IEnumerator_Reset_m80335812DD632B260DB2C2E07FC5F797A7F51805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoRemainWhileU3Ed__6_System_Collections_IEnumerator_Reset_m300CA8D82A13647EB443AF1C0F677B1D8AECC38A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoReverseFlipU3Ed__17_System_Collections_IEnumerator_Reset_m3048B9FB29D5239411C16254623C310F1BF98BF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoVerifyMatchingU3Ed__43_System_Collections_IEnumerator_Reset_mCE7427741213787C9FCE890B8361E68006B42E1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__40_System_Collections_IEnumerator_Reset_m344042DAB4E88A075B3EAD1EB1C0C59FA2AFC403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CselectStageU3Eb__13_0_m9329D4305E88E552A9E9D4C68B9091370B3B409F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CselectStageU3Eb__13_1_mB1B5EA4DCA55293680BBC7DB3A9C30B71E0604CA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Single>
struct Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t073FACA530F2690A9E997B1617C81029BBC8FD2C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3C0BA1F084EA69F4F08E2AC2C2B8502947BB51BD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA792A7A8359239E0726D27330A82AB3B5C6194FD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<card>
struct List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	cardU5BU5D_tBCED50AE46132685633D8CE5DD0F0C23789071C4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// ObjectPool`1<Explosion>
struct ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5  : public RuntimeObject
{
	// T ObjectPool`1::tPrefab
	Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* ___tPrefab_0;
	// System.Collections.Generic.Stack`1<T> ObjectPool`1::objectPool
	Stack_1_tE0E28829B12FE694D2263CBC11FB7DB3EED5DC65* ___objectPool_1;
	// UnityEngine.Transform ObjectPool`1::parentTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTrans_2;
};

// ObjectPool`1<TouchParticle>
struct ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641  : public RuntimeObject
{
	// T ObjectPool`1::tPrefab
	TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* ___tPrefab_0;
	// System.Collections.Generic.Stack`1<T> ObjectPool`1::objectPool
	Stack_1_t8A9253AB973197D5849CFDBF0E30ADEC4B036C72* ___objectPool_1;
	// UnityEngine.Transform ObjectPool`1::parentTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTrans_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GameManager/<CoVerifyMatching>d__43
struct U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E  : public RuntimeObject
{
	// System.Int32 GameManager/<CoVerifyMatching>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<CoVerifyMatching>d__43::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Boolean GameManager/<CoVerifyMatching>d__43::isCorrect
	bool ___isCorrect_2;
	// GameManager GameManager/<CoVerifyMatching>d__43::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_3;
	// System.String GameManager/<CoVerifyMatching>d__43::cardName
	String_t* ___cardName_4;
};

// GameManager/<Start>d__40
struct U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D  : public RuntimeObject
{
	// System.Int32 GameManager/<Start>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<Start>d__40::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<Start>d__40::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// TouchParticle/<CoRemainWhile>d__6
struct U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909  : public RuntimeObject
{
	// System.Int32 TouchParticle/<CoRemainWhile>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchParticle/<CoRemainWhile>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TouchParticle TouchParticle/<CoRemainWhile>d__6::<>4__this
	TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* ___U3CU3E4__this_2;
	// System.Single TouchParticle/<CoRemainWhile>d__6::<ratio>5__2
	float ___U3CratioU3E5__2_3;
};

// stageManager/<>c
struct U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F  : public RuntimeObject
{
};

// stageSelectManager/<CoFade>d__11
struct U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81  : public RuntimeObject
{
	// System.Int32 stageSelectManager/<CoFade>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object stageSelectManager/<CoFade>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// stageSelectManager stageSelectManager/<CoFade>d__11::<>4__this
	stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* ___U3CU3E4__this_2;
	// System.String stageSelectManager/<CoFade>d__11::sceneName
	String_t* ___sceneName_3;
	// System.Single stageSelectManager/<CoFade>d__11::<time>5__2
	float ___U3CtimeU3E5__2_4;
	// UnityEngine.AsyncOperation stageSelectManager/<CoFade>d__11::<op>5__3
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CopU3E5__3_5;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<card>
struct Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	card_tD5C541331908CF70357E72C9CD140BC92705AE4E* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// card/<CoFlip>d__16
struct U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2  : public RuntimeObject
{
	// System.Int32 card/<CoFlip>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object card/<CoFlip>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// card card/<CoFlip>d__16::<>4__this
	card_tD5C541331908CF70357E72C9CD140BC92705AE4E* ___U3CU3E4__this_2;
	// System.Single card/<CoFlip>d__16::<ratio>5__2
	float ___U3CratioU3E5__2_3;
	// UnityEngine.Vector3 card/<CoFlip>d__16::<backRotation>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CbackRotationU3E5__3_4;
	// UnityEngine.Vector3 card/<CoFlip>d__16::<frontRotation>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CfrontRotationU3E5__4_5;
};

// card/<CoReverseFlip>d__17
struct U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748  : public RuntimeObject
{
	// System.Int32 card/<CoReverseFlip>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object card/<CoReverseFlip>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// card card/<CoReverseFlip>d__17::<>4__this
	card_tD5C541331908CF70357E72C9CD140BC92705AE4E* ___U3CU3E4__this_2;
	// System.Single card/<CoReverseFlip>d__17::<ratio>5__2
	float ___U3CratioU3E5__2_3;
	// UnityEngine.Vector3 card/<CoReverseFlip>d__17::<frontRotation>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CfrontRotationU3E5__3_4;
	// UnityEngine.Vector3 card/<CoReverseFlip>d__17::<backRotation>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CbackRotationU3E5__4_5;
};

// stageManager/<CoMoveOffsetPosition>d__16
struct U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258  : public RuntimeObject
{
	// System.Int32 stageManager/<CoMoveOffsetPosition>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object stageManager/<CoMoveOffsetPosition>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Transform stageManager/<CoMoveOffsetPosition>d__16::cardTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cardTrans_2;
	// UnityEngine.Vector3 stageManager/<CoMoveOffsetPosition>d__16::destination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination_3;
	// stageManager stageManager/<CoMoveOffsetPosition>d__16::<>4__this
	stageManager_t549D281035189BBC400D73397FE08178D59E2631* ___U3CU3E4__this_4;
	// UnityEngine.Vector3 stageManager/<CoMoveOffsetPosition>d__16::<offsetPos>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoffsetPosU3E5__2_5;
	// System.Single stageManager/<CoMoveOffsetPosition>d__16::<ratio>5__3
	float ___U3CratioU3E5__3_6;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<Explosion>
struct Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<TouchParticle>
struct Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Single>
struct Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Explosion
struct Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<Explosion> Explosion::returnCallback
	Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99* ___returnCallback_4;
	// UnityEngine.Animator Explosion::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
};

// FadeScene
struct FadeScene_t1C1B497B2AA475BEC1565B63F1EC2AA117CB0A20  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text GameManager::timeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___timeText_4;
	// UnityEngine.UI.Text GameManager::bestScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___bestScoreText_5;
	// UnityEngine.GameObject GameManager::card
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___card_6;
	// UnityEngine.GameObject GameManager::endText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___endText_7;
	// UnityEngine.GameObject GameManager::tryMatchCountText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tryMatchCountText_8;
	// UnityEngine.GameObject GameManager::scoreText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scoreText_9;
	// UnityEngine.GameObject GameManager::resultPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resultPanel_10;
	// UnityEngine.GameObject GameManager::countdownText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___countdownText_11;
	// UnityEngine.GameObject GameManager::nextStageBtn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextStageBtn_12;
	// System.Single GameManager::time
	float ___time_13;
	// System.Single GameManager::countdownTime
	float ___countdownTime_14;
	// System.Int32 GameManager::tryMatchCount
	int32_t ___tryMatchCount_15;
	// System.Int32 GameManager::score
	int32_t ___score_16;
	// System.Int32 GameManager::curStage
	int32_t ___curStage_17;
	// System.Boolean GameManager::isSpeedUp
	bool ___isSpeedUp_18;
	// System.Boolean GameManager::isSuccess
	bool ___isSuccess_19;
	// UnityEngine.GameObject GameManager::firstCard
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___firstCard_27;
	// UnityEngine.GameObject GameManager::secondCard
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___secondCard_28;
	// UnityEngine.AudioClip GameManager::match
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___match_29;
	// UnityEngine.AudioClip GameManager::fail
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___fail_30;
	// UnityEngine.AudioSource GameManager::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_31;
	// UnityEngine.UI.Text GameManager::matchText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___matchText_32;
	// System.Int32 GameManager::rtanSpriteSize
	int32_t ___rtanSpriteSize_33;
	// System.Single GameManager::matchTextTime
	float ___matchTextTime_34;
	// System.Single GameManager::closeDelayTime
	float ___closeDelayTime_35;
	// System.String GameManager::unCorrectMessage
	String_t* ___unCorrectMessage_36;
	// UnityEngine.Color GameManager::correctColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___correctColor_37;
	// UnityEngine.Color GameManager::unCorrectColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unCorrectColor_38;
	// System.Single GameManager::radius
	float ___radius_40;
	// System.Single GameManager::cardSettingTime
	float ___cardSettingTime_41;
	// System.Boolean GameManager::isSettings
	bool ___isSettings_42;
};

// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Touch InputManager::touch
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch_5;
	// UnityEngine.Camera InputManager::mainCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCam_6;
};

// ObjectPooler
struct ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ObjectPool`1<TouchParticle> ObjectPooler::touchPool
	ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641* ___touchPool_5;
	// ObjectPool`1<Explosion> ObjectPooler::explosionPool
	ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5* ___explosionPool_6;
};

// TouchParticle
struct TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TouchParticle::remainTime
	float ___remainTime_4;
	// System.Action`1<TouchParticle> TouchParticle::returnAction
	Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345* ___returnAction_5;
	// UnityEngine.ParticleSystem TouchParticle::ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___ParticleSystem_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// aboutGameBtn
struct aboutGameBtn_t22E0B7864C5B18915C990C755E1832CB2E92343E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject aboutGameBtn::aboutGamePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___aboutGamePanel_4;
};

// audioManager
struct audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip audioManager::bgmusic
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___bgmusic_4;
	// UnityEngine.AudioClip audioManager::speedUpmusic
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___speedUpmusic_5;
	// UnityEngine.AudioSource audioManager::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_6;
};

// card
struct card_tD5C541331908CF70357E72C9CD140BC92705AE4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator card::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_4;
	// UnityEngine.AudioClip card::flip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___flip_5;
	// UnityEngine.AudioSource card::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_6;
	// System.Single card::flipRotation
	float ___flipRotation_7;
	// System.Single card::flipSpeed
	float ___flipSpeed_8;
	// UnityEngine.Transform card::frontTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___frontTransform_9;
	// UnityEngine.Transform card::backTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___backTransform_10;
	// UnityEngine.UI.Button card::clickBtn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___clickBtn_11;
};

// endText
struct endText_tB4573EF285E7E5397C9C784EA2AD0F5C0727E949  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// goHomeBtn
struct goHomeBtn_t6D8C85F155A5F2D30E3B0683417442CF6B97027F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// nextStageBtn
struct nextStageBtn_tDE52BBEC717A51BFB2B652BED2960787EF2F27F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// stageCatBtn
struct stageCatBtn_tA66DF49C3F788B29892373CBBB19BDCCDE17E7CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject stageCatBtn::selectStagePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectStagePanel_4;
	// UnityEngine.UI.Image stageCatBtn::stageCatBtnImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___stageCatBtnImage_5;
	// UnityEngine.Sprite stageCatBtn::pixelcat
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___pixelcat_6;
	// UnityEngine.Sprite stageCatBtn::pixelcat_with_sunglasses
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___pixelcat_with_sunglasses_7;
	// UnityEngine.UI.Text stageCatBtn::selectedStageText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___selectedStageText_8;
};

// stageManager
struct stageManager_t549D281035189BBC400D73397FE08178D59E2631  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject stageManager::card
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___card_4;
	// System.Int32 stageManager::rtanSpriteSize
	int32_t ___rtanSpriteSize_5;
	// System.Single stageManager::radius
	float ___radius_7;
	// System.Single stageManager::cardSettingTime
	float ___cardSettingTime_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Single> stageManager::stageCardSizeDict
	Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* ___stageCardSizeDict_9;
	// System.Collections.Generic.List`1<card> stageManager::cards
	List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* ___cards_10;
};

// stageSelectManager
struct stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 stageSelectManager::stage
	int32_t ___stage_4;
	// System.Single stageSelectManager::fadeValue
	float ___fadeValue_6;
	// System.Single stageSelectManager::fadeTime
	float ___fadeTime_7;
	// UnityEngine.UI.Image stageSelectManager::fadeImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___fadeImage_8;
};

// startBtn
struct startBtn_t4E3CBFAE676D7A3E3E393DB1F76769CE15C23328  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject startBtn::selectStagePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectStagePanel_4;
	// UnityEngine.GameObject startBtn::stage2Btn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stage2Btn_5;
	// UnityEngine.GameObject startBtn::lock_img
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lock_img_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Single>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Single>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<card>
struct List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	cardU5BU5D_tBCED50AE46132685633D8CE5DD0F0C23789071C4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<card>

// ObjectPool`1<Explosion>

// ObjectPool`1<Explosion>

// ObjectPool`1<TouchParticle>

// ObjectPool`1<TouchParticle>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// GameManager/<CoVerifyMatching>d__43

// GameManager/<CoVerifyMatching>d__43

// GameManager/<Start>d__40

// GameManager/<Start>d__40

// TouchParticle/<CoRemainWhile>d__6

// TouchParticle/<CoRemainWhile>d__6

// stageManager/<>c
struct U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields
{
	// stageManager/<>c stageManager/<>c::<>9
	U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F* ___U3CU3E9_0;
	// System.Func`2<System.Int32,System.Single> stageManager/<>c::<>9__13_0
	Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* ___U3CU3E9__13_0_1;
	// System.Func`2<System.Int32,System.Single> stageManager/<>c::<>9__13_1
	Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* ___U3CU3E9__13_1_2;
};

// stageManager/<>c

// stageSelectManager/<CoFade>d__11

// stageSelectManager/<CoFade>d__11

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<card>

// System.Collections.Generic.List`1/Enumerator<card>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Touch

// UnityEngine.Touch

// card/<CoFlip>d__16

// card/<CoFlip>d__16

// card/<CoReverseFlip>d__17

// card/<CoReverseFlip>d__17

// stageManager/<CoMoveOffsetPosition>d__16

// stageManager/<CoMoveOffsetPosition>d__16

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.Action`1<Explosion>

// System.Action`1<Explosion>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<TouchParticle>

// System.Action`1<TouchParticle>

// System.Func`2<System.Int32,System.Single>

// System.Func`2<System.Int32,System.Single>

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// Explosion

// Explosion

// FadeScene

// FadeScene

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::I
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___I_26;
};

// GameManager

// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_StaticFields
{
	// InputManager InputManager::I
	InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* ___I_4;
};

// InputManager

// ObjectPooler
struct ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields
{
	// ObjectPooler ObjectPooler::I
	ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* ___I_4;
};

// ObjectPooler

// TouchParticle

// TouchParticle

// aboutGameBtn

// aboutGameBtn

// audioManager
struct audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_StaticFields
{
	// audioManager audioManager::A
	audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13* ___A_7;
};

// audioManager

// card

// card

// endText

// endText

// goHomeBtn

// goHomeBtn

// nextStageBtn

// nextStageBtn

// stageCatBtn

// stageCatBtn

// stageManager
struct stageManager_t549D281035189BBC400D73397FE08178D59E2631_StaticFields
{
	// stageManager stageManager::S
	stageManager_t549D281035189BBC400D73397FE08178D59E2631* ___S_11;
};

// stageManager

// stageSelectManager
struct stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields
{
	// stageSelectManager stageSelectManager::SSM
	stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* ___SSM_5;
};

// stageSelectManager

// startBtn

// startBtn

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
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
// System.Int32[]
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T ObjectPool`1<System.Object>::GetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_GetObject_mB05CAB9C80568E7B5C6ACAC62783453233FA7166_gshared (ObjectPool_1_t548CF41BF5F3157291CF0CC8B9836AA675FF475A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m984F1CDB5AA6B90E5D54FE50CC499BDB8A95A635_gshared (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Dictionary_2_get_Item_m840539B2E0C2D5386BBE6608E396C0E99071EE3D_gshared (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void ObjectPool`1<System.Object>::.ctor(T,UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_mF60299D848F34775723F06C81547B7BF7ABD5EC6_gshared (ObjectPool_1_t548CF41BF5F3157291CF0CC8B9836AA675FF475A* __this, RuntimeObject* ___0_t, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_trans, int32_t ___2_initCount, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2BDAB666DF2DAB54DFF282A66818CE5DBCE0356F_gshared (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* __this, int32_t ___0_key, float ___1_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int32,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m21E85B4040A96377ECFBA2A1C40E3A1C0EF3EF7F_gshared (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Int32,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_gshared (RuntimeObject* ___0_source, Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* ___1_keySelector, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_LoadAll_TisRuntimeObject_m69B3BC41DB42071369375275587F5A5FF5040487_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3B9BDFABC3A31681FBD8FFAD9CDFC3EFE531259E_gshared (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// System.Collections.IEnumerator card::CoFlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* card_CoFlip_m67A55779A8C2DFA2229872D68B3D76AD582F1410 (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void GameManager::isMatched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_isMatched_m8D599EABB819E309EE2376C1E6DD5AB72489BB03 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// T ObjectPool`1<Explosion>::GetObject()
inline Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* ObjectPool_1_GetObject_mDF78A71253E859BD9BE1FCF1BDDB7A65282AF787 (ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5* __this, const RuntimeMethod* method)
{
	return ((  Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* (*) (ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5*, const RuntimeMethod*))ObjectPool_1_GetObject_mB05CAB9C80568E7B5C6ACAC62783453233FA7166_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void stageManager::RemoveCard(card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageManager_RemoveCard_m964FC312D34D51D446D1B55106E3D88C52698A3D (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, card_tD5C541331908CF70357E72C9CD140BC92705AE4E* ___0_card, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator card::CoReverseFlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* card_CoReverseFlip_mAD35A1D58D990C05927DB21112A37DCB18396AAA (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void card/<CoFlip>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoFlipU3Ed__16__ctor_m018FD94D3AC9E6E94A98FDF0512F60DB690CB7C4 (U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void card/<CoReverseFlip>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoReverseFlipU3Ed__17__ctor_m4079922F9DE675B57C1ACC9C2BA6444C6529A648 (U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void stageSelectManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageSelectManager_StartGame_m789A5D18BE7CBC7F02598748C54F14CE76E97F76 (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Explosion::SetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_SetSize_mD5576ED637580E7ED946E5B554079B27B4240226 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, const RuntimeMethod* method) ;
// System.Void System.Action`1<Explosion>::Invoke(T)
inline void Action_1_Invoke_m6EEDD2C693AEC026D0FDD682523324CA43607C8F_inline (Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99* __this, Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99*, Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::get_Count()
inline int32_t Dictionary_2_get_Count_m984F1CDB5AA6B90E5D54FE50CC499BDB8A95A635 (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC*, const RuntimeMethod*))Dictionary_2_get_Count_m984F1CDB5AA6B90E5D54FE50CC499BDB8A95A635_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 stageSelectManager::getStage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t stageSelectManager_getStage_m80D1BB2C6459DB87742C9EEE9E5A7CBAAAC0B296_inline (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::get_Item(TKey)
inline float Dictionary_2_get_Item_m840539B2E0C2D5386BBE6608E396C0E99071EE3D (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  float (*) (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m840539B2E0C2D5386BBE6608E396C0E99071EE3D_gshared)(__this, ___0_key, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager/<Start>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__40__ctor_mC31C8F11257272165576EDB82CF6A304B632DF4B (U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager::setResultPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_setResultPanel_m13FBAF6A7BB94C899AD7654480851BA96F72A853 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void audioManager::playSpeedUpMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audioManager_playSpeedUpMusic_m66F0DC5AEA1FF683CB09E3BD3F489A648056029B (audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<card>()
inline card_tD5C541331908CF70357E72C9CD140BC92705AE4E* GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  card_tD5C541331908CF70357E72C9CD140BC92705AE4E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void card::closeCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_closeCard_m8A3508A8E6A2123CEE6251A8D00E623574D8B896 (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, float ___0_delayTime, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::CoVerifyMatching(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_CoVerifyMatching_m770BF4303CA4981AE2FF0CBDCD58455F534C3C5B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, String_t* ___0_cardName, bool ___1_isCorrect, const RuntimeMethod* method) ;
// System.Void card::destroyCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_destroyCard_mB2A17FAAAF9C05AC97EB69ECBE6A8EDC398D2D1F (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void GameManager/<CoVerifyMatching>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoVerifyMatchingU3Ed__43__ctor_m3435E9B41881DE840339460845FBAB038A2BBF0D (U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___0_key, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___0_key, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void stageManager::SetInActiveCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageManager_SetInActiveCards_m969D438D02B68C048C96A78B178A3F59E1BA47F7 (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, const RuntimeMethod* method) ;
// System.Void stageManager::selectStage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageManager_selectStage_m56DABDA9BAF89C4D6BC44F8714684EC43247A26D (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, int32_t ___0_stage, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// T ObjectPool`1<TouchParticle>::GetObject()
inline TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* ObjectPool_1_GetObject_m496EE67E2E90D0AEAE53477546F17AEC90275A34 (ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641* __this, const RuntimeMethod* method)
{
	return ((  TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* (*) (ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641*, const RuntimeMethod*))ObjectPool_1_GetObject_mB05CAB9C80568E7B5C6ACAC62783453233FA7166_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void stageSelectManager::setStage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageSelectManager_setStage_mAF3C6F3C6AD993E0F8F1CD118BA37CAA32A1C139 (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<TouchParticle>(System.String)
inline TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* Resources_Load_TisTouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1_mDB88FA29810573C84DD4DD7E71C542A67B75D89F (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void ObjectPool`1<TouchParticle>::.ctor(T,UnityEngine.Transform,System.Int32)
inline void ObjectPool_1__ctor_m77D1E43182CCD548B1D6C78C5D8F35B154E76615 (ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641* __this, TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* ___0_t, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_trans, int32_t ___2_initCount, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641*, TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_mF60299D848F34775723F06C81547B7BF7ABD5EC6_gshared)(__this, ___0_t, ___1_trans, ___2_initCount, method);
}
// T UnityEngine.Resources::Load<Explosion>(System.String)
inline Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* Resources_Load_TisExplosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847_m492DAC8CF4E1C4720FFA9966CA77DDFADC77EB80 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void ObjectPool`1<Explosion>::.ctor(T,UnityEngine.Transform,System.Int32)
inline void ObjectPool_1__ctor_mBABF9E5337610DDE4996E20B1F8A4EFD43BDFA81 (ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5* __this, Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* ___0_t, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_trans, int32_t ___2_initCount, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5*, Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_mF60299D848F34775723F06C81547B7BF7ABD5EC6_gshared)(__this, ___0_t, ___1_trans, ___2_initCount, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2BDAB666DF2DAB54DFF282A66818CE5DBCE0356F (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* __this, int32_t ___0_key, float ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC*, int32_t, float, const RuntimeMethod*))Dictionary_2_Add_m2BDAB666DF2DAB54DFF282A66818CE5DBCE0356F_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Func`2<System.Int32,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m21E85B4040A96377ECFBA2A1C40E3A1C0EF3EF7F (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m21E85B4040A96377ECFBA2A1C40E3A1C0EF3EF7F_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Int32,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F (RuntimeObject* ___0_source, Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* ___1_keySelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF*, const RuntimeMethod*))Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_gshared)(___0_source, ___1_keySelector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_gshared)(___0_source, method);
}
// T[] UnityEngine.Resources::LoadAll<UnityEngine.Sprite>(System.String)
inline SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m69B3BC41DB42071369375275587F5A5FF5040487_gshared)(___0_path, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_onUnitSphere_mA7FD531C3043945E5EA290F670E79A78EFAC0D92 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Collections.IEnumerator stageManager::CoMoveOffsetPosition(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* stageManager_CoMoveOffsetPosition_mA729F3D2BB8A1165D2ABA58970605520220AA9AA (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_cardTrans, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_destination, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<card>::Add(T)
inline void List_1_Add_m37632393A87AD3B4D83D5AC016CBA385D2BC98AE_inline (List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* __this, card_tD5C541331908CF70357E72C9CD140BC92705AE4E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242*, card_tD5C541331908CF70357E72C9CD140BC92705AE4E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<card>::GetEnumerator()
inline Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7 List_1_GetEnumerator_mB7F66C85B203206BAD1D61ACC96F7DBFF4A5134C (List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7 (*) (List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<card>::Dispose()
inline void Enumerator_Dispose_m9A7CA8FC1B6C77E3026EDAA92D0D834525D624D0 (Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<card>::get_Current()
inline card_tD5C541331908CF70357E72C9CD140BC92705AE4E* Enumerator_get_Current_mEDF585625A887A87FFFBD2D47E174660AC8AC163_inline (Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7* __this, const RuntimeMethod* method)
{
	return ((  card_tD5C541331908CF70357E72C9CD140BC92705AE4E* (*) (Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void card::SetButtonInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_SetButtonInactive_m8FD5966E381A8664EBE76333B420F5E46CC663EC (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<card>::MoveNext()
inline bool Enumerator_MoveNext_m3B7DEE69BA76028D04B976F3961387A9C020B30A (Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<card>::Remove(T)
inline bool List_1_Remove_m8EC4BBDABB9537C0ED3E0BA6DCDF55C5E565AC65 (List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* __this, card_tD5C541331908CF70357E72C9CD140BC92705AE4E* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242*, card_tD5C541331908CF70357E72C9CD140BC92705AE4E*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void stageManager/<CoMoveOffsetPosition>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoMoveOffsetPositionU3Ed__16__ctor_m7789B78D706AF3174F7A9594452B155A1B489FF9 (U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::.ctor()
inline void Dictionary_2__ctor_m3B9BDFABC3A31681FBD8FFAD9CDFC3EFE531259E (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC*, const RuntimeMethod*))Dictionary_2__ctor_m3B9BDFABC3A31681FBD8FFAD9CDFC3EFE531259E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<card>::.ctor()
inline void List_1__ctor_mDB8C94110CBF8BD3309899C08D40288B211C566E (List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void stageManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB7DFFC4C4B6C144EC7F5481801697BDBBB92C31E (U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void stageSelectManager::Fade(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageSelectManager_Fade_m16513CA7919AC1901CD0C30AFA05DE12A0F2A76A (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Collections.IEnumerator stageSelectManager::CoFade(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* stageSelectManager_CoFade_m5738EC36ACB75987BED51B0E17E2EFEE9348DDF6 (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void stageSelectManager/<CoFade>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoFadeU3Ed__11__ctor_m43D554856C5040D73CFA18BF19BB719A12A7D794 (U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300 (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TouchParticle::CoRemainWhile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchParticle_CoRemainWhile_m84D861B7F7081294FCF3A488CC2EAF97299B00CA (TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<TouchParticle>::Invoke(T)
inline void Action_1_Invoke_mFC0D28D4FB8E7745D0A2A1554909069ED7DC9864_inline (Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345* __this, TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345*, TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void TouchParticle/<CoRemainWhile>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoRemainWhileU3Ed__6__ctor_m8A49E35C3FE8DA285664430DEBEC7B2E12FE1970 (U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void aboutGameBtn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aboutGameBtn_Start_m4FBF8E1E010A3323449600E77BD273AB48547061 (aboutGameBtn_t22E0B7864C5B18915C990C755E1832CB2E92343E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void aboutGameBtn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aboutGameBtn_Update_m959650AD3FAAFD013B1CD72AE50467A08EB33669 (aboutGameBtn_t22E0B7864C5B18915C990C755E1832CB2E92343E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void aboutGameBtn::openAboutGamePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aboutGameBtn_openAboutGamePanel_m3F5BC4C9F5DC31194E2EC0DBC7ED5199E7995267 (aboutGameBtn_t22E0B7864C5B18915C990C755E1832CB2E92343E* __this, const RuntimeMethod* method) 
{
	{
		// aboutGamePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___aboutGamePanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void aboutGameBtn::closeAboutGamePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aboutGameBtn_closeAboutGamePanel_m5AE1667EBEE46379842BFFFE88FE53479997830C (aboutGameBtn_t22E0B7864C5B18915C990C755E1832CB2E92343E* __this, const RuntimeMethod* method) 
{
	{
		// aboutGamePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___aboutGamePanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void aboutGameBtn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aboutGameBtn__ctor_mD03F1D5CAF3946BA34E44A39C85FB2B2CB5611B4 (aboutGameBtn_t22E0B7864C5B18915C990C755E1832CB2E92343E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void audioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audioManager_Awake_m3B80DFD7BCA08D865844FE3E5B330EC44CA8BED9 (audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (A == null) A = this;
		audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13* L_0 = ((audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_StaticFields*)il2cpp_codegen_static_fields_for(audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_il2cpp_TypeInfo_var))->___A_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (A == null) A = this;
		((audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_StaticFields*)il2cpp_codegen_static_fields_for(audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_il2cpp_TypeInfo_var))->___A_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_StaticFields*)il2cpp_codegen_static_fields_for(audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_il2cpp_TypeInfo_var))->___A_7), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void audioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audioManager_Start_m44C6AF50AE875B6046895063B6BACC16D988DCF4 (audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.clip = bgmusic;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___bgmusic_4;
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_6;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void audioManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audioManager_Update_mB3E22C5948F95DC97CCB3D1A5808BF0DA7538243 (audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void audioManager::playSpeedUpMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audioManager_playSpeedUpMusic_m66F0DC5AEA1FF683CB09E3BD3F489A648056029B (audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.clip = speedUpmusic;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___speedUpmusic_5;
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_6;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void audioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audioManager__ctor_mD13DB70B51892DDCC8A645E513C2586C2FA9B561 (audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void card::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_Start_mD04C248964A34DCB669CD02E69F21BE284494408 (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clickBtn = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___clickBtn_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickBtn_11), (void*)L_0);
		// frontTransform = transform.Find("front");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D, NULL);
		__this->___frontTransform_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frontTransform_9), (void*)L_2);
		// backTransform = transform.Find("back");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, NULL);
		__this->___backTransform_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backTransform_10), (void*)L_4);
		// }
		return;
	}
}
// System.Void card::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_Update_mA7B34AB1C9BAB66ED8CF4369CE1524A58F9E6993 (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void card::openCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_openCard_mD06E62B289FA832CD5F8737CCC1607BCEEE64621 (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource.PlayOneShot(flip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___flip_5;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// StartCoroutine(CoFlip());
		RuntimeObject* L_2;
		L_2 = card_CoFlip_m67A55779A8C2DFA2229872D68B3D76AD582F1410(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// if (GameManager.I.firstCard == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___I_26;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___firstCard_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// GameManager.I.firstCard = gameObject;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___I_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		L_7->___firstCard_27 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___firstCard_27), (void*)L_8);
		return;
	}

IL_0041:
	{
		// GameManager.I.secondCard = gameObject;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___I_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		L_9->___secondCard_28 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___secondCard_28), (void*)L_10);
		// GameManager.I.isMatched();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___I_26;
		NullCheck(L_11);
		GameManager_isMatched_m8D599EABB819E309EE2376C1E6DD5AB72489BB03(L_11, NULL);
		// }
		return;
	}
}
// System.Void card::destroyCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_destroyCard_mB2A17FAAAF9C05AC97EB69ECBE6A8EDC398D2D1F (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0273680B3107EAA25513934A67F69AF51E0B3082);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("destroyCardInvoke", 1.0f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral0273680B3107EAA25513934A67F69AF51E0B3082, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void card::destroyCardInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_destroyCardInvoke_m4AE0D72A7895F8B2E6EF3B339A0DA2E9FF069578 (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_GetObject_mDF78A71253E859BD9BE1FCF1BDDB7A65282AF787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ObjectPooler.I.explosionPool.GetObject().transform.position = transform.position;
		ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* L_0 = ((ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var))->___I_4;
		NullCheck(L_0);
		ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5* L_1 = L_0->___explosionPool_6;
		NullCheck(L_1);
		Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* L_2;
		L_2 = ObjectPool_1_GetObject_mDF78A71253E859BD9BE1FCF1BDDB7A65282AF787(L_1, ObjectPool_1_GetObject_mDF78A71253E859BD9BE1FCF1BDDB7A65282AF787_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_5, NULL);
		// stageManager.S.RemoveCard(this);
		stageManager_t549D281035189BBC400D73397FE08178D59E2631* L_6 = ((stageManager_t549D281035189BBC400D73397FE08178D59E2631_StaticFields*)il2cpp_codegen_static_fields_for(stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var))->___S_11;
		NullCheck(L_6);
		stageManager_RemoveCard_m964FC312D34D51D446D1B55106E3D88C52698A3D(L_6, __this, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// }
		return;
	}
}
// System.Void card::closeCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_closeCard_m8A3508A8E6A2123CEE6251A8D00E623574D8B896 (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, float ___0_delayTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAF4D67D78B55FF0B8A62F2B1CFEC43222ADA427);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("closeCardInvoke", delayTime);
		float L_0 = ___0_delayTime;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralFAF4D67D78B55FF0B8A62F2B1CFEC43222ADA427, L_0, NULL);
		// }
		return;
	}
}
// System.Void card::SetButtonInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_SetButtonInactive_m8FD5966E381A8664EBE76333B420F5E46CC663EC (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) 
{
	{
		// clickBtn.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___clickBtn_11;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void card::closeCardInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card_closeCardInvoke_m1A1CEC5EEA2DE70B8BFABAC1A4DCA6CEEE53A745 (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(CoReverseFlip());
		RuntimeObject* L_0;
		L_0 = card_CoReverseFlip_mAD35A1D58D990C05927DB21112A37DCB18396AAA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// backTransform.GetComponent<SpriteRenderer>().color = new Color(0.7f, 0.7f, 0.7f, 1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___backTransform_10;
		NullCheck(L_2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_2, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), (0.699999988f), (0.699999988f), (0.699999988f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator card::CoFlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* card_CoFlip_m67A55779A8C2DFA2229872D68B3D76AD582F1410 (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2* L_0 = (U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2*)il2cpp_codegen_object_new(U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoFlipU3Ed__16__ctor_m018FD94D3AC9E6E94A98FDF0512F60DB690CB7C4(L_0, 0, NULL);
		U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator card::CoReverseFlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* card_CoReverseFlip_mAD35A1D58D990C05927DB21112A37DCB18396AAA (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748* L_0 = (U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748*)il2cpp_codegen_object_new(U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoReverseFlipU3Ed__17__ctor_m4079922F9DE675B57C1ACC9C2BA6444C6529A648(L_0, 0, NULL);
		U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void card::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void card__ctor_mDE2C546118E8AFA27DF00B20DDB55C846B696CEC (card_tD5C541331908CF70357E72C9CD140BC92705AE4E* __this, const RuntimeMethod* method) 
{
	{
		// public float flipRotation = 90f;
		__this->___flipRotation_7 = (90.0f);
		// public float flipSpeed = 200f;
		__this->___flipSpeed_8 = (200.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void card/<CoFlip>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoFlipU3Ed__16__ctor_m018FD94D3AC9E6E94A98FDF0512F60DB690CB7C4 (U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void card/<CoFlip>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoFlipU3Ed__16_System_IDisposable_Dispose_m9C17D220AC18A0381E2884DE364CE93A1F005355 (U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean card/<CoFlip>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoFlipU3Ed__16_MoveNext_mD1EC88BA5FB019EBB931D9EF5CBB0C6ECAF0A570 (U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	card_tD5C541331908CF70357E72C9CD140BC92705AE4E* V_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_01a1;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// anim.SetBool("isOpen", true);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_3 = V_1;
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = L_3->___anim_4;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C, (bool)1, NULL);
		// float ratio = 0f;
		__this->___U3CratioU3E5__2_3 = (0.0f);
		// Vector3 backRotation = backTransform.rotation.eulerAngles;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_5 = V_1;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5->___backTransform_10;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		V_2 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		__this->___U3CbackRotationU3E5__3_4 = L_8;
		goto IL_00dd;
	}

IL_0060:
	{
		// ratio += Time.deltaTime * flipSpeed;
		float L_9 = __this->___U3CratioU3E5__2_3;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___flipSpeed_8;
		__this->___U3CratioU3E5__2_3 = ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_10, L_12))));
		// backRotation.y = ratio;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___U3CbackRotationU3E5__3_4);
		float L_14 = __this->___U3CratioU3E5__2_3;
		L_13->___y_3 = L_14;
		// backRotation.y = Mathf.Clamp(backRotation.y, 0, flipRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___U3CbackRotationU3E5__3_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___U3CbackRotationU3E5__3_4);
		float L_17 = L_16->___y_3;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___flipRotation_7;
		float L_20;
		L_20 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_17, (0.0f), L_19, NULL);
		L_15->___y_3 = L_20;
		// backTransform.rotation = Quaternion.Euler(backRotation);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_21 = V_1;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___backTransform_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___U3CbackRotationU3E5__3_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_23, NULL);
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_24, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d6:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00dd:
	{
		// while (ratio < flipRotation)
		float L_25 = __this->___U3CratioU3E5__2_3;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->___flipRotation_7;
		if ((((float)L_25) < ((float)L_27)))
		{
			goto IL_0060;
		}
	}
	{
		// frontTransform.gameObject.SetActive(true);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_28 = V_1;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28->___frontTransform_9;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		// backTransform.gameObject.SetActive(false);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_31 = V_1;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = L_31->___backTransform_10;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// Vector3 frontRotation = frontTransform.rotation.eulerAngles;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_34 = V_1;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = L_34->___frontTransform_9;
		NullCheck(L_35);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_35, NULL);
		V_2 = L_36;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		__this->___U3CfrontRotationU3E5__4_5 = L_37;
		goto IL_01a8;
	}

IL_012b:
	{
		// ratio -= Time.deltaTime * flipSpeed;
		float L_38 = __this->___U3CratioU3E5__2_3;
		float L_39;
		L_39 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_40 = V_1;
		NullCheck(L_40);
		float L_41 = L_40->___flipSpeed_8;
		__this->___U3CratioU3E5__2_3 = ((float)il2cpp_codegen_subtract(L_38, ((float)il2cpp_codegen_multiply(L_39, L_41))));
		// frontRotation.y = ratio;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&__this->___U3CfrontRotationU3E5__4_5);
		float L_43 = __this->___U3CratioU3E5__2_3;
		L_42->___y_3 = L_43;
		// frontRotation.y = Mathf.Clamp(frontRotation.y, 0, flipRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___U3CfrontRotationU3E5__4_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = (&__this->___U3CfrontRotationU3E5__4_5);
		float L_46 = L_45->___y_3;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_47 = V_1;
		NullCheck(L_47);
		float L_48 = L_47->___flipRotation_7;
		float L_49;
		L_49 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_46, (0.0f), L_48, NULL);
		L_44->___y_3 = L_49;
		// frontTransform.rotation = Quaternion.Euler(frontRotation);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_50 = V_1;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = L_50->___frontTransform_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = __this->___U3CfrontRotationU3E5__4_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_52, NULL);
		NullCheck(L_51);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_51, L_53, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01a1:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01a8:
	{
		// while (ratio > 0)
		float L_54 = __this->___U3CratioU3E5__2_3;
		if ((((float)L_54) > ((float)(0.0f))))
		{
			goto IL_012b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object card/<CoFlip>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoFlipU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB5E37BD3DB412DF6B327F41C7ED0E343E581B213 (U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void card/<CoFlip>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoFlipU3Ed__16_System_Collections_IEnumerator_Reset_m73763338210D40D27DD2E737F581FFF7F7A189B1 (U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoFlipU3Ed__16_System_Collections_IEnumerator_Reset_m73763338210D40D27DD2E737F581FFF7F7A189B1_RuntimeMethod_var)));
	}
}
// System.Object card/<CoFlip>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoFlipU3Ed__16_System_Collections_IEnumerator_get_Current_m48B90517707503D593CDFC065792E378F3B45900 (U3CCoFlipU3Ed__16_tF51E1D76B1E07173A6045F2CEBB12BA816773EF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void card/<CoReverseFlip>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoReverseFlipU3Ed__17__ctor_m4079922F9DE675B57C1ACC9C2BA6444C6529A648 (U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void card/<CoReverseFlip>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoReverseFlipU3Ed__17_System_IDisposable_Dispose_mD56334695B99922175CC18A4EF24582CA0A2D48A (U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean card/<CoReverseFlip>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoReverseFlipU3Ed__17_MoveNext_m03C78B25CA969F004705F44B5B10476EBC986C22 (U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	card_tD5C541331908CF70357E72C9CD140BC92705AE4E* V_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_009f;
			}
			case 2:
			{
				goto IL_0141;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float ratio = 0f;
		__this->___U3CratioU3E5__2_3 = (0.0f);
		// Vector3 frontRotation = frontTransform.rotation.eulerAngles;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_3 = V_1;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___frontTransform_9;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		V_2 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		__this->___U3CfrontRotationU3E5__3_4 = L_6;
		goto IL_00a6;
	}

IL_004f:
	{
		// ratio += Time.deltaTime * flipSpeed;
		float L_7 = __this->___U3CratioU3E5__2_3;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___flipSpeed_8;
		__this->___U3CratioU3E5__2_3 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_8, L_10))));
		// frontRotation.y = ratio;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___U3CfrontRotationU3E5__3_4);
		float L_12 = __this->___U3CratioU3E5__2_3;
		L_11->___y_3 = L_12;
		// frontTransform.rotation = Quaternion.Euler(frontRotation);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_13 = V_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13->___frontTransform_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___U3CfrontRotationU3E5__3_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_15, NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_16, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a6:
	{
		// while (ratio < flipRotation)
		float L_17 = __this->___U3CratioU3E5__2_3;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___flipRotation_7;
		if ((((float)L_17) < ((float)L_19)))
		{
			goto IL_004f;
		}
	}
	{
		// frontTransform.gameObject.SetActive(false);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_20 = V_1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = L_20->___frontTransform_9;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// backTransform.gameObject.SetActive(true);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_23 = V_1;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23->___backTransform_10;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
		// Vector3 backRotation = backTransform.rotation.eulerAngles;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_26 = V_1;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = L_26->___backTransform_10;
		NullCheck(L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		V_2 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		__this->___U3CbackRotationU3E5__4_5 = L_29;
		goto IL_0148;
	}

IL_00f1:
	{
		// ratio -= Time.deltaTime * flipSpeed;
		float L_30 = __this->___U3CratioU3E5__2_3;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_32 = V_1;
		NullCheck(L_32);
		float L_33 = L_32->___flipSpeed_8;
		__this->___U3CratioU3E5__2_3 = ((float)il2cpp_codegen_subtract(L_30, ((float)il2cpp_codegen_multiply(L_31, L_33))));
		// backRotation.y = ratio;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&__this->___U3CbackRotationU3E5__4_5);
		float L_35 = __this->___U3CratioU3E5__2_3;
		L_34->___y_3 = L_35;
		// backTransform.rotation = Quaternion.Euler(backRotation);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_36 = V_1;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = L_36->___backTransform_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___U3CbackRotationU3E5__4_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_38, NULL);
		NullCheck(L_37);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_37, L_39, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0141:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0148:
	{
		// while (ratio > 0)
		float L_40 = __this->___U3CratioU3E5__2_3;
		if ((((float)L_40) > ((float)(0.0f))))
		{
			goto IL_00f1;
		}
	}
	{
		// anim.SetBool("isOpen", false);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_41 = V_1;
		NullCheck(L_41);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42 = L_41->___anim_4;
		NullCheck(L_42);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_42, _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object card/<CoReverseFlip>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoReverseFlipU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m33EBC44B892F6C56904F261560E67F0E335DA06A (U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void card/<CoReverseFlip>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoReverseFlipU3Ed__17_System_Collections_IEnumerator_Reset_m3048B9FB29D5239411C16254623C310F1BF98BF8 (U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoReverseFlipU3Ed__17_System_Collections_IEnumerator_Reset_m3048B9FB29D5239411C16254623C310F1BF98BF8_RuntimeMethod_var)));
	}
}
// System.Object card/<CoReverseFlip>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoReverseFlipU3Ed__17_System_Collections_IEnumerator_get_Current_m30A5BF94973D50EA35D7002AA2ACA11CF3196C73 (U3CCoReverseFlipU3Ed__17_t58F562869770A3BBD94CBB53C9A002BCF2196748* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void endText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void endText_Start_m87D4F3AE1117D7AA92D2954EBE255D4F93975668 (endText_tB4573EF285E7E5397C9C784EA2AD0F5C0727E949* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void endText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void endText_Update_m32B6922A58CB01E31049B230992B2A5AD817F179 (endText_tB4573EF285E7E5397C9C784EA2AD0F5C0727E949* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void endText::ReGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void endText_ReGame_m6FDD2F8D8E7F47D39BF02FB76003167358459BAD (endText_tB4573EF285E7E5397C9C784EA2AD0F5C0727E949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stageSelectManager.SSM.StartGame();
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_0 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		NullCheck(L_0);
		stageSelectManager_StartGame_m789A5D18BE7CBC7F02598748C54F14CE76E97F76(L_0, NULL);
		// }
		return;
	}
}
// System.Void endText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void endText__ctor_mEA6E498DF96D290D06B8B5877A8DA558B17F0621 (endText_tB4573EF285E7E5397C9C784EA2AD0F5C0727E949* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Explosion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_Awake_mD15B2FDAB21C62E81D1E6D45B60785182AF3FB75 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Explosion::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_OnEnable_m1C7ED8023DA43AFCF9CFA0C65DBE18DC1383F830 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetSize();
		Explosion_SetSize_mD5576ED637580E7ED946E5B554079B27B4240226(__this, NULL);
		// animator.Play(EXPLOSION_PATH);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_5;
		NullCheck(L_0);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A, NULL);
		// }
		return;
	}
}
// System.Void Explosion::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_OnDisable_m4119E30FC02439DDBC759C0426AC61E7F1DDFAF0 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) 
{
	Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99* G_B2_0 = NULL;
	Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99* G_B1_0 = NULL;
	{
		// returnCallback?.Invoke(this);
		Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99* L_0 = __this->___returnCallback_4;
		Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_m6EEDD2C693AEC026D0FDD682523324CA43607C8F_inline(G_B2_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Explosion::SetReturnObject(System.Action`1<Explosion>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_SetReturnObject_m0942649C1B79E1F83C75241D64BF249F066C8631 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99* ___0_action, const RuntimeMethod* method) 
{
	{
		// returnCallback = action;
		Action_1_tDA6CC994649EDEB849E9AA83A891D0579338AC99* L_0 = ___0_action;
		__this->___returnCallback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___returnCallback_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Explosion::SetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_SetSize_mD5576ED637580E7ED946E5B554079B27B4240226 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m984F1CDB5AA6B90E5D54FE50CC499BDB8A95A635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m840539B2E0C2D5386BBE6608E396C0E99071EE3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (stageManager.S.stageCardSizeDict.Count == 0)
		stageManager_t549D281035189BBC400D73397FE08178D59E2631* L_0 = ((stageManager_t549D281035189BBC400D73397FE08178D59E2631_StaticFields*)il2cpp_codegen_static_fields_for(stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var))->___S_11;
		NullCheck(L_0);
		Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* L_1 = L_0->___stageCardSizeDict_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m984F1CDB5AA6B90E5D54FE50CC499BDB8A95A635(L_1, Dictionary_2_get_Count_m984F1CDB5AA6B90E5D54FE50CC499BDB8A95A635_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// transform.localScale *= stageManager.S.stageCardSizeDict[stageSelectManager.SSM.getStage()];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		stageManager_t549D281035189BBC400D73397FE08178D59E2631* L_6 = ((stageManager_t549D281035189BBC400D73397FE08178D59E2631_StaticFields*)il2cpp_codegen_static_fields_for(stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var))->___S_11;
		NullCheck(L_6);
		Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* L_7 = L_6->___stageCardSizeDict_9;
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_8 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = stageSelectManager_getStage_m80D1BB2C6459DB87742C9EEE9E5A7CBAAAC0B296_inline(L_8, NULL);
		NullCheck(L_7);
		float L_10;
		L_10 = Dictionary_2_get_Item_m840539B2E0C2D5386BBE6608E396C0E99071EE3D(L_7, L_9, Dictionary_2_get_Item_m840539B2E0C2D5386BBE6608E396C0E99071EE3D_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_10, NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_11, NULL);
		// }
		return;
	}
}
// System.Void Explosion::OnExploded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_OnExploded_mF6F1505091C1B48CB8C63DDF6BD8ACF4A938238E (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Explosion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion__ctor_mCE002252DB377B0FC990478B1F6EE4414E832403 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FadeScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScene__ctor_mDDADCEEC6831689288EE12DB333017CA7571FAEC (FadeScene_t1C1B497B2AA475BEC1565B63F1EC2AA117CB0A20* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// I = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___I_26 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___I_26), (void*)__this);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_Start_m58C27E6CE0D95B2030420051813F7C8699EED8EA (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D* L_0 = (U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D*)il2cpp_codegen_object_new(U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__40__ctor_mC31C8F11257272165576EDB82CF6A304B632DF4B(L_0, 0, NULL);
		U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3366F334BA687B5F09C809786A02BFA24ADA8FE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isSettings)
		bool L_0 = __this->___isSettings_42;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (time <= 0f) // ?? ?? (??)
		float L_1 = __this->___time_13;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// setResultPanel();
		GameManager_setResultPanel_m13FBAF6A7BB94C899AD7654480851BA96F72A853(__this, NULL);
		goto IL_00bd;
	}

IL_002b:
	{
		// } else if (time <= 5f) {    // 5? ??? ?
		float L_2 = __this->___time_13;
		if ((!(((float)L_2) <= ((float)(5.0f)))))
		{
			goto IL_0090;
		}
	}
	{
		// if (!isSpeedUp)
		bool L_3 = __this->___isSpeedUp_18;
		if (L_3)
		{
			goto IL_0061;
		}
	}
	{
		// timeText.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___timeText_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// audioManager.A.playSpeedUpMusic();
		audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13* L_6 = ((audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_StaticFields*)il2cpp_codegen_static_fields_for(audioManager_t4D19496126B7D00B1C38E60E3AD941595D9BEF13_il2cpp_TypeInfo_var))->___A_7;
		NullCheck(L_6);
		audioManager_playSpeedUpMusic_m66F0DC5AEA1FF683CB09E3BD3F489A648056029B(L_6, NULL);
		// isSpeedUp = true;
		__this->___isSpeedUp_18 = (bool)1;
	}

IL_0061:
	{
		// time -= Time.deltaTime;
		float L_7 = __this->___time_13;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___time_13 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// timeText.text = time.ToString("N2");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___timeText_4;
		float* L_10 = (&__this->___time_13);
		String_t* L_11;
		L_11 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_10, _stringLiteral3366F334BA687B5F09C809786A02BFA24ADA8FE4, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		goto IL_00bd;
	}

IL_0090:
	{
		// time -= Time.deltaTime;
		float L_12 = __this->___time_13;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___time_13 = ((float)il2cpp_codegen_subtract(L_12, L_13));
		// timeText.text = time.ToString("N2");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___timeText_4;
		float* L_15 = (&__this->___time_13);
		String_t* L_16;
		L_16 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_15, _stringLiteral3366F334BA687B5F09C809786A02BFA24ADA8FE4, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
	}

IL_00bd:
	{
		// if (firstCard != null && secondCard == null)    // ? ?? ??? ???? ? ????? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___firstCard_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_016f;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___secondCard_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_016f;
		}
	}
	{
		// countdownTime -= Time.deltaTime;
		float L_21 = __this->___countdownTime_14;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___countdownTime_14 = ((float)il2cpp_codegen_subtract(L_21, L_22));
		// countdownText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___countdownText_11;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// countdownText.GetComponent<Text>().text = countdownTime.ToString("N0");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___countdownText_11;
		NullCheck(L_24);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25;
		L_25 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_24, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		float* L_26 = (&__this->___countdownTime_14);
		String_t* L_27;
		L_27 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_26, _stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_27);
		// if (countdownTime < 1f)
		float L_28 = __this->___countdownTime_14;
		if ((!(((float)L_28) < ((float)(1.0f)))))
		{
			goto IL_0186;
		}
	}
	{
		// firstCard.GetComponent<card>().closeCard(0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___firstCard_27;
		NullCheck(L_29);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_30;
		L_30 = GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811(L_29, GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var);
		NullCheck(L_30);
		card_closeCard_m8A3508A8E6A2123CEE6251A8D00E623574D8B896(L_30, (0.0f), NULL);
		// firstCard = null;
		__this->___firstCard_27 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstCard_27), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// audioSource.PlayOneShot(fail);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_31 = __this->___audioSource_31;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_32 = __this->___fail_30;
		NullCheck(L_31);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_31, L_32, NULL);
		// countdownText.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___countdownText_11;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// countdownTime = COUNTDOWN_TIME;
		__this->___countdownTime_14 = (3.0f);
		return;
	}

IL_016f:
	{
		// countdownTime = COUNTDOWN_TIME;
		__this->___countdownTime_14 = (3.0f);
		// countdownText.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___countdownText_11;
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
	}

IL_0186:
	{
		// }
		return;
	}
}
// System.Void GameManager::isMatched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_isMatched_m8D599EABB819E309EE2376C1E6DD5AB72489BB03 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADE3A5294FA17AC9817CF668B5F1FA54B374187D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC60C5FFA1D94D479D1FEADBE31225357CB60B464);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string firstCardImage = firstCard.transform.Find("front").GetComponent<SpriteRenderer>().sprite.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___firstCard_27;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D, NULL);
		NullCheck(L_2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_2, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_3);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4;
		L_4 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		V_0 = L_5;
		// string secondCardImage = secondCard.transform.Find("front").GetComponent<SpriteRenderer>().sprite.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___secondCard_28;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_7, _stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_8, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_9);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10;
		L_10 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		V_1 = L_11;
		// if (firstCardImage == secondCardImage)
		String_t* L_12 = V_0;
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		// StartCoroutine(CoVerifyMatching(firstCardImage, true));
		String_t* L_15 = V_0;
		RuntimeObject* L_16;
		L_16 = GameManager_CoVerifyMatching_m770BF4303CA4981AE2FF0CBDCD58455F534C3C5B(__this, L_15, (bool)1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_16, NULL);
		// audioSource.PlayOneShot(match);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = __this->___audioSource_31;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = __this->___match_29;
		NullCheck(L_18);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_18, L_19, NULL);
		// firstCard.GetComponent<card>().destroyCard();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___firstCard_27;
		NullCheck(L_20);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_21;
		L_21 = GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811(L_20, GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var);
		NullCheck(L_21);
		card_destroyCard_mB2A17FAAAF9C05AC97EB69ECBE6A8EDC398D2D1F(L_21, NULL);
		// secondCard.GetComponent<card>().destroyCard();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___secondCard_28;
		NullCheck(L_22);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_23;
		L_23 = GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811(L_22, GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var);
		NullCheck(L_23);
		card_destroyCard_mB2A17FAAAF9C05AC97EB69ECBE6A8EDC398D2D1F(L_23, NULL);
		// int cardsLeft = GameObject.Find("cards").transform.childCount;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralC60C5FFA1D94D479D1FEADBE31225357CB60B464, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_25, NULL);
		// Debug.Log(cardsLeft);
		int32_t L_27 = L_26;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_29, NULL);
		// if (cardsLeft == 2)
		if ((!(((uint32_t)L_27) == ((uint32_t)2))))
		{
			goto IL_012c;
		}
	}
	{
		// isSuccess = true;   // ???? ???
		__this->___isSuccess_19 = (bool)1;
		// Invoke("GameEnd", 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralADE3A5294FA17AC9817CF668B5F1FA54B374187D, (1.0f), NULL);
		goto IL_012c;
	}

IL_00ce:
	{
		// time -= 1f;     // ?? ??? ?? 1? ??
		float L_30 = __this->___time_13;
		__this->___time_13 = ((float)il2cpp_codegen_subtract(L_30, (1.0f)));
		// StartCoroutine(CoVerifyMatching(firstCardImage));
		String_t* L_31 = V_0;
		RuntimeObject* L_32;
		L_32 = GameManager_CoVerifyMatching_m770BF4303CA4981AE2FF0CBDCD58455F534C3C5B(__this, L_31, (bool)0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_33;
		L_33 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_32, NULL);
		// audioSource.PlayOneShot(fail);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_34 = __this->___audioSource_31;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_35 = __this->___fail_30;
		NullCheck(L_34);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_34, L_35, NULL);
		// firstCard.GetComponent<card>().closeCard(closeDelayTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___firstCard_27;
		NullCheck(L_36);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_37;
		L_37 = GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811(L_36, GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var);
		float L_38 = __this->___closeDelayTime_35;
		NullCheck(L_37);
		card_closeCard_m8A3508A8E6A2123CEE6251A8D00E623574D8B896(L_37, L_38, NULL);
		// secondCard.GetComponent<card>().closeCard(closeDelayTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___secondCard_28;
		NullCheck(L_39);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_40;
		L_40 = GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811(L_39, GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var);
		float L_41 = __this->___closeDelayTime_35;
		NullCheck(L_40);
		card_closeCard_m8A3508A8E6A2123CEE6251A8D00E623574D8B896(L_40, L_41, NULL);
	}

IL_012c:
	{
		// firstCard = null;
		__this->___firstCard_27 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstCard_27), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// secondCard = null;
		__this->___secondCard_28 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondCard_28), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// tryMatchCount++;    // ?? ?? ?? ???
		int32_t L_42 = __this->___tryMatchCount_15;
		__this->___tryMatchCount_15 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::CoVerifyMatching(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_CoVerifyMatching_m770BF4303CA4981AE2FF0CBDCD58455F534C3C5B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, String_t* ___0_cardName, bool ___1_isCorrect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* L_0 = (U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E*)il2cpp_codegen_object_new(U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoVerifyMatchingU3Ed__43__ctor_m3435E9B41881DE840339460845FBAB038A2BBF0D(L_0, 0, NULL);
		U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* L_2 = L_1;
		String_t* L_3 = ___0_cardName;
		NullCheck(L_2);
		L_2->___cardName_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___cardName_4), (void*)L_3);
		U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* L_4 = L_2;
		bool L_5 = ___1_isCorrect;
		NullCheck(L_4);
		L_4->___isCorrect_2 = L_5;
		return L_4;
	}
}
// System.Void GameManager::GameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameEnd_m8E762028644C7343E776234A8AD111962DA34D74 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B7DAFC5FC381C0298C881B144F68F58FABC62C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// if (isSuccess)  // ???? ???
		bool L_0 = __this->___isSuccess_19;
		if (!L_0)
		{
			goto IL_00ed;
		}
	}
	{
		// score += (int)time * 100;
		int32_t L_1 = __this->___score_16;
		float L_2 = __this->___time_13;
		__this->___score_16 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(L_2), ((int32_t)100)))));
		// int tryCntScore = MAX_TRYCOUNT_SCORE - ((tryMatchCount - 8) * 50);
		int32_t L_3 = __this->___tryMatchCount_15;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)1000), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_3, 8)), ((int32_t)50)))));
		// if (tryCntScore > 0) score += tryCntScore;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		// if (tryCntScore > 0) score += tryCntScore;
		int32_t L_5 = __this->___score_16;
		int32_t L_6 = V_0;
		__this->___score_16 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
	}

IL_0050:
	{
		// if (PlayerPrefs.HasKey(LOCKED_STAGE) && PlayerPrefs.GetInt(LOCKED_STAGE) < curStage)
		bool L_7;
		L_7 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, NULL);
		if (!L_7)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, NULL);
		int32_t L_9 = __this->___curStage_17;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_007e;
		}
	}
	{
		// PlayerPrefs.SetInt(LOCKED_STAGE, curStage);
		int32_t L_10 = __this->___curStage_17;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, L_10, NULL);
	}

IL_007e:
	{
		// if (PlayerPrefs.HasKey(BEST_SCORE) == false)
		bool L_11;
		L_11 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, NULL);
		if (L_11)
		{
			goto IL_009d;
		}
	}
	{
		// PlayerPrefs.SetFloat(BEST_SCORE, score);
		int32_t L_12 = __this->___score_16;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, ((float)L_12), NULL);
		goto IL_00c1;
	}

IL_009d:
	{
		// if (PlayerPrefs.GetFloat(BEST_SCORE) < score)
		float L_13;
		L_13 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, NULL);
		int32_t L_14 = __this->___score_16;
		if ((!(((float)L_13) < ((float)((float)L_14)))))
		{
			goto IL_00c1;
		}
	}
	{
		// PlayerPrefs.SetFloat(BEST_SCORE, score);
		int32_t L_15 = __this->___score_16;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, ((float)L_15), NULL);
	}

IL_00c1:
	{
		// float maxScore = PlayerPrefs.GetFloat(BEST_SCORE);
		float L_16;
		L_16 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, NULL);
		V_1 = L_16;
		// bestScoreText.text = "Best Score " + maxScore.ToString("N0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___bestScoreText_5;
		String_t* L_18;
		L_18 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_1), _stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4B7DAFC5FC381C0298C881B144F68F58FABC62C7, L_18, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
	}

IL_00ed:
	{
		// setResultPanel();
		GameManager_setResultPanel_m13FBAF6A7BB94C899AD7654480851BA96F72A853(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::retryGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_retryGame_m11076C2FA2BD8E102A8480E9DBD381FF099F6F2F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669C4C4316BB0D8800268D421965F7350B189F2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (curStage == 1)  // ???? 1
		int32_t L_0 = __this->___curStage_17;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		// SceneManager.LoadScene("MainScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, NULL);
		return;
	}

IL_0014:
	{
		// SceneManager.LoadScene("Stage2Scene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral669C4C4316BB0D8800268D421965F7350B189F2D, NULL);
		// }
		return;
	}
}
// System.Void GameManager::setResultPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_setResultPanel_m13FBAF6A7BB94C899AD7654480851BA96F72A853 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37E71CFCAB09AA69BDC6A68562FC08A0DFFDC837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E5A7AE29E55B0CECDBAE997BF96BC45AF8C234E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA7ABFC452D5BB4DD9DCD5432AE53F51D9FCFB22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA7C9A81684CAFD7E7FA823676FE4E730F56C1C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// resultPanel.SetActive(true);    // ?? ???
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___resultPanel_10;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// endText.GetComponent<Text>().text = isSuccess ? "??!" : "??!";  // ?? or ?? ???
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___endText_7;
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_1, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		bool L_3 = __this->___isSuccess_19;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = _stringLiteralAA7ABFC452D5BB4DD9DCD5432AE53F51D9FCFB22;
		G_B3_1 = G_B1_0;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = _stringLiteral37E71CFCAB09AA69BDC6A68562FC08A0DFFDC837;
		G_B3_1 = G_B2_0;
	}

IL_002b:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// tryMatchCountText.GetComponent<Text>().text = tryMatchCount + " ? ??";  // ?? ?? ?? ???
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___tryMatchCountText_8;
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_4, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		int32_t* L_6 = (&__this->___tryMatchCount_15);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteralCA7C9A81684CAFD7E7FA823676FE4E730F56C1C9, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// scoreText.GetComponent<Text>().text = "score " + score; // ?? ???
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___scoreText_9;
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10;
		L_10 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_9, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		int32_t* L_11 = (&__this->___score_16);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6E5A7AE29E55B0CECDBAE997BF96BC45AF8C234E, L_12, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// stageManager.S.SetInActiveCards();
		stageManager_t549D281035189BBC400D73397FE08178D59E2631* L_14 = ((stageManager_t549D281035189BBC400D73397FE08178D59E2631_StaticFields*)il2cpp_codegen_static_fields_for(stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var))->___S_11;
		NullCheck(L_14);
		stageManager_SetInActiveCards_m969D438D02B68C048C96A78B178A3F59E1BA47F7(L_14, NULL);
		// if (isSuccess && curStage == 1)
		bool L_15 = __this->___isSuccess_19;
		if (!L_15)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_16 = __this->___curStage_17;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}
	{
		// nextStageBtn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___nextStageBtn_12;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483CA30182E3D1B463EC385AEF9A03F3D98E0AD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int rtanSpriteSize = 500;
		__this->___rtanSpriteSize_33 = ((int32_t)500);
		// public float matchTextTime = 1f;
		__this->___matchTextTime_34 = (1.0f);
		// public float closeDelayTime = 0.5f;
		__this->___closeDelayTime_35 = (0.5f);
		// public string unCorrectMessage = "??";
		__this->___unCorrectMessage_36 = _stringLiteral483CA30182E3D1B463EC385AEF9A03F3D98E0AD8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unCorrectMessage_36), (void*)_stringLiteral483CA30182E3D1B463EC385AEF9A03F3D98E0AD8);
		// public float radius = 5f;
		__this->___radius_40 = (5.0f);
		// public float cardSettingTime = 1f;
		__this->___cardSettingTime_41 = (1.0f);
		// bool isSettings = true;
		__this->___isSettings_42 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<Start>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__40__ctor_mC31C8F11257272165576EDB82CF6A304B632DF4B (U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<Start>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__40_System_IDisposable_Dispose_mED41B8501CC4FB59628612216C7AD64FF8CE2970 (U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<Start>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__40_MoveNext_m86EBC73C6A71C900AE6EE12239E69DA57FDE3B7E (U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3366F334BA687B5F09C809786A02BFA24ADA8FE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B7DAFC5FC381C0298C881B144F68F58FABC62C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	float V_2 = 0.0f;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* G_B5_0 = NULL;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00f9;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// tryMatchCount = 0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		NullCheck(L_4);
		L_4->___tryMatchCount_15 = 0;
		// time = PLAY_TIME;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		NullCheck(L_5);
		L_5->___time_13 = (30.0f);
		// tryMatchCount = 0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		NullCheck(L_6);
		L_6->___tryMatchCount_15 = 0;
		// isSuccess = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = V_1;
		NullCheck(L_7);
		L_7->___isSuccess_19 = (bool)0;
		// score = 0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		NullCheck(L_8);
		L_8->___score_16 = 0;
		// countdownTime = COUNTDOWN_TIME;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = V_1;
		NullCheck(L_9);
		L_9->___countdownTime_14 = (3.0f);
		// curStage = stageSelectManager.SSM.getStage();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = V_1;
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_11 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = stageSelectManager_getStage_m80D1BB2C6459DB87742C9EEE9E5A7CBAAAC0B296_inline(L_11, NULL);
		NullCheck(L_10);
		L_10->___curStage_17 = L_12;
		// bestScoreText.text = "Best Score " + PlayerPrefs.GetFloat(BEST_SCORE).ToString("N0");
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = V_1;
		NullCheck(L_13);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = L_13->___bestScoreText_5;
		float L_15;
		L_15 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, NULL);
		V_2 = L_15;
		String_t* L_16;
		L_16 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_2), _stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4B7DAFC5FC381C0298C881B144F68F58FABC62C7, L_16, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_17);
		// time = (curStage == 1) ? PLAY_TIME : STAGE2_PLAY_TIME;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->___curStage_17;
		G_B4_0 = L_18;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			G_B5_0 = L_18;
			goto IL_00aa;
		}
	}
	{
		G_B6_0 = (60.0f);
		G_B6_1 = G_B4_0;
		goto IL_00af;
	}

IL_00aa:
	{
		G_B6_0 = (30.0f);
		G_B6_1 = G_B5_0;
	}

IL_00af:
	{
		NullCheck(G_B6_1);
		G_B6_1->___time_13 = G_B6_0;
		// timeText.text = time.ToString("N2");
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_21 = V_1;
		NullCheck(L_21);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = L_21->___timeText_4;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23 = V_1;
		NullCheck(L_23);
		float* L_24 = (&L_23->___time_13);
		String_t* L_25;
		L_25 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_24, _stringLiteral3366F334BA687B5F09C809786A02BFA24ADA8FE4, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_25);
		// stageManager.S.selectStage(curStage);
		stageManager_t549D281035189BBC400D73397FE08178D59E2631* L_26 = ((stageManager_t549D281035189BBC400D73397FE08178D59E2631_StaticFields*)il2cpp_codegen_static_fields_for(stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var))->___S_11;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = L_27->___curStage_17;
		NullCheck(L_26);
		stageManager_selectStage_m56DABDA9BAF89C4D6BC44F8714684EC43247A26D(L_26, L_28, NULL);
		// yield return new WaitForSeconds(cardSettingTime);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_29 = V_1;
		NullCheck(L_29);
		float L_30 = L_29->___cardSettingTime_41;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_31 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_31, L_30, NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00f9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isSettings = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_32 = V_1;
		NullCheck(L_32);
		L_32->___isSettings_42 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<Start>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m37DD490592E564F7A88204A526F2BA27C064C640 (U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<Start>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__40_System_Collections_IEnumerator_Reset_m344042DAB4E88A075B3EAD1EB1C0C59FA2AFC403 (U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__40_System_Collections_IEnumerator_Reset_m344042DAB4E88A075B3EAD1EB1C0C59FA2AFC403_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<Start>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__40_System_Collections_IEnumerator_get_Current_m4EC4A59ABC22A091FC9312F76B289EB068CC0720 (U3CStartU3Ed__40_tEBC4C5AF5B7440B5ABEFB5253818F3518E94A22D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<CoVerifyMatching>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoVerifyMatchingU3Ed__43__ctor_m3435E9B41881DE840339460845FBAB038A2BBF0D (U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<CoVerifyMatching>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoVerifyMatchingU3Ed__43_System_IDisposable_Dispose_mFC3E03A33CBFF54E342980953017981F23D39479 (U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<CoVerifyMatching>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoVerifyMatchingU3Ed__43_MoveNext_mACAAA95D88F0D06AE8DBFA6BF591E02C5160D28A (U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (isCorrect)
		bool L_4 = __this->___isCorrect_2;
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		// matchText.text = cardName.Split('_')[0];
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		NullCheck(L_5);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = L_5->___matchText_32;
		String_t* L_7 = __this->___cardName_4;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_7, ((int32_t)95), 0, NULL);
		NullCheck(L_8);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		// matchText.color = correctColor;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = V_1;
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___matchText_32;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = V_1;
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = L_13->___correctColor_37;
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_14);
		goto IL_0079;
	}

IL_0057:
	{
		// matchText.text = unCorrectMessage;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15 = V_1;
		NullCheck(L_15);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = L_15->___matchText_32;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = L_17->___unCorrectMessage_36;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
		// matchText.color = unCorrectColor;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19 = V_1;
		NullCheck(L_19);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = L_19->___matchText_32;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_21 = V_1;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = L_21->___unCorrectColor_38;
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_22);
	}

IL_0079:
	{
		// matchText.gameObject.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23 = V_1;
		NullCheck(L_23);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = L_23->___matchText_32;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
		// yield return new WaitForSeconds(matchTextTime);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->___matchTextTime_34;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_28 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_28, L_27, NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// matchText.gameObject.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_29 = V_1;
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29->___matchText_32;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<CoVerifyMatching>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoVerifyMatchingU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m881DF5197C4A54D76DB77667BD153F2FC65C19FA (U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<CoVerifyMatching>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoVerifyMatchingU3Ed__43_System_Collections_IEnumerator_Reset_mCE7427741213787C9FCE890B8361E68006B42E1B (U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoVerifyMatchingU3Ed__43_System_Collections_IEnumerator_Reset_mCE7427741213787C9FCE890B8361E68006B42E1B_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<CoVerifyMatching>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoVerifyMatchingU3Ed__43_System_Collections_IEnumerator_get_Current_m14E410B36E994345B96246F11F94A184630AD741 (U3CCoVerifyMatchingU3Ed__43_t48BF0817BEFE4A5D42F2735D52EDCCE99C31F08E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void goHomeBtn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void goHomeBtn_Start_m9FAFB64DA4DAF890ECD8AAF902045044DEBF7C96 (goHomeBtn_t6D8C85F155A5F2D30E3B0683417442CF6B97027F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void goHomeBtn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void goHomeBtn_Update_mE605C3D40C4F227B62F000BB34E8FAB6AF169C4A (goHomeBtn_t6D8C85F155A5F2D30E3B0683417442CF6B97027F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void goHomeBtn::goHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void goHomeBtn_goHome_mEB5014EEAFC64960F16C4AF58453176112EDC807 (goHomeBtn_t6D8C85F155A5F2D30E3B0683417442CF6B97027F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral793124C2C69F7C5AD956B8E7C24C95DFD06780A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("StartScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral793124C2C69F7C5AD956B8E7C24C95DFD06780A5, NULL);
		// }
		return;
	}
}
// System.Void goHomeBtn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void goHomeBtn__ctor_mD3C50927FDCC21D7813A805FC529EBD413530940 (goHomeBtn_t6D8C85F155A5F2D30E3B0683417442CF6B97027F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Awake_mCFCABAA5EC85B074EEBE8095E9139175D6526D9F (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// I = this;
		((InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_StaticFields*)il2cpp_codegen_static_fields_for(InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_il2cpp_TypeInfo_var))->___I_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_StaticFields*)il2cpp_codegen_static_fields_for(InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677_il2cpp_TypeInfo_var))->___I_4), (void*)__this);
		// mainCam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___mainCam_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCam_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void InputManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Update_m5CEF4B04E7336E0F24B004F98C71799F3DFD5656 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_GetObject_m496EE67E2E90D0AEAE53477546F17AEC90275A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		// touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		__this->___touch_5 = L_1;
		// if (touch.phase == TouchPhase.Began)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_2 = (&__this->___touch_5);
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(L_2, NULL);
		if (L_3)
		{
			goto IL_0055;
		}
	}
	{
		// TouchParticle particle = ObjectPooler.I.touchPool.GetObject();
		ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* L_4 = ((ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var))->___I_4;
		NullCheck(L_4);
		ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641* L_5 = L_4->___touchPool_5;
		NullCheck(L_5);
		TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* L_6;
		L_6 = ObjectPool_1_GetObject_m496EE67E2E90D0AEAE53477546F17AEC90275A34(L_5, ObjectPool_1_GetObject_m496EE67E2E90D0AEAE53477546F17AEC90275A34_RuntimeMethod_var);
		// particle.transform.position = mainCam.ScreenToWorldPoint(touch.position);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___mainCam_6;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_9 = (&__this->___touch_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_8, L_11, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_12, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_m52D2F3B9FA0D50C52BCC92486F49B300E9334C2A (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nextStageBtn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextStageBtn_Start_m7D05CDD95E834B7C3FBE4919EAD9FF4B3B864312 (nextStageBtn_tDE52BBEC717A51BFB2B652BED2960787EF2F27F1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void nextStageBtn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextStageBtn_Update_mD6F39ED48C09154F8B50C68FB28D7D13FEE07B53 (nextStageBtn_tDE52BBEC717A51BFB2B652BED2960787EF2F27F1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void nextStageBtn::goNextStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextStageBtn_goNextStage_mCDB50DA1BF525F92F65793038476510DE44BAE5E (nextStageBtn_tDE52BBEC717A51BFB2B652BED2960787EF2F27F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669C4C4316BB0D8800268D421965F7350B189F2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stageSelectManager.SSM.setStage(2);
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_0 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		NullCheck(L_0);
		stageSelectManager_setStage_mAF3C6F3C6AD993E0F8F1CD118BA37CAA32A1C139(L_0, 2, NULL);
		// SceneManager.LoadScene("Stage2Scene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral669C4C4316BB0D8800268D421965F7350B189F2D, NULL);
		// }
		return;
	}
}
// System.Void nextStageBtn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextStageBtn__ctor_mBFD632CC6C40DAEF5D8E368642114F4764F03107 (nextStageBtn_tDE52BBEC717A51BFB2B652BED2960787EF2F27F1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjectPooler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler_Awake_m393E0DFD5E306CDA8626947BDB21BA1137F728E4 (ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// I = this;
		((ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var))->___I_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var))->___I_4), (void*)__this);
		// }
		return;
	}
}
// System.Void ObjectPooler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler_Start_mD60EE041A1EC181953391A20F714D1B4D6573ABB (ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m77D1E43182CCD548B1D6C78C5D8F35B154E76615_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_mBABF9E5337610DDE4996E20B1F8A4EFD43BDFA81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisExplosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847_m492DAC8CF4E1C4720FFA9966CA77DDFADC77EB80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1_mDB88FA29810573C84DD4DD7E71C542A67B75D89F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0CE9B4DB130E3DCF0ADEB3EA7F7EB1D4A500264);
		s_Il2CppMethodInitialized = true;
	}
	TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* V_0 = NULL;
	Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* V_1 = NULL;
	{
		// TouchParticle touchPrefab = Resources.Load<TouchParticle>("TouchParticle");
		TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* L_0;
		L_0 = Resources_Load_TisTouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1_mDB88FA29810573C84DD4DD7E71C542A67B75D89F(_stringLiteralA0CE9B4DB130E3DCF0ADEB3EA7F7EB1D4A500264, Resources_Load_TisTouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1_mDB88FA29810573C84DD4DD7E71C542A67B75D89F_RuntimeMethod_var);
		V_0 = L_0;
		// touchPool = new ObjectPool<TouchParticle>(touchPrefab, transform, 10);
		TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641* L_3 = (ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641*)il2cpp_codegen_object_new(ObjectPool_1_tBD91214AB5EBC79C40C1B7863932F4E78C1E2641_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ObjectPool_1__ctor_m77D1E43182CCD548B1D6C78C5D8F35B154E76615(L_3, L_1, L_2, ((int32_t)10), ObjectPool_1__ctor_m77D1E43182CCD548B1D6C78C5D8F35B154E76615_RuntimeMethod_var);
		__this->___touchPool_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touchPool_5), (void*)L_3);
		// Explosion explosionPrefab = Resources.Load<Explosion>("Explosion");
		Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* L_4;
		L_4 = Resources_Load_TisExplosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847_m492DAC8CF4E1C4720FFA9966CA77DDFADC77EB80(_stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A, Resources_Load_TisExplosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847_m492DAC8CF4E1C4720FFA9966CA77DDFADC77EB80_RuntimeMethod_var);
		V_1 = L_4;
		// explosionPool = new ObjectPool<Explosion>(explosionPrefab, transform, 4);
		Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* L_5 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5* L_7 = (ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5*)il2cpp_codegen_object_new(ObjectPool_1_t265711D0080AC88D503F97B40A7F7514739274D5_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ObjectPool_1__ctor_mBABF9E5337610DDE4996E20B1F8A4EFD43BDFA81(L_7, L_5, L_6, 4, ObjectPool_1__ctor_mBABF9E5337610DDE4996E20B1F8A4EFD43BDFA81_RuntimeMethod_var);
		__this->___explosionPool_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___explosionPool_6), (void*)L_7);
		// }
		return;
	}
}
// System.Void ObjectPooler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler__ctor_m77595BC1D35A9F46ABADC80B791CBF16AE17D708 (ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void stageCatBtn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageCatBtn_Start_mABE0063C8263455762A09AA9020685785CE0B3BB (stageCatBtn_tA66DF49C3F788B29892373CBBB19BDCCDE17E7CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E030F50FB5C5E779E51BD17A1A9ED7BF68C5812);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFDF4F0BC4E24A3167446E6E9B2F006F3B8DFE3E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PlayerPrefs.HasKey(LOCKED_STAGE) || PlayerPrefs.GetInt(LOCKED_STAGE) == 0)
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, NULL);
		if (L_1)
		{
			goto IL_003a;
		}
	}

IL_0018:
	{
		// stageCatBtnImage.sprite = pixelcat;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___stageCatBtnImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___pixelcat_6;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// selectedStageText.text = "STAGE 1";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___selectedStageText_8;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralCFDF4F0BC4E24A3167446E6E9B2F006F3B8DFE3E);
		return;
	}

IL_003a:
	{
		// stageCatBtnImage.sprite = pixelcat_with_sunglasses;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___stageCatBtnImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___pixelcat_with_sunglasses_7;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// selectedStageText.text = "STAGE 2";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___selectedStageText_8;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral1E030F50FB5C5E779E51BD17A1A9ED7BF68C5812);
		// }
		return;
	}
}
// System.Void stageCatBtn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageCatBtn_Update_m89945D62682754316C52D623171CD75A751054B8 (stageCatBtn_tA66DF49C3F788B29892373CBBB19BDCCDE17E7CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E030F50FB5C5E779E51BD17A1A9ED7BF68C5812);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFDF4F0BC4E24A3167446E6E9B2F006F3B8DFE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (stageSelectManager.SSM.getStage() == 1)
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_0 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = stageSelectManager_getStage_m80D1BB2C6459DB87742C9EEE9E5A7CBAAAC0B296_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		// stageCatBtnImage.sprite = pixelcat;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___stageCatBtnImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___pixelcat_6;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// selectedStageText.text = "STAGE 1";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___selectedStageText_8;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralCFDF4F0BC4E24A3167446E6E9B2F006F3B8DFE3E);
		return;
	}

IL_002f:
	{
		// stageCatBtnImage.sprite = pixelcat_with_sunglasses;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___stageCatBtnImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___pixelcat_with_sunglasses_7;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// selectedStageText.text = "STAGE 2";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___selectedStageText_8;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral1E030F50FB5C5E779E51BD17A1A9ED7BF68C5812);
		// }
		return;
	}
}
// System.Void stageCatBtn::openSelectStagePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageCatBtn_openSelectStagePanel_m98157958BCB8F032707A4C1033FB73DD0CCD872C (stageCatBtn_tA66DF49C3F788B29892373CBBB19BDCCDE17E7CF* __this, const RuntimeMethod* method) 
{
	{
		// selectStagePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___selectStagePanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void stageCatBtn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageCatBtn__ctor_mB36000840ADE887DCAF91E655B047C9A6F1A0F16 (stageCatBtn_tA66DF49C3F788B29892373CBBB19BDCCDE17E7CF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void stageManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageManager_Awake_mC44C9C80BEB9E26ABD3D81DEAC125D1035EF6A0D (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// S = this;
		((stageManager_t549D281035189BBC400D73397FE08178D59E2631_StaticFields*)il2cpp_codegen_static_fields_for(stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var))->___S_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((stageManager_t549D281035189BBC400D73397FE08178D59E2631_StaticFields*)il2cpp_codegen_static_fields_for(stageManager_t549D281035189BBC400D73397FE08178D59E2631_il2cpp_TypeInfo_var))->___S_11), (void*)__this);
		// }
		return;
	}
}
// System.Void stageManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageManager_Start_mBF46C0FBE3D082938DB260F1A015DF5D7011CFB0 (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void stageManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageManager_Update_m0096378FCDE88309C87FD09C8ED8D1B5AC504E60 (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void stageManager::selectStage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageManager_selectStage_m56DABDA9BAF89C4D6BC44F8714684EC43247A26D (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, int32_t ___0_stage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2BDAB666DF2DAB54DFF282A66818CE5DBCE0356F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m840539B2E0C2D5386BBE6608E396C0E99071EE3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m37632393A87AD3B4D83D5AC016CBA385D2BC98AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CselectStageU3Eb__13_0_m9329D4305E88E552A9E9D4C68B9091370B3B409F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CselectStageU3Eb__13_1_mB1B5EA4DCA55293680BBC7DB3A9C30B71E0604CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57663CB5266DBA1BEBB7FB3341AEB409507261ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC60C5FFA1D94D479D1FEADBE31225357CB60B464);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_8 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_10;
	memset((&V_10), 0, sizeof(V_10));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_16 = NULL;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_19 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* G_B6_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B6_1 = NULL;
	Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* G_B5_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B5_1 = NULL;
	Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* G_B16_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B16_1 = NULL;
	Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* G_B15_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B15_1 = NULL;
	{
		// if (stage == 1)
		int32_t L_0 = ___0_stage;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_01b3;
		}
	}
	{
		// stageCardSizeDict.Add(stage, 1);
		Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* L_1 = __this->___stageCardSizeDict_9;
		int32_t L_2 = ___0_stage;
		NullCheck(L_1);
		Dictionary_2_Add_m2BDAB666DF2DAB54DFF282A66818CE5DBCE0356F(L_1, L_2, (1.0f), Dictionary_2_Add_m2BDAB666DF2DAB54DFF282A66818CE5DBCE0356F_RuntimeMethod_var);
		// int[] teams = new int[STAGE_1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_3;
		// for (int i = 0, j = 0; i < STAGE_1 - 1; i += 2, j++)
		V_2 = 0;
		// for (int i = 0, j = 0; i < STAGE_1 - 1; i += 2, j++)
		V_3 = 0;
		goto IL_0038;
	}

IL_0026:
	{
		// teams[i] = j;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_6);
		// teams[i + 1] = j;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1))), (int32_t)L_9);
		// for (int i = 0, j = 0; i < STAGE_1 - 1; i += 2, j++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 2));
		// for (int i = 0, j = 0; i < STAGE_1 - 1; i += 2, j++)
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0038:
	{
		// for (int i = 0, j = 0; i < STAGE_1 - 1; i += 2, j++)
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)15))))
		{
			goto IL_0026;
		}
	}
	{
		// teams = teams.OrderBy(item => Random.Range(-1.0f, 1.0f)).ToArray();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var);
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_14 = ((U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1;
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_15 = L_14;
		G_B5_0 = L_15;
		G_B5_1 = L_13;
		if (L_15)
		{
			G_B6_0 = L_15;
			G_B6_1 = L_13;
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var);
		U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F* L_16 = ((U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_17 = (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF*)il2cpp_codegen_object_new(Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_m21E85B4040A96377ECFBA2A1C40E3A1C0EF3EF7F(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3CselectStageU3Eb__13_0_m9329D4305E88E552A9E9D4C68B9091370B3B409F_RuntimeMethod_var), NULL);
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_18 = L_17;
		((U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1), (void*)L_18);
		G_B6_0 = L_18;
		G_B6_1 = G_B5_1;
	}

IL_005d:
	{
		RuntimeObject* L_19;
		L_19 = Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F((RuntimeObject*)G_B6_1, G_B6_0, Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20;
		L_20 = Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8(L_19, Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
		V_0 = L_20;
		// Sprite[] sprites = Resources.LoadAll<Sprite>(CARD_PATH);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_21;
		L_21 = Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E(_stringLiteral57663CB5266DBA1BEBB7FB3341AEB409507261ED, Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E_RuntimeMethod_var);
		V_1 = L_21;
		// for (int i = 0; i < 16; i++)
		V_4 = 0;
		goto IL_01a9;
	}

IL_007b:
	{
		// GameObject newCard = Instantiate(card);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___card_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_5 = L_23;
		// newCard.transform.parent = GameObject.Find("cards").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_5;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralC60C5FFA1D94D479D1FEADBE31225357CB60B464, NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_25);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_25, L_27, NULL);
		// newCard.transform.position = Random.onUnitSphere * radius;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_5;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Random_get_onUnitSphere_mA7FD531C3043945E5EA290F670E79A78EFAC0D92(NULL);
		float L_31 = __this->___radius_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, L_31, NULL);
		NullCheck(L_29);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_32, NULL);
		// float x = (i / 4) * 1.4f - 2.1f;
		int32_t L_33 = V_4;
		V_6 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)((int32_t)(L_33/4))), (1.39999998f))), (2.0999999f)));
		// float y = (i % 4) * 1.4f - 3.0f;
		int32_t L_34 = V_4;
		V_7 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)((int32_t)(L_34%4))), (1.39999998f))), (3.0f)));
		// StartCoroutine(CoMoveOffsetPosition(newCard.transform, new Vector3(x, y, 0)));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_5;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		float L_37 = V_6;
		float L_38 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), L_37, L_38, (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_40;
		L_40 = stageManager_CoMoveOffsetPosition_mA729F3D2BB8A1165D2ABA58970605520220AA9AA(__this, L_36, L_39, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_41;
		L_41 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_40, NULL);
		// Transform frontTrans = newCard.transform.Find("front");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = V_5;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_43, _stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D, NULL);
		// SpriteRenderer cardRenderer = frontTrans.GetComponent<SpriteRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = L_44;
		NullCheck(L_45);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_46;
		L_46 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_45, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		V_8 = L_46;
		// cardRenderer.sprite = sprites[teams[i]];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_47 = V_8;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_48 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_0;
		int32_t L_50 = V_4;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_48);
		int32_t L_53 = L_52;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_54 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_47);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_47, L_54, NULL);
		// Vector3 tempScale = frontTrans.transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = L_45;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_55, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_56, NULL);
		V_9 = L_57;
		// tempScale.x *= rtanSpriteSize / cardRenderer.sprite.rect.width;
		float* L_58 = (&(&V_9)->___x_2);
		float* L_59 = L_58;
		float L_60 = *((float*)L_59);
		int32_t L_61 = __this->___rtanSpriteSize_5;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = V_8;
		NullCheck(L_62);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_63;
		L_63 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_62, NULL);
		NullCheck(L_63);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_64;
		L_64 = Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625(L_63, NULL);
		V_10 = L_64;
		float L_65;
		L_65 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_10), NULL);
		*((float*)L_59) = (float)((float)il2cpp_codegen_multiply(L_60, ((float)(((float)L_61)/L_65))));
		// tempScale.y *= rtanSpriteSize / cardRenderer.sprite.rect.height;
		float* L_66 = (&(&V_9)->___y_3);
		float* L_67 = L_66;
		float L_68 = *((float*)L_67);
		int32_t L_69 = __this->___rtanSpriteSize_5;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = V_8;
		NullCheck(L_70);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_71;
		L_71 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_70, NULL);
		NullCheck(L_71);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_72;
		L_72 = Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625(L_71, NULL);
		V_10 = L_72;
		float L_73;
		L_73 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_10), NULL);
		*((float*)L_67) = (float)((float)il2cpp_codegen_multiply(L_68, ((float)(((float)L_69)/L_73))));
		// frontTrans.localScale = tempScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_9;
		NullCheck(L_55);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_55, L_74, NULL);
		// cards.Add(newCard.GetComponent<card>());
		List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* L_75 = __this->___cards_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = V_5;
		NullCheck(L_76);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_77;
		L_77 = GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811(L_76, GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var);
		NullCheck(L_75);
		List_1_Add_m37632393A87AD3B4D83D5AC016CBA385D2BC98AE_inline(L_75, L_77, List_1_Add_m37632393A87AD3B4D83D5AC016CBA385D2BC98AE_RuntimeMethod_var);
		// for (int i = 0; i < 16; i++)
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01a9:
	{
		// for (int i = 0; i < 16; i++)
		int32_t L_79 = V_4;
		if ((((int32_t)L_79) < ((int32_t)((int32_t)16))))
		{
			goto IL_007b;
		}
	}
	{
		return;
	}

IL_01b3:
	{
		// else if (stage == 2)
		int32_t L_80 = ___0_stage;
		if ((!(((uint32_t)L_80) == ((uint32_t)2))))
		{
			goto IL_03c2;
		}
	}
	{
		// stageCardSizeDict.Add(stage, 0.6f);
		Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* L_81 = __this->___stageCardSizeDict_9;
		int32_t L_82 = ___0_stage;
		NullCheck(L_81);
		Dictionary_2_Add_m2BDAB666DF2DAB54DFF282A66818CE5DBCE0356F(L_81, L_82, (0.600000024f), Dictionary_2_Add_m2BDAB666DF2DAB54DFF282A66818CE5DBCE0356F_RuntimeMethod_var);
		// int[] teams = new int[STAGE_2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)36));
		V_11 = L_83;
		// for (int i = 0, j = 0; i < STAGE_2 - 1; i += 2, j++)
		V_13 = 0;
		// for (int i = 0, j = 0; i < STAGE_2 - 1; i += 2, j++)
		V_14 = 0;
		goto IL_01f8;
	}

IL_01dc:
	{
		// teams[i] = j;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = V_11;
		int32_t L_85 = V_13;
		int32_t L_86 = V_14;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (int32_t)L_86);
		// teams[i + 1] = j;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = V_11;
		int32_t L_88 = V_13;
		int32_t L_89 = V_14;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, 1))), (int32_t)L_89);
		// for (int i = 0, j = 0; i < STAGE_2 - 1; i += 2, j++)
		int32_t L_90 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_90, 2));
		// for (int i = 0, j = 0; i < STAGE_2 - 1; i += 2, j++)
		int32_t L_91 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_01f8:
	{
		// for (int i = 0, j = 0; i < STAGE_2 - 1; i += 2, j++)
		int32_t L_92 = V_13;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)35))))
		{
			goto IL_01dc;
		}
	}
	{
		// teams = teams.OrderBy(item => Random.Range(-1.0f, 1.0f)).ToArray();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_11;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var);
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_94 = ((U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_2;
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_95 = L_94;
		G_B15_0 = L_95;
		G_B15_1 = L_93;
		if (L_95)
		{
			G_B16_0 = L_95;
			G_B16_1 = L_93;
			goto IL_021f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var);
		U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F* L_96 = ((U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_97 = (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF*)il2cpp_codegen_object_new(Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		Func_2__ctor_m21E85B4040A96377ECFBA2A1C40E3A1C0EF3EF7F(L_97, L_96, (intptr_t)((void*)U3CU3Ec_U3CselectStageU3Eb__13_1_mB1B5EA4DCA55293680BBC7DB3A9C30B71E0604CA_RuntimeMethod_var), NULL);
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_98 = L_97;
		((U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_2 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_2), (void*)L_98);
		G_B16_0 = L_98;
		G_B16_1 = G_B15_1;
	}

IL_021f:
	{
		RuntimeObject* L_99;
		L_99 = Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F((RuntimeObject*)G_B16_1, G_B16_0, Enumerable_OrderBy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0384395175FBE893D0DD789D6D9822CB5F3A64F_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100;
		L_100 = Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8(L_99, Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
		V_11 = L_100;
		// Sprite[] sprites = Resources.LoadAll<Sprite>(CARD_PATH);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_101;
		L_101 = Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E(_stringLiteral57663CB5266DBA1BEBB7FB3341AEB409507261ED, Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E_RuntimeMethod_var);
		V_12 = L_101;
		// for (int i = 0; i < STAGE_2; i++)
		V_15 = 0;
		goto IL_03b9;
	}

IL_023f:
	{
		// GameObject newCard = Instantiate(card);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = __this->___card_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103;
		L_103 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_102, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_16 = L_103;
		// newCard.transform.parent = GameObject.Find("cards").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = V_16;
		NullCheck(L_104);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_104, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106;
		L_106 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralC60C5FFA1D94D479D1FEADBE31225357CB60B464, NULL);
		NullCheck(L_106);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_106, NULL);
		NullCheck(L_105);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_105, L_107, NULL);
		// newCard.transform.position = Random.onUnitSphere * radius;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108 = V_16;
		NullCheck(L_108);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109;
		L_109 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_108, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Random_get_onUnitSphere_mA7FD531C3043945E5EA290F670E79A78EFAC0D92(NULL);
		float L_111 = __this->___radius_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_110, L_111, NULL);
		NullCheck(L_109);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_109, L_112, NULL);
		// float x = (i / 6) * 1.4f * 0.6f - 2.1f;
		int32_t L_113 = V_15;
		V_17 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)((int32_t)(L_113/6))), (1.39999998f))), (0.600000024f))), (2.0999999f)));
		// float y = (i % 6) * 1.4f * 0.6f - 2.8f;
		int32_t L_114 = V_15;
		V_18 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)((int32_t)(L_114%6))), (1.39999998f))), (0.600000024f))), (2.79999995f)));
		// newCard.transform.Find("back").transform.localScale *= stageCardSizeDict[stage];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = V_16;
		NullCheck(L_115);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_115, NULL);
		NullCheck(L_116);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_116, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, NULL);
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_117, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_119 = L_118;
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_119, NULL);
		Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* L_121 = __this->___stageCardSizeDict_9;
		int32_t L_122 = ___0_stage;
		NullCheck(L_121);
		float L_123;
		L_123 = Dictionary_2_get_Item_m840539B2E0C2D5386BBE6608E396C0E99071EE3D(L_121, L_122, Dictionary_2_get_Item_m840539B2E0C2D5386BBE6608E396C0E99071EE3D_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_120, L_123, NULL);
		NullCheck(L_119);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_119, L_124, NULL);
		// StartCoroutine(CoMoveOffsetPosition(newCard.transform, new Vector3(x, y, 0)));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = V_16;
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_125, NULL);
		float L_127 = V_17;
		float L_128 = V_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		memset((&L_129), 0, sizeof(L_129));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_129), L_127, L_128, (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_130;
		L_130 = stageManager_CoMoveOffsetPosition_mA729F3D2BB8A1165D2ABA58970605520220AA9AA(__this, L_126, L_129, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_131;
		L_131 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_130, NULL);
		// Transform frontTrans = newCard.transform.Find("front");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132 = V_16;
		NullCheck(L_132);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133;
		L_133 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_132, NULL);
		NullCheck(L_133);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134;
		L_134 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_133, _stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D, NULL);
		// SpriteRenderer cardRenderer = frontTrans.GetComponent<SpriteRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135 = L_134;
		NullCheck(L_135);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_136;
		L_136 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_135, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		V_19 = L_136;
		// cardRenderer.sprite = sprites[teams[i]];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = V_19;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_138 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = V_11;
		int32_t L_140 = V_15;
		NullCheck(L_139);
		int32_t L_141 = L_140;
		int32_t L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_138);
		int32_t L_143 = L_142;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_144 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_137);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_137, L_144, NULL);
		// Vector3 tempScale = frontTrans.transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145 = L_135;
		NullCheck(L_145);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_146;
		L_146 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_145, NULL);
		NullCheck(L_146);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		L_147 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_146, NULL);
		V_20 = L_147;
		// tempScale.x *= (rtanSpriteSize / cardRenderer.sprite.rect.width) * 0.6f;
		float* L_148 = (&(&V_20)->___x_2);
		float* L_149 = L_148;
		float L_150 = *((float*)L_149);
		int32_t L_151 = __this->___rtanSpriteSize_5;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_152 = V_19;
		NullCheck(L_152);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_153;
		L_153 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_152, NULL);
		NullCheck(L_153);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_154;
		L_154 = Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625(L_153, NULL);
		V_10 = L_154;
		float L_155;
		L_155 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_10), NULL);
		*((float*)L_149) = (float)((float)il2cpp_codegen_multiply(L_150, ((float)il2cpp_codegen_multiply(((float)(((float)L_151)/L_155)), (0.600000024f)))));
		// tempScale.y *= (rtanSpriteSize / cardRenderer.sprite.rect.height) * 0.6f;
		float* L_156 = (&(&V_20)->___y_3);
		float* L_157 = L_156;
		float L_158 = *((float*)L_157);
		int32_t L_159 = __this->___rtanSpriteSize_5;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_160 = V_19;
		NullCheck(L_160);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_161;
		L_161 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_160, NULL);
		NullCheck(L_161);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_162;
		L_162 = Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625(L_161, NULL);
		V_10 = L_162;
		float L_163;
		L_163 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_10), NULL);
		*((float*)L_157) = (float)((float)il2cpp_codegen_multiply(L_158, ((float)il2cpp_codegen_multiply(((float)(((float)L_159)/L_163)), (0.600000024f)))));
		// frontTrans.localScale = tempScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164 = V_20;
		NullCheck(L_145);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_145, L_164, NULL);
		// cards.Add(newCard.GetComponent<card>());
		List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* L_165 = __this->___cards_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_166 = V_16;
		NullCheck(L_166);
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_167;
		L_167 = GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811(L_166, GameObject_GetComponent_Tiscard_tD5C541331908CF70357E72C9CD140BC92705AE4E_mEFF12EBDA1E1B8CB5154D7672C5B1C2E32307811_RuntimeMethod_var);
		NullCheck(L_165);
		List_1_Add_m37632393A87AD3B4D83D5AC016CBA385D2BC98AE_inline(L_165, L_167, List_1_Add_m37632393A87AD3B4D83D5AC016CBA385D2BC98AE_RuntimeMethod_var);
		// for (int i = 0; i < STAGE_2; i++)
		int32_t L_168 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_03b9:
	{
		// for (int i = 0; i < STAGE_2; i++)
		int32_t L_169 = V_15;
		if ((((int32_t)L_169) < ((int32_t)((int32_t)36))))
		{
			goto IL_023f;
		}
	}

IL_03c2:
	{
		// }
		return;
	}
}
// System.Void stageManager::SetInActiveCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageManager_SetInActiveCards_m969D438D02B68C048C96A78B178A3F59E1BA47F7 (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9A7CA8FC1B6C77E3026EDAA92D0D834525D624D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3B7DEE69BA76028D04B976F3961387A9C020B30A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEDF585625A887A87FFFBD2D47E174660AC8AC163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB7F66C85B203206BAD1D61ACC96F7DBFF4A5134C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var card in cards)
		List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* L_0 = __this->___cards_10;
		NullCheck(L_0);
		Enumerator_t97D86463A8DDB1D0C41FDB3741DB97BBEABFADD7 L_1;
		L_1 = List_1_GetEnumerator_mB7F66C85B203206BAD1D61ACC96F7DBFF4A5134C(L_0, List_1_GetEnumerator_mB7F66C85B203206BAD1D61ACC96F7DBFF4A5134C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9A7CA8FC1B6C77E3026EDAA92D0D834525D624D0((&V_0), Enumerator_Dispose_m9A7CA8FC1B6C77E3026EDAA92D0D834525D624D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var card in cards)
				card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_2;
				L_2 = Enumerator_get_Current_mEDF585625A887A87FFFBD2D47E174660AC8AC163_inline((&V_0), Enumerator_get_Current_mEDF585625A887A87FFFBD2D47E174660AC8AC163_RuntimeMethod_var);
				// card.SetButtonInactive();
				NullCheck(L_2);
				card_SetButtonInactive_m8FD5966E381A8664EBE76333B420F5E46CC663EC(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var card in cards)
				bool L_3;
				L_3 = Enumerator_MoveNext_m3B7DEE69BA76028D04B976F3961387A9C020B30A((&V_0), Enumerator_MoveNext_m3B7DEE69BA76028D04B976F3961387A9C020B30A_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void stageManager::RemoveCard(card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageManager_RemoveCard_m964FC312D34D51D446D1B55106E3D88C52698A3D (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, card_tD5C541331908CF70357E72C9CD140BC92705AE4E* ___0_card, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m8EC4BBDABB9537C0ED3E0BA6DCDF55C5E565AC65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cards.Remove(card);
		List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* L_0 = __this->___cards_10;
		card_tD5C541331908CF70357E72C9CD140BC92705AE4E* L_1 = ___0_card;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m8EC4BBDABB9537C0ED3E0BA6DCDF55C5E565AC65(L_0, L_1, List_1_Remove_m8EC4BBDABB9537C0ED3E0BA6DCDF55C5E565AC65_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator stageManager::CoMoveOffsetPosition(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* stageManager_CoMoveOffsetPosition_mA729F3D2BB8A1165D2ABA58970605520220AA9AA (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_cardTrans, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* L_0 = (U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258*)il2cpp_codegen_object_new(U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoMoveOffsetPositionU3Ed__16__ctor_m7789B78D706AF3174F7A9594452B155A1B489FF9(L_0, 0, NULL);
		U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_cardTrans;
		NullCheck(L_2);
		L_2->___cardTrans_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___cardTrans_2), (void*)L_3);
		U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* L_4 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_destination;
		NullCheck(L_4);
		L_4->___destination_3 = L_5;
		return L_4;
	}
}
// System.Void stageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageManager__ctor_m77BD557BCCE7FFB59450FA1D68FE1295791E4B02 (stageManager_t549D281035189BBC400D73397FE08178D59E2631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3B9BDFABC3A31681FBD8FFAD9CDFC3EFE531259E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB8C94110CBF8BD3309899C08D40288B211C566E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int rtanSpriteSize = 500;
		__this->___rtanSpriteSize_5 = ((int32_t)500);
		// public float radius = 5f;
		__this->___radius_7 = (5.0f);
		// public float cardSettingTime = 1f;
		__this->___cardSettingTime_8 = (1.0f);
		// public Dictionary<int, float> stageCardSizeDict = new Dictionary<int, float>();
		Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* L_0 = (Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC*)il2cpp_codegen_object_new(Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3B9BDFABC3A31681FBD8FFAD9CDFC3EFE531259E(L_0, Dictionary_2__ctor_m3B9BDFABC3A31681FBD8FFAD9CDFC3EFE531259E_RuntimeMethod_var);
		__this->___stageCardSizeDict_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stageCardSizeDict_9), (void*)L_0);
		// List<card> cards = new List<card>();
		List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242* L_1 = (List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242*)il2cpp_codegen_object_new(List_1_t90246BFAAFE4574A7732DDBCB7D4C991545EE242_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mDB8C94110CBF8BD3309899C08D40288B211C566E(L_1, List_1__ctor_mDB8C94110CBF8BD3309899C08D40288B211C566E_RuntimeMethod_var);
		__this->___cards_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cards_10), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void stageManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEB1280A8AE688DE891D05B38D90322924BAE0000 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F* L_0 = (U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F*)il2cpp_codegen_object_new(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB7DFFC4C4B6C144EC7F5481801697BDBBB92C31E(L_0, NULL);
		((U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void stageManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB7DFFC4C4B6C144EC7F5481801697BDBBB92C31E (U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single stageManager/<>c::<selectStage>b__13_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CselectStageU3Eb__13_0_m9329D4305E88E552A9E9D4C68B9091370B3B409F (U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		// teams = teams.OrderBy(item => Random.Range(-1.0f, 1.0f)).ToArray();
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		return L_0;
	}
}
// System.Single stageManager/<>c::<selectStage>b__13_1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CselectStageU3Eb__13_1_mB1B5EA4DCA55293680BBC7DB3A9C30B71E0604CA (U3CU3Ec_t6A57E97FA97CCA2E41F8B417FC6D8C710C3B6A2F* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		// teams = teams.OrderBy(item => Random.Range(-1.0f, 1.0f)).ToArray();
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void stageManager/<CoMoveOffsetPosition>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoMoveOffsetPositionU3Ed__16__ctor_m7789B78D706AF3174F7A9594452B155A1B489FF9 (U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void stageManager/<CoMoveOffsetPosition>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoMoveOffsetPositionU3Ed__16_System_IDisposable_Dispose_m0FC15AE8AE2A3935E4297C19F1DA272B7E5B8C9A (U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean stageManager/<CoMoveOffsetPosition>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoMoveOffsetPositionU3Ed__16_MoveNext_mB3B1B9B60E23D9FD5BF92FA8E19E1C5666B826E0 (U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	stageManager_t549D281035189BBC400D73397FE08178D59E2631* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		stageManager_t549D281035189BBC400D73397FE08178D59E2631* L_1 = __this->___U3CU3E4__this_4;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_011e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Vector3 offsetPos = cardTrans.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___cardTrans_2;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___U3CoffsetPosU3E5__2_5 = L_5;
		// Vector3 targetPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_6;
		// float ratio = 0f;
		__this->___U3CratioU3E5__3_6 = (0.0f);
		goto IL_0125;
	}

IL_0048:
	{
		// ratio += Time.deltaTime;
		float L_7 = __this->___U3CratioU3E5__3_6;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CratioU3E5__3_6 = ((float)il2cpp_codegen_add(L_7, L_8));
		// targetPos = Vector3.Lerp(offsetPos, destination, ratio / cardSettingTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___U3CoffsetPosU3E5__2_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___destination_3;
		float L_11 = __this->___U3CratioU3E5__3_6;
		stageManager_t549D281035189BBC400D73397FE08178D59E2631* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->___cardSettingTime_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_9, L_10, ((float)(L_11/L_13)), NULL);
		V_2 = L_14;
		// float halfRadius = radius * 0.5f;
		stageManager_t549D281035189BBC400D73397FE08178D59E2631* L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->___radius_7;
		V_3 = ((float)il2cpp_codegen_multiply(L_16, (0.5f)));
		// float powRadius = Mathf.Pow(halfRadius, 2);
		float L_17 = V_3;
		float L_18;
		L_18 = powf(L_17, (2.0f));
		// bool isDestinationXLow = targetPos.x > destination.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___destination_3);
		float L_22 = L_21->___x_2;
		// float powXPos = isDestinationXLow ? Mathf.Pow(targetPos.x - destination.x - halfRadius, 2)
		//     : Mathf.Pow(targetPos.x - destination.x + halfRadius, 2);
		G_B5_0 = L_18;
		if (((((float)L_20) > ((float)L_22))? 1 : 0))
		{
			G_B6_0 = L_18;
			goto IL_00c6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		float L_24 = L_23.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___destination_3);
		float L_26 = L_25->___x_2;
		float L_27 = V_3;
		float L_28;
		L_28 = powf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_24, L_26)), L_27)), (2.0f));
		G_B7_0 = L_28;
		G_B7_1 = G_B5_0;
		goto IL_00e4;
	}

IL_00c6:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		float L_30 = L_29.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___destination_3);
		float L_32 = L_31->___x_2;
		float L_33 = V_3;
		float L_34;
		L_34 = powf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_30, L_32)), L_33)), (2.0f));
		G_B7_0 = L_34;
		G_B7_1 = G_B6_0;
	}

IL_00e4:
	{
		V_4 = G_B7_0;
		// float yPos = Mathf.Sqrt(Mathf.Abs(powRadius - powXPos));
		float L_35 = V_4;
		float L_36;
		L_36 = fabsf(((float)il2cpp_codegen_subtract(G_B7_1, L_35)));
		float L_37;
		L_37 = sqrtf(L_36);
		V_5 = L_37;
		// targetPos.y += yPos;
		float* L_38 = (&(&V_2)->___y_3);
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		float L_41 = V_5;
		*((float*)L_39) = (float)((float)il2cpp_codegen_add(L_40, L_41));
		// cardTrans.position = targetPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___cardTrans_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_2;
		NullCheck(L_42);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_42, L_43, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_011e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0125:
	{
		// while (ratio < cardSettingTime)
		float L_44 = __this->___U3CratioU3E5__3_6;
		stageManager_t549D281035189BBC400D73397FE08178D59E2631* L_45 = V_1;
		NullCheck(L_45);
		float L_46 = L_45->___cardSettingTime_8;
		if ((((float)L_44) < ((float)L_46)))
		{
			goto IL_0048;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object stageManager/<CoMoveOffsetPosition>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoMoveOffsetPositionU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7B393BFDFB4FC6D880163F51E1610498C072E3FA (U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void stageManager/<CoMoveOffsetPosition>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoMoveOffsetPositionU3Ed__16_System_Collections_IEnumerator_Reset_m80335812DD632B260DB2C2E07FC5F797A7F51805 (U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoMoveOffsetPositionU3Ed__16_System_Collections_IEnumerator_Reset_m80335812DD632B260DB2C2E07FC5F797A7F51805_RuntimeMethod_var)));
	}
}
// System.Object stageManager/<CoMoveOffsetPosition>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoMoveOffsetPositionU3Ed__16_System_Collections_IEnumerator_get_Current_mF2AF23B4567714CCEB98096AF536725AB6118DFE (U3CCoMoveOffsetPositionU3Ed__16_t227519B36B956C18746A2AD5E5C2FB729A0A2258* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void stageSelectManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageSelectManager_Awake_mD2A5348BE0952C83ADBF255CE2C0940D192D6B81 (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SSM = this;
		((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5), (void*)__this);
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
		// }
		return;
	}
}
// System.Void stageSelectManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageSelectManager_Start_mB4F237ED34F85B2BC4B12773E0C93EB6E0388559 (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey(LOCKED_STAGE))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// SSM.stage = PlayerPrefs.GetInt(LOCKED_STAGE) + 1;
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_1 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, NULL);
		NullCheck(L_1);
		L_1->___stage_4 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}

IL_0023:
	{
		// SSM.stage = 1;
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_3 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		NullCheck(L_3);
		L_3->___stage_4 = 1;
		// }
		return;
	}
}
// System.Void stageSelectManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageSelectManager_Update_mA30214F79DD518623351314714333164E5A02BAE (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4024FC9440E76032D8FF697972847D6DB815BBF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fadeImage.material.SetFloat("_StepValue", 0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___fadeImage_8;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_0);
		NullCheck(L_1);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_1, _stringLiteral4024FC9440E76032D8FF697972847D6DB815BBF7, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void stageSelectManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageSelectManager_StartGame_m789A5D18BE7CBC7F02598748C54F14CE76E97F76 (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669C4C4316BB0D8800268D421965F7350B189F2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (stage == 1)
		int32_t L_0 = __this->___stage_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// Fade("MainScene");
		stageSelectManager_Fade_m16513CA7919AC1901CD0C30AFA05DE12A0F2A76A(__this, _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, NULL);
		return;
	}

IL_0015:
	{
		// else if (stage == 2)
		int32_t L_1 = __this->___stage_4;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		// Fade("Stage2Scene");
		stageSelectManager_Fade_m16513CA7919AC1901CD0C30AFA05DE12A0F2A76A(__this, _stringLiteral669C4C4316BB0D8800268D421965F7350B189F2D, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void stageSelectManager::Fade(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageSelectManager_Fade_m16513CA7919AC1901CD0C30AFA05DE12A0F2A76A (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(CoFade(sceneName));
		String_t* L_0 = ___0_sceneName;
		RuntimeObject* L_1;
		L_1 = stageSelectManager_CoFade_m5738EC36ACB75987BED51B0E17E2EFEE9348DDF6(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator stageSelectManager::CoFade(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* stageSelectManager_CoFade_m5738EC36ACB75987BED51B0E17E2EFEE9348DDF6 (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81* L_0 = (U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81*)il2cpp_codegen_object_new(U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoFadeU3Ed__11__ctor_m43D554856C5040D73CFA18BF19BB719A12A7D794(L_0, 0, NULL);
		U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81* L_2 = L_1;
		String_t* L_3 = ___0_sceneName;
		NullCheck(L_2);
		L_2->___sceneName_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sceneName_3), (void*)L_3);
		return L_2;
	}
}
// System.Int32 stageSelectManager::getStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t stageSelectManager_getStage_m80D1BB2C6459DB87742C9EEE9E5A7CBAAAC0B296 (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, const RuntimeMethod* method) 
{
	{
		// return stage;
		int32_t L_0 = __this->___stage_4;
		return L_0;
	}
}
// System.Void stageSelectManager::setStage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageSelectManager_setStage_mAF3C6F3C6AD993E0F8F1CD118BA37CAA32A1C139 (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SSM.stage = value;
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_0 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___stage_4 = L_1;
		// }
		return;
	}
}
// System.Void stageSelectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageSelectManager__ctor_m8D24276CCD2366BB907A276CAA2545E5506FC425 (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, const RuntimeMethod* method) 
{
	{
		// private int stage = 1;
		__this->___stage_4 = 1;
		// [SerializeField] float fadeValue = 1f;
		__this->___fadeValue_6 = (1.0f);
		// [SerializeField] float fadeTime = 1f;
		__this->___fadeTime_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void stageSelectManager/<CoFade>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoFadeU3Ed__11__ctor_m43D554856C5040D73CFA18BF19BB719A12A7D794 (U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void stageSelectManager/<CoFade>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoFadeU3Ed__11_System_IDisposable_Dispose_mEFE0AC92583E6088446D84D98F8CC2D449DB10B1 (U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean stageSelectManager/<CoFade>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoFadeU3Ed__11_MoveNext_mBE7A667DFABE6D5FE17B1FF872C3BEB447E1E12B (U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4024FC9440E76032D8FF697972847D6DB815BBF7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_011c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float time = 0;
		__this->___U3CtimeU3E5__2_4 = (0.0f);
		goto IL_0085;
	}

IL_003a:
	{
		// time += Time.unscaledDeltaTime / fadeTime;
		float L_3 = __this->___U3CtimeU3E5__2_4;
		float L_4;
		L_4 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->___fadeTime_7;
		__this->___U3CtimeU3E5__2_4 = ((float)il2cpp_codegen_add(L_3, ((float)(L_4/L_6))));
		// fadeImage.material.SetFloat("_StepValue", time);
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_7 = V_1;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = L_7->___fadeImage_8;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		float L_10 = __this->___U3CtimeU3E5__2_4;
		NullCheck(L_9);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_9, _stringLiteral4024FC9440E76032D8FF697972847D6DB815BBF7, L_10, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0085:
	{
		// while (time < fadeValue)
		float L_11 = __this->___U3CtimeU3E5__2_4;
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->___fadeValue_6;
		if ((((float)L_11) < ((float)L_13)))
		{
			goto IL_003a;
		}
	}
	{
		// var op = SceneManager.LoadSceneAsync(sceneName);
		String_t* L_14 = __this->___sceneName_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_15;
		L_15 = SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300(L_14, NULL);
		__this->___U3CopU3E5__3_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CopU3E5__3_5), (void*)L_15);
		goto IL_00bd;
	}

IL_00a6:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b6:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00bd:
	{
		// while (op.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_16 = __this->___U3CopU3E5__3_5;
		NullCheck(L_16);
		bool L_17;
		L_17 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_16, NULL);
		if (L_17)
		{
			goto IL_00a6;
		}
	}
	{
		// time = fadeValue;
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___fadeValue_6;
		__this->___U3CtimeU3E5__2_4 = L_19;
		goto IL_0123;
	}

IL_00d8:
	{
		// time -= Time.unscaledDeltaTime / fadeTime;
		float L_20 = __this->___U3CtimeU3E5__2_4;
		float L_21;
		L_21 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->___fadeTime_7;
		__this->___U3CtimeU3E5__2_4 = ((float)il2cpp_codegen_subtract(L_20, ((float)(L_21/L_23))));
		// fadeImage.material.SetFloat("_StepValue", time);
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_24 = V_1;
		NullCheck(L_24);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = L_24->___fadeImage_8;
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_25);
		float L_27 = __this->___U3CtimeU3E5__2_4;
		NullCheck(L_26);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_26, _stringLiteral4024FC9440E76032D8FF697972847D6DB815BBF7, L_27, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_011c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0123:
	{
		// while (time > 0)
		float L_28 = __this->___U3CtimeU3E5__2_4;
		if ((((float)L_28) > ((float)(0.0f))))
		{
			goto IL_00d8;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object stageSelectManager/<CoFade>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoFadeU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0885EBC0553EC84DC7100890C85F1EF9AB47728E (U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void stageSelectManager/<CoFade>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoFadeU3Ed__11_System_Collections_IEnumerator_Reset_mECE3C2A021B7E10FDE41241EFB9839614F893C1E (U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoFadeU3Ed__11_System_Collections_IEnumerator_Reset_mECE3C2A021B7E10FDE41241EFB9839614F893C1E_RuntimeMethod_var)));
	}
}
// System.Object stageSelectManager/<CoFade>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoFadeU3Ed__11_System_Collections_IEnumerator_get_Current_mF85FAC8D6A8B9DC856CED953386F450C71E624B2 (U3CCoFadeU3Ed__11_t13664D83952F6A6185E83F98B5CFBB82E3341D81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void startBtn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startBtn_Start_m3A20E7F9930482AD60ADE9FF57379424B44FFBFE (startBtn_t4E3CBFAE676D7A3E3E393DB1F76769CE15C23328* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D344CCD39D3CD23AEFE1F1CA347B93785660422);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!PlayerPrefs.HasKey(LOCKED_STAGE))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		// PlayerPrefs.SetInt(LOCKED_STAGE, 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, 0, NULL);
	}

IL_0017:
	{
		// Debug.Log("This is StartBtn " + PlayerPrefs.GetInt(LOCKED_STAGE));
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2D344CCD39D3CD23AEFE1F1CA347B93785660422, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void startBtn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startBtn_Update_mA7412853F11B7688AE6F1ED812F6D3F5CF688465 (startBtn_t4E3CBFAE676D7A3E3E393DB1F76769CE15C23328* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt(LOCKED_STAGE) == 1)  // stage 1 ???????? stage2 ??? ????
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralA7DDBC758350C312ECF84A9EE8C025666AC9F722, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		// stage2Btn.GetComponent<Button>().interactable = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___stage2Btn_5;
		NullCheck(L_1);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
		L_2 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_1, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)1, NULL);
		// lock_img.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___lock_img_6;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		return;
	}

IL_002b:
	{
		// stage2Btn.GetComponent<Button>().interactable = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___stage2Btn_5;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5;
		L_5 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_4, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_5);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_5, (bool)0, NULL);
		// lock_img.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___lock_img_6;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void startBtn::gameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startBtn_gameStart_mBC50B6875F6FFA7B2181A269183BC6CE61F97C32 (startBtn_t4E3CBFAE676D7A3E3E393DB1F76769CE15C23328* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stageSelectManager.SSM.StartGame();
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_0 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		NullCheck(L_0);
		stageSelectManager_StartGame_m789A5D18BE7CBC7F02598748C54F14CE76E97F76(L_0, NULL);
		// }
		return;
	}
}
// System.Void startBtn::selectStage1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startBtn_selectStage1_mE33842A946C276B256DCD863EDDD7250C76862A1 (startBtn_t4E3CBFAE676D7A3E3E393DB1F76769CE15C23328* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stageSelectManager.SSM.setStage(1);
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_0 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		NullCheck(L_0);
		stageSelectManager_setStage_mAF3C6F3C6AD993E0F8F1CD118BA37CAA32A1C139(L_0, 1, NULL);
		// selectStagePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___selectStagePanel_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void startBtn::selectStage2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startBtn_selectStage2_m7FBFF7894B0C33C81147E1D44E353302C986034A (startBtn_t4E3CBFAE676D7A3E3E393DB1F76769CE15C23328* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stageSelectManager.SSM.setStage(2);
		stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* L_0 = ((stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_StaticFields*)il2cpp_codegen_static_fields_for(stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1_il2cpp_TypeInfo_var))->___SSM_5;
		NullCheck(L_0);
		stageSelectManager_setStage_mAF3C6F3C6AD993E0F8F1CD118BA37CAA32A1C139(L_0, 2, NULL);
		// selectStagePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___selectStagePanel_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void startBtn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startBtn__ctor_m641903B8CA9F01F4156A85CCCF21D6705E3F18C7 (startBtn_t4E3CBFAE676D7A3E3E393DB1F76769CE15C23328* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchParticle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchParticle_Awake_m8505DCA0BBACFD1B7D7A90592FA5FC9B74D37E16 (TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ParticleSystem = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0;
		L_0 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___ParticleSystem_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ParticleSystem_6), (void*)L_0);
		// remainTime = ParticleSystem.main.startLifetime.constant;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = __this->___ParticleSystem_6;
		NullCheck(L_1);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_2;
		L_2 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_1, NULL);
		V_0 = L_2;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_3;
		L_3 = MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654((&V_0), NULL);
		V_1 = L_3;
		float L_4;
		L_4 = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91((&V_1), NULL);
		__this->___remainTime_4 = L_4;
		// }
		return;
	}
}
// System.Void TouchParticle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchParticle_OnEnable_mA15AFA8546843FFC7DD0CD23B0EA46D88C67E1AC (TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* __this, const RuntimeMethod* method) 
{
	{
		// ParticleSystem.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___ParticleSystem_6;
		NullCheck(L_0);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_0, NULL);
		// StartCoroutine(CoRemainWhile());
		RuntimeObject* L_1;
		L_1 = TouchParticle_CoRemainWhile_m84D861B7F7081294FCF3A488CC2EAF97299B00CA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void TouchParticle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchParticle_OnDisable_mFCADABEBBFB11B46FFE054EA6FDA7494B07B7E27 (TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* __this, const RuntimeMethod* method) 
{
	Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345* G_B2_0 = NULL;
	Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345* G_B1_0 = NULL;
	{
		// returnAction?.Invoke(this);
		Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345* L_0 = __this->___returnAction_5;
		Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_mFC0D28D4FB8E7745D0A2A1554909069ED7DC9864_inline(G_B2_0, __this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TouchParticle::CoRemainWhile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchParticle_CoRemainWhile_m84D861B7F7081294FCF3A488CC2EAF97299B00CA (TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909* L_0 = (U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909*)il2cpp_codegen_object_new(U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoRemainWhileU3Ed__6__ctor_m8A49E35C3FE8DA285664430DEBEC7B2E12FE1970(L_0, 0, NULL);
		U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TouchParticle::SetReturnObject(System.Action`1<TouchParticle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchParticle_SetReturnObject_m4845404E2FD23E84FAC436F6841B2D29CC1E0831 (TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* __this, Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345* ___0_action, const RuntimeMethod* method) 
{
	{
		// returnAction = action;
		Action_1_tBAC70601B02518911DCF8A7F50C03507B1BE1345* L_0 = ___0_action;
		__this->___returnAction_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___returnAction_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void TouchParticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchParticle__ctor_m2958A7A3C30BF137C246215D7A5841E04B2BB1CC (TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* __this, const RuntimeMethod* method) 
{
	{
		// float remainTime = 1f;
		__this->___remainTime_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchParticle/<CoRemainWhile>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoRemainWhileU3Ed__6__ctor_m8A49E35C3FE8DA285664430DEBEC7B2E12FE1970 (U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TouchParticle/<CoRemainWhile>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoRemainWhileU3Ed__6_System_IDisposable_Dispose_m82CCF4267EDD3CC6F1268463A70BE2B88C97903B (U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TouchParticle/<CoRemainWhile>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoRemainWhileU3Ed__6_MoveNext_mFB87B43C7BA3417801EC04A14ED2226ED3826A03 (U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float ratio = 0f;
		__this->___U3CratioU3E5__2_3 = (0.0f);
		goto IL_0054;
	}

IL_002b:
	{
		// ratio += Time.unscaledDeltaTime;
		float L_4 = __this->___U3CratioU3E5__2_3;
		float L_5;
		L_5 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___U3CratioU3E5__2_3 = ((float)il2cpp_codegen_add(L_4, L_5));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0054:
	{
		// while (ratio < remainTime)
		float L_6 = __this->___U3CratioU3E5__2_3;
		TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___remainTime_4;
		if ((((float)L_6) < ((float)L_8)))
		{
			goto IL_002b;
		}
	}
	{
		// gameObject.SetActive(false);
		TouchParticle_tFA39C7253B433FE4CE1C14E9DFA1452A3A1195E1* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TouchParticle/<CoRemainWhile>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoRemainWhileU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3DDDFB7707BC6DDF766DA4721DEA88659BCF2AE4 (U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TouchParticle/<CoRemainWhile>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoRemainWhileU3Ed__6_System_Collections_IEnumerator_Reset_m300CA8D82A13647EB443AF1C0F677B1D8AECC38A (U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoRemainWhileU3Ed__6_System_Collections_IEnumerator_Reset_m300CA8D82A13647EB443AF1C0F677B1D8AECC38A_RuntimeMethod_var)));
	}
}
// System.Object TouchParticle/<CoRemainWhile>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoRemainWhileU3Ed__6_System_Collections_IEnumerator_get_Current_m51236E1908B6BA2A7FDA2675C90782900ECD7D11 (U3CCoRemainWhileU3Ed__6_tF1EAE6AC4C708CBA9A92F9F276334D7344785909* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t stageSelectManager_getStage_m80D1BB2C6459DB87742C9EEE9E5A7CBAAAC0B296_inline (stageSelectManager_t940B502064FAEF96ED93F768013CC24455F53AA1* __this, const RuntimeMethod* method) 
{
	{
		// return stage;
		int32_t L_0 = __this->___stage_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
