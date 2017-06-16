#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"
#include "UnityEngine_UnityEngine_ThreadPriority3154739762.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.AudioListener
struct AudioListener_t1996719162;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingScreenManager
struct  LoadingScreenManager_t870973519  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image LoadingScreenManager::loadingIcon
	Image_t2042527209 * ___loadingIcon_2;
	// UnityEngine.UI.Image LoadingScreenManager::loadingDoneIcon
	Image_t2042527209 * ___loadingDoneIcon_3;
	// UnityEngine.UI.Text LoadingScreenManager::loadingText
	Text_t356221433 * ___loadingText_4;
	// UnityEngine.UI.Image LoadingScreenManager::progressBar
	Image_t2042527209 * ___progressBar_5;
	// UnityEngine.UI.Image LoadingScreenManager::fadeOverlay
	Image_t2042527209 * ___fadeOverlay_6;
	// System.Single LoadingScreenManager::waitOnLoadEnd
	float ___waitOnLoadEnd_7;
	// System.Single LoadingScreenManager::fadeDuration
	float ___fadeDuration_8;
	// UnityEngine.SceneManagement.LoadSceneMode LoadingScreenManager::loadSceneMode
	int32_t ___loadSceneMode_9;
	// UnityEngine.ThreadPriority LoadingScreenManager::loadThreadPriority
	int32_t ___loadThreadPriority_10;
	// UnityEngine.AudioListener LoadingScreenManager::audioListener
	AudioListener_t1996719162 * ___audioListener_11;
	// UnityEngine.AsyncOperation LoadingScreenManager::operation
	AsyncOperation_t3814632279 * ___operation_12;
	// UnityEngine.SceneManagement.Scene LoadingScreenManager::currentScene
	Scene_t1684909666  ___currentScene_13;

