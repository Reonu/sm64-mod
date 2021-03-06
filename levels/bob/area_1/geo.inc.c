#include "src/game/envfx_snow.h"

const GeoLayout bob_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -961, 651, 1247, bob_dl_Termina_mesh),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_Background_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_Background_001_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_Background_002_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_Background_003_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_BackgroundTrees_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Bush_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Bush_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Clock_Tower_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_ClockTownEntrance_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_ClockTownEntrance_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_ClockTownEntrance_002_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_Concha_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_ClockTownWall_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_ClockTownWall_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_ClockTownWall_002_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_ClockTownWall_003_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_Fence_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_Fence_001_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_Fence_002_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_Fences_mesh),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bob_dl_Fountain_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Fountain_001_mesh),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bob_dl_FountainWater_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Grass_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -5258, 0, 0, bob_dl_Ikana_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Ikana_Pillar_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Ikana_Pillar_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Ikana_Pillar_002_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Ikana_Pillar_003_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Ikana_Pillar_004_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Ikana_Pillar_005_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Ikana_Pillar_006_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1812, -125, -270, bob_dl_Ikana_Pillar_007_mesh),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, -154, 14538, -1955),
			GEO_OPEN_NODE(),
				GEO_SHADOW(1, 255, 819),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Moon_mesh),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Mountain_mesh),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bob_dl_Mountain_halo_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Mountains_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Mountains_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Mountains_002_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Mushroom_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Mushroom_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Mushroom_002_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Mushroom_003_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Mushroom_004_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Mushroom_005_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_OOB_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_OOB_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Observatory_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_ObservatoryFence_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Pillar_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Pillar_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Pillar_002_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Pillar_003_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Pillar_004_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Pillar_005_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Pillar_006_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Pillar_007_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Pillar_008_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Pillar_009_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_RomaniGate_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_RomaniGate_001_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -775, 492, 2514, bob_dl_Roof_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Roof_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Roof_002_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Roof_003_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Roof_004_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Roof_005_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 4768, 610, -2685, bob_dl_Roof_006_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5252, 621, -2310, bob_dl_Roof_007_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1184, 642, 2714, bob_dl_Roof_008_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Sea_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Star_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Termina_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Tree_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Tree_stub_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Tree_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Tree_002_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Tree_003_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Tree_004_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_Tunnel_mesh),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bob_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -1000, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bob_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bob_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
