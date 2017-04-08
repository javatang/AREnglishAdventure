template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class DirectorPlayer; template <> void RegisterClass<DirectorPlayer>();
class Animator; template <> void RegisterClass<Animator>();
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; template <> void RegisterClass<GUITexture>();
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; template <> void RegisterClass<Skybox>();
class Terrain; template <> void RegisterClass<Terrain>();
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; 
class TerrainCollider; template <> void RegisterClass<TerrainCollider>();
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; template <> void RegisterClass<ParticleAnimator>();
class ParticleEmitter; template <> void RegisterClass<ParticleEmitter>();
class EllipsoidParticleEmitter; template <> void RegisterClass<EllipsoidParticleEmitter>();
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>();
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; template <> void RegisterClass<ParticleRenderer>();
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; template <> void RegisterClass<TrailRenderer>();
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class NavMeshData; template <> void RegisterClass<NavMeshData>();
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>();
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class CubemapArray; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class WebCamTexture; template <> void RegisterClass<WebCamTexture>();
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 102 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. QualitySettings
	RegisterClass<QualitySettings>();
	//6. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. MeshFilter
	RegisterClass<MeshFilter>();
	//9. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//10. Renderer
	RegisterClass<Renderer>();
	//11. GUIElement
	RegisterClass<GUIElement>();
	//12. GUILayer
	RegisterClass<GUILayer>();
	//13. Mesh
	RegisterClass<Mesh>();
	//14. NamedObject
	RegisterClass<NamedObject>();
	//15. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//16. NetworkView
	RegisterClass<NetworkView>();
	//17. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//18. Transform
	RegisterClass<Transform>();
	//19. Shader
	RegisterClass<Shader>();
	//20. Material
	RegisterClass<Material>();
	//21. Sprite
	RegisterClass<Sprite>();
	//22. TextAsset
	RegisterClass<TextAsset>();
	//23. Texture
	RegisterClass<Texture>();
	//24. Texture2D
	RegisterClass<Texture2D>();
	//25. RenderTexture
	RegisterClass<RenderTexture>();
	//26. ParticleSystem
	RegisterClass<ParticleSystem>();
	//27. Rigidbody
	RegisterClass<Rigidbody>();
	//28. Collider
	RegisterClass<Collider>();
	//29. MeshCollider
	RegisterClass<MeshCollider>();
	//30. CharacterController
	RegisterClass<CharacterController>();
	//31. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//32. AudioClip
	RegisterClass<AudioClip>();
	//33. SampleClip
	RegisterClass<SampleClip>();
	//34. AudioSource
	RegisterClass<AudioSource>();
	//35. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//36. WebCamTexture
	RegisterClass<WebCamTexture>();
	//37. Animation
	RegisterClass<Animation>();
	//38. Animator
	RegisterClass<Animator>();
	//39. DirectorPlayer
	RegisterClass<DirectorPlayer>();
	//40. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//41. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//42. UI::Canvas
	RegisterClass<UI::Canvas>();
	//43. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//44. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//45. ParticleEmitter
	RegisterClass<ParticleEmitter>();
	//46. ParticleAnimator
	RegisterClass<ParticleAnimator>();
	//47. ParticleRenderer
	RegisterClass<ParticleRenderer>();
	//48. MeshRenderer
	RegisterClass<MeshRenderer>();
	//49. AnimationClip
	RegisterClass<AnimationClip>();
	//50. Motion
	RegisterClass<Motion>();
	//51. TrailRenderer
	RegisterClass<TrailRenderer>();
	//52. LineRenderer
	RegisterClass<LineRenderer>();
	//53. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//54. Collider2D
	RegisterClass<Collider2D>();
	//55. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//56. AudioListener
	RegisterClass<AudioListener>();
	//57. BoxCollider
	RegisterClass<BoxCollider>();
	//58. GUITexture
	RegisterClass<GUITexture>();
	//59. PreloadData
	RegisterClass<PreloadData>();
	//60. Cubemap
	RegisterClass<Cubemap>();
	//61. Texture3D
	RegisterClass<Texture3D>();
	//62. Texture2DArray
	RegisterClass<Texture2DArray>();
	//63. TimeManager
	RegisterClass<TimeManager>();
	//64. AudioManager
	RegisterClass<AudioManager>();
	//65. InputManager
	RegisterClass<InputManager>();
	//66. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//67. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//68. PhysicsManager
	RegisterClass<PhysicsManager>();
	//69. TagManager
	RegisterClass<TagManager>();
	//70. ScriptMapper
	RegisterClass<ScriptMapper>();
	//71. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//72. MonoScript
	RegisterClass<MonoScript>();
	//73. MonoManager
	RegisterClass<MonoManager>();
	//74. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//75. PlayerSettings
	RegisterClass<PlayerSettings>();
	//76. BuildSettings
	RegisterClass<BuildSettings>();
	//77. ResourceManager
	RegisterClass<ResourceManager>();
	//78. NetworkManager
	RegisterClass<NetworkManager>();
	//79. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//80. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//81. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//82. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//83. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//84. LevelGameManager
	RegisterClass<LevelGameManager>();
	//85. Skybox
	RegisterClass<Skybox>();
	//86. Avatar
	RegisterClass<Avatar>();
	//87. AnimatorController
	RegisterClass<AnimatorController>();
	//88. RenderSettings
	RegisterClass<RenderSettings>();
	//89. Light
	RegisterClass<Light>();
	//90. FlareLayer
	RegisterClass<FlareLayer>();
	//91. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//92. TerrainCollider
	RegisterClass<TerrainCollider>();
	//93. TerrainData
	RegisterClass<TerrainData>();
	//94. LightmapSettings
	RegisterClass<LightmapSettings>();
	//95. NavMeshSettings
	RegisterClass<NavMeshSettings>();
	//96. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//97. Terrain
	RegisterClass<Terrain>();
	//98. NavMeshData
	RegisterClass<NavMeshData>();
	//99. EllipsoidParticleEmitter
	RegisterClass<EllipsoidParticleEmitter>();
	//100. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//101. LightProbes
	RegisterClass<LightProbes>();

}