public:
	inline static int32_t get_offset_of_loadingIcon_2() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___loadingIcon_2)); }
	inline Image_t2042527209 * get_loadingIcon_2() const { return ___loadingIcon_2; }
	inline Image_t2042527209 ** get_address_of_loadingIcon_2() { return &___loadingIcon_2; }
	inline void set_loadingIcon_2(Image_t2042527209 * value)
	{
		___loadingIcon_2 = value;
		Il2CppCodeGenWriteBarrier(&___loadingIcon_2, value);
	}

	inline static int32_t get_offset_of_loadingDoneIcon_3() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___loadingDoneIcon_3)); }
	inline Image_t2042527209 * get_loadingDoneIcon_3() const { return ___loadingDoneIcon_3; }
	inline Image_t2042527209 ** get_address_of_loadingDoneIcon_3() { return &___loadingDoneIcon_3; }
	inline void set_loadingDoneIcon_3(Image_t2042527209 * value)
	{
		___loadingDoneIcon_3 = value;
		Il2CppCodeGenWriteBarrier(&___loadingDoneIcon_3, value);
	}

	inline static int32_t get_offset_of_loadingText_4() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___loadingText_4)); }
	inline Text_t356221433 * get_loadingText_4() const { return ___loadingText_4; }
	inline Text_t356221433 ** get_address_of_loadingText_4() { return &___loadingText_4; }
	inline void set_loadingText_4(Text_t356221433 * value)
	{
		___loadingText_4 = value;
		Il2CppCodeGenWriteBarrier(&___loadingText_4, value);
	}

	inline static int32_t get_offset_of_progressBar_5() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___progressBar_5)); }
	inline Image_t2042527209 * get_progressBar_5() const { return ___progressBar_5; }
	inline Image_t2042527209 ** get_address_of_progressBar_5() { return &___progressBar_5; }
	inline void set_progressBar_5(Image_t2042527209 * value)
	{
		___progressBar_5 = value;
		Il2CppCodeGenWriteBarrier(&___progressBar_5, value);
	}

	inline static int32_t get_offset_of_fadeOverlay_6() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___fadeOverlay_6)); }
	inline Image_t2042527209 * get_fadeOverlay_6() const { return ___fadeOverlay_6; }
	inline Image_t2042527209 ** get_address_of_fadeOverlay_6() { return &___fadeOverlay_6; }
	inline void set_fadeOverlay_6(Image_t2042527209 * value)
	{
		___fadeOverlay_6 = value;
		Il2CppCodeGenWriteBarrier(&___fadeOverlay_6, value);
	}

	inline static int32_t get_offset_of_waitOnLoadEnd_7() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___waitOnLoadEnd_7)); }
	inline float get_waitOnLoadEnd_7() const { return ___waitOnLoadEnd_7; }
	inline float* get_address_of_waitOnLoadEnd_7() { return &___waitOnLoadEnd_7; }
	inline void set_waitOnLoadEnd_7(float value)
	{
		___waitOnLoadEnd_7 = value;
	}

	inline static int32_t get_offset_of_fadeDuration_8() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___fadeDuration_8)); }
	inline float get_fadeDuration_8() const { return ___fadeDuration_8; }
	inline float* get_address_of_fadeDuration_8() { return &___fadeDuration_8; }
	inline void set_fadeDuration_8(float value)
	{
		___fadeDuration_8 = value;
	}

	inline static int32_t get_offset_of_loadSceneMode_9() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___loadSceneMode_9)); }
	inline int32_t get_loadSceneMode_9() const { return ___loadSceneMode_9; }
	inline int32_t* get_address_of_loadSceneMode_9() { return &___loadSceneMode_9; }
	inline void set_loadSceneMode_9(int32_t value)
	{
		___loadSceneMode_9 = value;
	}

	inline static int32_t get_offset_of_loadThreadPriority_10() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___loadThreadPriority_10)); }
	inline int32_t get_loadThreadPriority_10() const { return ___loadThreadPriority_10; }
	inline int32_t* get_address_of_loadThreadPriority_10() { return &___loadThreadPriority_10; }
	inline void set_loadThreadPriority_10(int32_t value)
	{
		___loadThreadPriority_10 = value;
	}

	inline static int32_t get_offset_of_audioListener_11() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___audioListener_11)); }
	inline AudioListener_t1996719162 * get_audioListener_11() const { return ___audioListener_11; }
	inline AudioListener_t1996719162 ** get_address_of_audioListener_11() { return &___audioListener_11; }
	inline void set_audioListener_11(AudioListener_t1996719162 * value)
	{
		___audioListener_11 = value;
		Il2CppCodeGenWriteBarrier(&___audioListener_11, value);
	}

	inline static int32_t get_offset_of_operation_12() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___operation_12)); }
	inline AsyncOperation_t3814632279 * get_operation_12() const { return ___operation_12; }
	inline AsyncOperation_t3814632279 ** get_address_of_operation_12() { return &___operation_12; }
	inline void set_operation_12(AsyncOperation_t3814632279 * value)
	{
		___operation_12 = value;
		Il2CppCodeGenWriteBarrier(&___operation_12, value);
	}

	inline static int32_t get_offset_of_currentScene_13() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519, ___currentScene_13)); }
	inline Scene_t1684909666  get_currentScene_13() const { return ___currentScene_13; }
	inline Scene_t1684909666 * get_address_of_currentScene_13() { return &___currentScene_13; }
	inline void set_currentScene_13(Scene_t1684909666  value)
	{
		___currentScene_13 = value;
	}
};

struct LoadingScreenManager_t870973519_StaticFields
{
public:
	// System.String LoadingScreenManager::sceneToLoad
	String_t* ___sceneToLoad_14;
	// System.Int32 LoadingScreenManager::loadingSceneIndex
	int32_t ___loadingSceneIndex_15;

public:
	inline static int32_t get_offset_of_sceneToLoad_14() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519_StaticFields, ___sceneToLoad_14)); }
	inline String_t* get_sceneToLoad_14() const { return ___sceneToLoad_14; }
	inline String_t** get_address_of_sceneToLoad_14() { return &___sceneToLoad_14; }
	inline void set_sceneToLoad_14(String_t* value)
	{
		___sceneToLoad_14 = value;
		Il2CppCodeGenWriteBarrier(&___sceneToLoad_14, value);
	}

	inline static int32_t get_offset_of_loadingSceneIndex_15() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t870973519_StaticFields, ___loadingSceneIndex_15)); }
	inline int32_t get_loadingSceneIndex_15() const { return ___loadingSceneIndex_15; }
	inline int32_t* get_address_of_loadingSceneIndex_15() { return &___loadingSceneIndex_15; }
	inline void set_loadingSceneIndex_15(int32_t value)
	{
		___loadingSceneIndex_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
