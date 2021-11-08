﻿#pragma once

#include "ui_base_item.h"

namespace ui
{
	namespace dropdowns
	{
		template < typename t = int >
		struct dropdown_item_t {
			const char* m_name;
			t			m_value;
		};

		static std::vector< dropdown_item_t< > > activation_types_aimbot = {
			{ xors( "always" ), 0 },
			{ xors( "on key" ), 1 },
		};

		static std::vector< dropdown_item_t< > > silent_aimbot_types = {
			{ xors( "none" ), 0 },
			{ xors( "client-side" ), 1 },
			{ xors( "server-side" ), 2 },
		};

		static std::vector< dropdown_item_t< > > hitboxes = {
			{ xors( "hitscan" ), -1 },
			{ xors( "head" ), 0 },
			{ xors( "neck" ), 1 },
			{ xors( "pelvis" ), 3 },
			{ xors( "chest" ), 6 },
			{ xors( "thorax" ), 5 },
		};

		static std::vector< dropdown_item_t< > > auto_stop = {
	{ xors("none"), 0 },
	{ xors("hitchance"), 1 },
	{ xors("hitchance + lag"), 4 },
	{ xors("duck"), 5 },
	{ xors("slide"), 3 },
	{ xors("full"), 2 }
		};

		static std::vector< dropdown_item_t< > > antiaim_yaw = {
			{ xors( "normal" ), 0 },
			{ xors( "backwards" ), 1 },
			{ xors( "backwards spin" ), 2 },
			{ xors( "direction" ), 6 },
			{ xors( "switch" ), 7 },
			{ xors( "sideways" ), 3 },
			{ xors( "sine" ), 4 },
			{ xors( "random" ), 5 },
		};

		static std::vector< dropdown_item_t< > > delay_type = {
			{ xors( "none" ), 0 },
			{ xors( "time" ), 2 },
			{ xors( "velocity" ), 3 },
		};

		static std::vector< dropdown_item_t< > > antiaim_pitch = {
			{ xors( "normal" ), 0 },
			{ xors( "custom" ), 1 },
			{ xors( "flip" ), 2 },
			{ xors( "minimal" ), 3 },
			{ xors( "fake down" ), 4 },
			{ xors( "fake up" ), 5 },
			{ xors( "fake flip" ), 6 },
			{ xors( "random" ), 7 }
		};

		static std::vector< dropdown_item_t< > > antiaim_freestanding = {
			{ xors( "disabled" ), 0 },
			{ xors( "static" ), 1 },
			{ xors( "narrow angle" ), 2 },
			{ xors( "wide angle" ), 3 },
		};

		static std::vector< dropdown_item_t< > > antiaim_edge = {
			{ xors( "off" ), 0 },
			{ xors( "peek" ), 1 },
			{ xors( "full" ), 2 },
		};

		static std::vector< dropdown_item_t< > > antiaim_edge_type = {
			{ xors( "static" ), 0 },
			{ xors( "narrow angle" ), 1 },
			{ xors( "wide angle" ), 2 },
		};

		static std::vector< dropdown_item_t< > > fakelag_types = {
			{ xors( "disabled" ), 0 },
			{ xors( "adaptive" ), 1 },
			{ xors( "fluctuate" ), 2 },
			{ xors( "static" ), 3 },
		};

		static std::vector< dropdown_item_t< > > fakelag_fix_types = {
			{ xors( "disabled" ), 0 },
			{ xors( "wait" ), 1 },
			{ xors( "predict" ), 2 }
		};

		static std::vector< dropdown_item_t< > > activation_type_visuals = {
			{ xors( "never" ), 0 },
			{ xors( "always" ), 1 },
			{ xors( "on hold" ), 2 },
			{ xors( "toggle" ), 3 },
		};

		static std::vector< dropdown_item_t< > > configs = {
			{ xors( "config 1" ), 0 },
			{ xors( "config 2" ), 1 },
			{ xors( "config 3" ), 2 },
			{ xors( "config 4" ), 3 },
#if _DEBUG
			{ xors( "test" ), 4 },
#endif
		};

		static std::vector< dropdown_item_t< > > autostrafe_types = {
	{ xors("none"), 0 },
	{ xors("view"), 1 },
	{ xors("view + movement"), 2 }
		};


		static std::vector< dropdown_item_t< > > recorder_angles = {
			{ xors( "none" ), 0 },
			{ xors( "shot" ), 1 },
			{ xors( "all" ), 2 }
		};

		static std::vector< dropdown_item_t< > > baim_types = {
			{ xors( "off" ), 0 },
			{ xors( "basic" ), 1 },
			{ xors( "smart" ), 2 },
			{ xors( "aggressive" ), 3 },
			{ xors( "force" ), 4 },
		};

		static std::vector< dropdown_item_t< > > name_changers = {
			{ xors( "off" ), 0 },
			{ xors( "dollar" ), 1 },
			{ xors( "quantum" ), 2 },
		};

		static std::vector< dropdown_item_t< > > weapon_esp_types = {
			{ xors( "none" ), 0 },
			{ xors( "icon" ), 1 },
			{ xors( "name" ), 2 },
		};

		static std::vector< dropdown_item_t< > > fake_ping_activation = {
			{ xors( "off" ), 0 },
			{ xors( "on hold" ), 1 },
			{ xors( "toggle" ), 2 },
			{ xors( "always" ), 3 },
			{ xors( "auto" ), 4 }
		};

		static std::vector< dropdown_item_t< > > world_esp_type = {
			{ xors( "off" ), 0 },
			{ xors( "name" ), 1 },
			{ xors( "glow" ), 2 },
			{ xors( "both" ), 3 }
		};

		static std::vector< dropdown_item_t< > > multipoint_types = {
			{ xors( "off" ), 0 },
			{ xors( "minimal" ), 1 },
			{ xors( "vitals" ), 2 },
			{ xors( "full" ), 3 }
		};

		static std::vector< dropdown_item_t< > > edge_priority = {
			{ xors( "freestanding" ), 0 },
			{ xors( "edge" ), 1 }
		};

		static std::vector< dropdown_item_t< > > selection_type = {
			{ xors( "fov" ), 0 },
			{ xors( "distance" ), 1 },
			{ xors( "simulation time" ), 2 }
		};

		static std::vector< dropdown_item_t< > > autobuy_main_wep = {
			{ xors( "none" ), 0 },
			{ xors( "autosniper" ), 1 },
			{ xors( "scout" ), 2 },
			{ xors( "sniper" ), 3 },
			{ xors( "ak/m4" ), 4 },
			{ xors( "aug/sg" ), 5 },
			{ xors( "mac10/mp9" ), 6 },
		};

		static std::vector< dropdown_item_t< > > autobuy_second_wep = {
			{ xors( "none" ), 0 },
			{ xors( "deagle/r8" ), 1 },
			{ xors( "dualies" ), 2 },
		};

		static std::vector< dropdown_item_t< > > skin_knives = {
			{ xors( "none" ), 0 },
			{ xors( "bayonet" ), 1 },
			{ xors( "flip knife" ), 2 },
			{ xors( "gut knife" ), 3 },
			{ xors( "karambit" ), 4 },
			{ xors( "m9 bayonet" ), 5 },
			{ xors( "huntsman" ), 6 },
		};

		static std::vector< dropdown_item_t< > > weapon_configs = {
			{ xors( "general" ), 0 },
			{ xors( "heavy pistols" ), 1 },
			{ xors( "snipers" ), 2 },
			{ xors( "auto snipers" ), 3 }
		};

		static std::vector< dropdown_item_t< > > tracer_type = {
			{ xors( "none" ), 0 },
			{ xors( "line" ), 1 },
			{ xors( "beam" ), 2 }
		};

		static std::vector< dropdown_item_t< > > gloves = {
			{ xors( "none" ), 0 },
			{ xors( "bloodhound" ), 5027 },
			{ xors( "sporty" ), 5030 },
			{ xors( "slick" ), 5031 },
			{ xors( "handwrap" ), 5032 },
			{ xors( "motorcycle" ), 5033 },
			{ xors( "specialist" ), 5034 }
		};

		static std::vector< dropdown_item_t< > > glove_skins = {
			{ xors( "charred" ), 10006 },
		{ xors( "snakebite" ), 10007 },
		{ xors( "bronzed" ), 10008 },
		{ xors( "leather" ), 10009 },
		{ xors( "spruce ddpat" ), 10010 },
		{ xors( "lunar weave" ), 10013 },
		{ xors( "convoy" ), 10015 },
		{ xors( "crimson weave" ), 10016 },
		{ xors( "superconductor" ), 10018 },
		{ xors( "arid" ), 10019 },
		{ xors( "slaughter" ), 10021 },
		{ xors( "eclipse" ), 10024 },
		{ xors( "spearmint" ), 10026 },
		{ xors( "boom!" ), 10027 },
		{ xors( "cool mint" ), 10028 },
		{ xors( "forest ddpat" ), 10030 },
		{ xors( "crimson kimono" ), 10033 },
		{ xors( "emerald web" ), 10034 },
		{ xors( "foundation" ), 10035 },
		{ xors( "badlands" ), 10036 },
		{ xors( "pandora's box" ), 10037 },
		{ xors( "hedge maze" ), 10038 },
		{ xors( "guerrilla" ), 10039 },
		{ xors( "diamondback" ), 10040 },
		{ xors( "king snake" ), 10041 },
		{ xors( "imperial plaid" ), 10042 },
		{ xors( "overtake" ), 10043 },
		{ xors( "racing green" ), 10044 },
		{ xors( "amphibious" ), 10045 },
		{ xors( "bronze morph" ), 10046 },
		{ xors( "omega" ), 10047 },
		{ xors( "vice" ), 10048 },
		{ xors( "pow!" ), 10049 },
		{ xors( "turtle" ), 10050 },
		{ xors( "transport" ), 10051 },
		{ xors( "polygon" ), 10052 },
		{ xors( "cobalt skulls" ), 10053 },
		{ xors( "overprint" ), 10054 },
		{ xors( "duct tape" ), 10055 },
		{ xors( "arboreal" ), 10056 },
		{ xors( "emerald" ), 10057 },
		{ xors( "mangrove" ), 10058 },
		{ xors( "rattler" ), 10059 },
		{ xors( "case hardened" ), 10060 },
		{ xors( "crimson web" ), 10061 },
		{ xors( "buckshot" ), 10062 },
		{ xors( "fade" ), 10063 },
		{ xors( "mogul" ), 10064 },
		};

		static std::vector< dropdown_item_t< > > skins = {
			{ xors( "none" ), -1 },
			{ xors( "groundwater" ), 2 },
		{ xors( "candy apple" ), 3 },
		{ xors( "forest ddpat" ), 5 },
		{ xors( "arctic camo" ), 6 },
		{ xors( "desert storm" ), 8 },
		{ xors( "bengal tiger" ), 9 },
		{ xors( "copperhead" ), 10 },
		{ xors( "skulls" ), 11 },
		{ xors( "crimson web" ), 12 },
		{ xors( "blue streak" ), 13 },
		{ xors( "red laminate" ), 14 },
		{ xors( "gunsmoke" ), 15 },
		{ xors( "jungle tiger" ), 16 },
		{ xors( "urban ddpat" ), 17 },
		{ xors( "virus" ), 20 },
		{ xors( "granite marbleized" ), 21 },
		{ xors( "contrast spray" ), 22 },
		{ xors( "forest leaves" ), 25 },
		{ xors( "lichen dashed" ), 26 },
		{ xors( "bone mask" ), 27 },
		{ xors( "anodized navy" ), 28 },
		{ xors( "snake camo" ), 30 },
		{ xors( "silver" ), 32 },
		{ xors( "hot rod" ), 33 },
		{ xors( "metallic ddpat" ), 34 },
		{ xors( "ossified" ), 36 },
		{ xors( "blaze" ), 37 },
		{ xors( "fade" ), 38 },
		{ xors( "bulldozer" ), 39 },
		{ xors( "night" ), 40 },
		{ xors( "copper" ), 41 },
		{ xors( "blue steel" ), 42 },
		{ xors( "stained" ), 43 },
		{ xors( "case hardened" ), 44 },
		{ xors( "contractor" ), 46 },
		{ xors( "colony" ), 47 },
		{ xors( "dragon tattoo" ), 48 },
		{ xors( "lightning strike" ), 51 },
		{ xors( "slaughter" ), 59 },
		{ xors( "dark water" ), 60 },
		{ xors( "hypnotic" ), 61 },
		{ xors( "bloomstick" ), 62 },
		{ xors( "cold blooded" ), 67 },
		{ xors( "carbon fiber" ), 70 },
		{ xors( "scorpion" ), 71 },
		{ xors( "safari mesh" ), 72 },
		{ xors( "wings" ), 73 },
		{ xors( "polar camo" ), 74 },
		{ xors( "blizzard marbleized" ), 75 },
		{ xors( "winter forest" ), 76 },
		{ xors( "boreal forest" ), 77 },
		{ xors( "forest night" ), 78 },
		{ xors( "orange ddpat" ), 83 },
		{ xors( "pink ddpat" ), 84 },
		{ xors( "mudder" ), 90 },
		{ xors( "cyanospatter" ), 92 },
		{ xors( "caramel" ), 93 },
		{ xors( "grassland" ), 95 },
		{ xors( "blue spruce" ), 96 },
		{ xors( "ultraviolet" ), 98 },
		{ xors( "sand dune" ), 99 },
		{ xors( "storm" ), 100 },
		{ xors( "tornado" ), 101 },
		{ xors( "whiteout" ), 102 },
		{ xors( "grassland leaves" ), 104 },
		{ xors( "polar mesh" ), 107 },
		{ xors( "condemned" ), 110 },
		{ xors( "glacier mesh" ), 111 },
		{ xors( "sand mesh" ), 116 },
		{ xors( "sage spray" ), 119 },
		{ xors( "jungle spray" ), 122 },
		{ xors( "sand spray" ), 124 },
		{ xors( "urban perforated" ), 135 },
		{ xors( "waves perforated" ), 136 },
		{ xors( "orange peel" ), 141 },
		{ xors( "urban masked" ), 143 },
		{ xors( "jungle dashed" ), 147 },
		{ xors( "sand dashed" ), 148 },
		{ xors( "urban dashed" ), 149 },
		{ xors( "jungle" ), 151 },
		{ xors( "demolition" ), 153 },
		{ xors( "afterimage" ), 154 },
		{ xors( "bullet rain" ), 155 },
		{ xors( "death by kitty" ), 156 },
		{ xors( "palm" ), 157 },
		{ xors( "walnut" ), 158 },
		{ xors( "brass" ), 159 },
		{ xors( "splash" ), 162 },
		{ xors( "modern hunter" ), 164 },
		{ xors( "splash jam" ), 165 },
		{ xors( "blaze orange" ), 166 },
		{ xors( "radiation hazard" ), 167 },
		{ xors( "nuclear threat" ), 168 },
		{ xors( "fallout warning" ), 169 },
		{ xors( "predator" ), 170 },
		{ xors( "irradiated alert" ), 171 },
		{ xors( "black laminate" ), 172 },
		{ xors( "boom" ), 174 },
		{ xors( "scorched" ), 175 },
		{ xors( "faded zebra" ), 176 },
		{ xors( "memento" ), 177 },
		{ xors( "doomkitty" ), 178 },
		{ xors( "nuclear threat" ), 179 },
		{ xors( "fire serpent" ), 180 },
		{ xors( "corticera" ), 181 },
		{ xors( "emerald dragon" ), 182 },
		{ xors( "overgrowth" ), 183 },
		{ xors( "corticera" ), 184 },
		{ xors( "golden koi" ), 185 },
		{ xors( "wave spray" ), 186 },
		{ xors( "zirka" ), 187 },
		{ xors( "graven" ), 188 },
		{ xors( "bright water" ), 189 },
		{ xors( "black limba" ), 190 },
		{ xors( "tempest" ), 191 },
		{ xors( "shattered" ), 192 },
		{ xors( "bone pile" ), 193 },
		{ xors( "spitfire" ), 194 },
		{ xors( "demeter" ), 195 },
		{ xors( "emerald" ), 196 },
		{ xors( "anodized navy" ), 197 },
		{ xors( "hazard" ), 198 },
		{ xors( "dry season" ), 199 },
		{ xors( "mayan dreams" ), 200 },
		{ xors( "palm" ), 201 },
		{ xors( "jungle ddpat" ), 202 },
		{ xors( "rust coat" ), 203 },
		{ xors( "mosaico" ), 204 },
		{ xors( "jungle" ), 205 },
		{ xors( "tornado" ), 206 },
		{ xors( "facets" ), 207 },
		{ xors( "sand dune" ), 208 },
		{ xors( "groundwater" ), 209 },
		{ xors( "anodized gunmetal" ), 210 },
		{ xors( "ocean foam" ), 211 },
		{ xors( "graphite" ), 212 },
		{ xors( "ocean foam" ), 213 },
		{ xors( "graphite" ), 214 },
		{ xors( "x-ray" ), 215 },
		{ xors( "blue titanium" ), 216 },
		{ xors( "blood tiger" ), 217 },
		{ xors( "hexane" ), 218 },
		{ xors( "hive" ), 219 },
		{ xors( "hemoglobin" ), 220 },
		{ xors( "serum" ), 221 },
		{ xors( "blood in the water" ), 222 },
		{ xors( "nightshade" ), 223 },
		{ xors( "water sigil" ), 224 },
		{ xors( "ghost camo" ), 225 },
		{ xors( "blue laminate" ), 226 },
		{ xors( "electric hive" ), 227 },
		{ xors( "blind spot" ), 228 },
		{ xors( "azure zebra" ), 229 },
		{ xors( "steel disruption" ), 230 },
		{ xors( "cobalt disruption" ), 231 },
		{ xors( "crimson web" ), 232 },
		{ xors( "tropical storm" ), 233 },
		{ xors( "ash wood" ), 234 },
		{ xors( "varicamo" ), 235 },
		{ xors( "night ops" ), 236 },
		{ xors( "urban rubble" ), 237 },
		{ xors( "varicamo blue" ), 238 },
		{ xors( "calicamo" ), 240 },
		{ xors( "hunting blind" ), 241 },
		{ xors( "army mesh" ), 242 },
		{ xors( "gator mesh" ), 243 },
		{ xors( "teardown" ), 244 },
		{ xors( "army recon" ), 245 },
		{ xors( "amber fade" ), 246 },
		{ xors( "damascus steel" ), 247 },
		{ xors( "red quartz" ), 248 },
		{ xors( "cobalt quartz" ), 249 },
		{ xors( "full stop" ), 250 },
		{ xors( "pit viper" ), 251 },
		{ xors( "silver quartz" ), 252 },
		{ xors( "acid fade" ), 253 },
		{ xors( "nitro" ), 254 },
		{ xors( "asiimov" ), 255 },
		{ xors( "the kraken" ), 256 },
		{ xors( "guardian" ), 257 },
		{ xors( "mehndi" ), 258 },
		{ xors( "redline" ), 259 },
		{ xors( "pulse" ), 260 },
		{ xors( "marina" ), 261 },
		{ xors( "rose iron" ), 262 },
		{ xors( "rising skull" ), 263 },
		{ xors( "sandstorm" ), 264 },
		{ xors( "kami" ), 265 },
		{ xors( "magma" ), 266 },
		{ xors( "cobalt halftone" ), 267 },
		{ xors( "tread plate" ), 268 },
		{ xors( "the fuschia is now" ), 269 },
		{ xors( "victoria" ), 270 },
		{ xors( "undertow" ), 271 },
		{ xors( "titanium bit" ), 272 },
		{ xors( "heirloom" ), 273 },
		{ xors( "copper galaxy" ), 274 },
		{ xors( "red fragcam" ), 275 },
		{ xors( "panther" ), 276 },
		{ xors( "stainless" ), 277 },
		{ xors( "blue fissure" ), 278 },
		{ xors( "asiimov" ), 279 },
		{ xors( "chameleon" ), 280 },
		{ xors( "corporal" ), 281 },
		{ xors( "redline" ), 282 },
		{ xors( "trigon" ), 283 },
		{ xors( "heat" ), 284 },
		{ xors( "terrain" ), 285 },
		{ xors( "antique" ), 286 },
		{ xors( "pulse" ), 287 },
		{ xors( "sergeant" ), 288 },
		{ xors( "sandstorm" ), 289 },
		{ xors( "guardian" ), 290 },
		{ xors( "heaven guard" ), 291 },
		{ xors( "death rattle" ), 293 },
		{ xors( "green apple" ), 294 },
		{ xors( "franklin" ), 295 },
		{ xors( "meteorite" ), 296 },
		{ xors( "tuxedo" ), 297 },
		{ xors( "army sheen" ), 298 },
		{ xors( "caged steel" ), 299 },
		{ xors( "emerald pinstripe" ), 300 },
		{ xors( "atomic alloy" ), 301 },
		{ xors( "vulcan" ), 302 },
		{ xors( "isaac" ), 303 },
		{ xors( "slashed" ), 304 },
		{ xors( "torque" ), 305 },
		{ xors( "antique" ), 306 },
		{ xors( "retribution" ), 307 },
		{ xors( "kami" ), 308 },
		{ xors( "howl" ), 309 },
		{ xors( "curse" ), 310 },
		{ xors( "desert warfare" ), 311 },
		{ xors( "cyrex" ), 312 },
		{ xors( "orion" ), 313 },
		{ xors( "heaven guard" ), 314 },
		{ xors( "poison dart" ), 315 },
		{ xors( "jaguar" ), 316 },
		{ xors( "bratatat" ), 317 },
		{ xors( "road rash" ), 318 },
		{ xors( "detour" ), 319 },
		{ xors( "red python" ), 320 },
		{ xors( "master piece" ), 321 },
		{ xors( "nitro" ), 322 },
		{ xors( "rust coat" ), 323 },
		{ xors( "chalice" ), 325 },
		{ xors( "knight" ), 326 },
		{ xors( "chainmail" ), 327 },
		{ xors( "hand cannon" ), 328 },
		{ xors( "dark age" ), 329 },
		{ xors( "briar" ), 330 },
		{ xors( "royal blue" ), 332 },
		{ xors( "indigo" ), 333 },
		{ xors( "twist" ), 334 },
		{ xors( "module" ), 335 },
		{ xors( "desert-strike" ), 336 },
		{ xors( "tatter" ), 337 },
		{ xors( "pulse" ), 338 },
		{ xors( "caiman" ), 339 },
		{ xors( "jet set" ), 340 },
		{ xors( "first class" ), 341 },
		{ xors( "leather" ), 342 },
		{ xors( "commuter" ), 343 },
		{ xors( "dragon lore" ), 344 },
		{ xors( "first class" ), 345 },
		{ xors( "coach class" ), 346 },
		{ xors( "pilot" ), 347 },
		{ xors( "red leather" ), 348 },
		{ xors( "osiris" ), 349 },
		{ xors( "tigris" ), 350 },
		{ xors( "conspiracy" ), 351 },
		{ xors( "fowl play" ), 352 },
		{ xors( "water elemental" ), 353 },
		{ xors( "urban hazard" ), 354 },
		{ xors( "desert-strike" ), 355 },
		{ xors( "koi" ), 356 },
		{ xors( "ivory" ), 357 },
		{ xors( "supernova" ), 358 },
		{ xors( "asiimov" ), 359 },
		{ xors( "cyrex" ), 360 },
		{ xors( "abyss" ), 361 },
		{ xors( "labyrinth" ), 362 },
		{ xors( "traveler" ), 363 },
		{ xors( "business class" ), 364 },
		{ xors( "olive plaid" ), 365 },
		{ xors( "green plaid" ), 366 },
		{ xors( "reactor" ), 367 },
		{ xors( "setting sun" ), 368 },
		{ xors( "nuclear waste" ), 369 },
		{ xors( "bone machine" ), 370 },
		{ xors( "styx" ), 371 },
		{ xors( "nuclear garden" ), 372 },
		{ xors( "contamination" ), 373 },
		{ xors( "toxic" ), 374 },
		{ xors( "radiation hazard" ), 375 },
		{ xors( "chemical green" ), 376 },
		{ xors( "hot shot" ), 377 },
		{ xors( "fallout warning" ), 378 },
		{ xors( "cerberus" ), 379 },
		{ xors( "wasteland rebel" ), 380 },
		{ xors( "grinder" ), 381 },
		{ xors( "murky" ), 382 },
		{ xors( "basilisk" ), 383 },
		{ xors( "griffin" ), 384 },
		{ xors( "firestarter" ), 385 },
		{ xors( "dart" ), 386 },
		{ xors( "urban hazard" ), 387 },
		{ xors( "cartel" ), 388 },
		{ xors( "fire elemental" ), 389 },
		{ xors( "highwayman" ), 390 },
		{ xors( "cardiac" ), 391 },
		{ xors( "delusion" ), 392 },
		{ xors( "tranquility" ), 393 },
		{ xors( "cartel" ), 394 },
		{ xors( "man-o'-war" ), 395 },
		{ xors( "urban shock" ), 396 },
		{ xors( "naga" ), 397 },
		{ xors( "chatterbox" ), 398 },
		{ xors( "catacombs" ), 399 },
		{ xors( "dragon king" ), 400 },
		{ xors( "system lock" ), 401 },
		{ xors( "malachite" ), 402 },
		{ xors( "deadly poison" ), 403 },
		{ xors( "muertos" ), 404 },
		{ xors( "serenity" ), 405 },
		{ xors( "grotto" ), 406 },
		{ xors( "quicksilver" ), 407 },
		{ xors( "tiger tooth" ), 409 },
		{ xors( "damascus steel" ), 410 },
		{ xors( "damascus steel" ), 411 },
		{ xors( "marble fade" ), 413 },
		{ xors( "rust coat" ), 414 },
		{ xors( "doppler" ), 415 },
		{ xors( "doppler" ), 416 },
		{ xors( "doppler" ), 417 },
		{ xors( "doppler" ), 418 },
		{ xors( "doppler" ), 419 },
		{ xors( "doppler" ), 420 },
		{ xors( "doppler" ), 421 },
		{ xors( "elite build" ), 422 },
		{ xors( "armor core" ), 423 },
		{ xors( "worm god" ), 424 },
		{ xors( "bronze deco" ), 425 },
		{ xors( "valence" ), 426 },
		{ xors( "monkey business" ), 427 },
		{ xors( "eco" ), 428 },
		{ xors( "djinn" ), 429 },
		{ xors( "hyper beast" ), 430 },
		{ xors( "heat" ), 431 },
		{ xors( "man-o'-war" ), 432 },
		{ xors( "neon rider" ), 433 },
		{ xors( "origami" ), 434 },
		{ xors( "pole position" ), 435 },
		{ xors( "grand prix" ), 436 },
		{ xors( "twilight galaxy" ), 437 },
		{ xors( "chronos" ), 438 },
		{ xors( "hades" ), 439 },
		{ xors( "icarus fell" ), 440 },
		{ xors( "minotaur's labyrinth" ), 441 },
		{ xors( "asterion" ), 442 },
		{ xors( "pathfinder" ), 443 },
		{ xors( "daedalus" ), 444 },
		{ xors( "hot rod" ), 445 },
		{ xors( "medusa" ), 446 },
		{ xors( "duelist" ), 447 },
		{ xors( "pandora's box" ), 448 },
		{ xors( "poseidon" ), 449 },
		{ xors( "moon in libra" ), 450 },
		{ xors( "sun in leo" ), 451 },
		{ xors( "shipping forecast" ), 452 },
		{ xors( "emerald" ), 453 },
		{ xors( "para green" ), 454 },
		{ xors( "akihabara accept" ), 455 },
		{ xors( "hydroponic" ), 456 },
		{ xors( "bamboo print" ), 457 },
		{ xors( "bamboo shadow" ), 458 },
		{ xors( "bamboo forest" ), 459 },
		{ xors( "aqua terrace" ), 460 },
		{ xors( "counter terrace" ), 462 },
		{ xors( "terrace" ), 463 },
		{ xors( "neon kimono" ), 464 },
		{ xors( "orange kimono" ), 465 },
		{ xors( "crimson kimono" ), 466 },
		{ xors( "mint kimono" ), 467 },
		{ xors( "midnight storm" ), 468 },
		{ xors( "sunset storm" ), 469 },
		{ xors( "sunset storm" ), 470 },
		{ xors( "daybreak" ), 471 },
		{ xors( "impact drill" ), 472 },
		{ xors( "seabird" ), 473 },
		{ xors( "aquamarine revenge" ), 474 },
		{ xors( "hyper beast" ), 475 },
		{ xors( "yellow jacket" ), 476 },
		{ xors( "neural net" ), 477 },
		{ xors( "rocket pop" ), 478 },
		{ xors( "bunsen burner" ), 479 },
		{ xors( "evil daimyo" ), 480 },
		{ xors( "nemesis" ), 481 },
		{ xors( "ruby poison dart" ), 482 },
		{ xors( "loudmouth" ), 483 },
		{ xors( "ranger" ), 484 },
		{ xors( "handgun" ), 485 },
		{ xors( "elite build" ), 486 },
		{ xors( "cyrex" ), 487 },
		{ xors( "riot" ), 488 },
		{ xors( "torque" ), 489 },
		{ xors( "frontside misty" ), 490 },
		{ xors( "dualing dragons" ), 491 },
		{ xors( "survivor z" ), 492 },
		{ xors( "flux" ), 493 },
		{ xors( "stone cold" ), 494 },
		{ xors( "wraiths" ), 495 },
		{ xors( "nebula crusader" ), 496 },
		{ xors( "golden coil" ), 497 },
		{ xors( "rangeen" ), 498 },
		{ xors( "cobalt core" ), 499 },
		{ xors( "special delivery" ), 500 },
		{ xors( "wingshot" ), 501 },
		{ xors( "green marine" ), 502 },
		{ xors( "big iron" ), 503 },
		{ xors( "kill confirmed" ), 504 },
		{ xors( "scumbria" ), 505 },
		{ xors( "point disarray" ), 506 },
		{ xors( "ricochet" ), 507 },
		{ xors( "fuel rod" ), 508 },
		{ xors( "corinthian" ), 509 },
		{ xors( "retrobution" ), 510 },
		{ xors( "the executioner" ), 511 },
		{ xors( "royal paladin" ), 512 },
		{ xors( "power loader" ), 514 },
		{ xors( "imperial" ), 515 },
		{ xors( "shapewood" ), 516 },
		{ xors( "yorick" ), 517 },
		{ xors( "outbreak" ), 518 },
		{ xors( "tiger moth" ), 519 },
		{ xors( "avalanche" ), 520 },
		{ xors( "teclu burner" ), 521 },
		{ xors( "fade" ), 522 },
		{ xors( "amber fade" ), 523 },
		{ xors( "fuel injector" ), 524 },
		{ xors( "elite build" ), 525 },
		{ xors( "photic zone" ), 526 },
		{ xors( "kumicho dragon" ), 527 },
		{ xors( "cartel" ), 528 },
		{ xors( "valence" ), 529 },
		{ xors( "triumvirate" ), 530 },
		{ xors( "royal legion" ), 532 },
		{ xors( "the battlestar" ), 533 },
		{ xors( "lapis gator" ), 534 },
		{ xors( "praetorian" ), 535 },
		{ xors( "impire" ), 536 },
		{ xors( "hyper beast" ), 537 },
		{ xors( "necropos" ), 538 },
		{ xors( "jambiya" ), 539 },
		{ xors( "lead conduit" ), 540 },
		{ xors( "fleet flock" ), 541 },
		{ xors( "judgement of anubis" ), 542 },
		{ xors( "red astor" ), 543 },
		{ xors( "ventilators" ), 544 },
		{ xors( "orange crash" ), 545 },
		{ xors( "firefight" ), 546 },
		{ xors( "spectre" ), 547 },
		{ xors( "chantico's fire" ), 548 },
		{ xors( "bioleak" ), 549 },
		{ xors( "oceanic" ), 550 },
		{ xors( "asiimov" ), 551 },
		{ xors( "fubar" ), 552 },
		{ xors( "atlas" ), 553 },
		{ xors( "ghost crusader" ), 554 },
		{ xors( "re-entry" ), 555 },
		{ xors( "primal saber" ), 556 },
		{ xors( "black tie" ), 557 },
		{ xors( "lore" ), 558 },
		{ xors( "lore" ), 559 },
		{ xors( "lore" ), 560 },
		{ xors( "lore" ), 561 },
		{ xors( "lore" ), 562 },
		{ xors( "black laminate" ), 563 },
		{ xors( "black laminate" ), 564 },
		{ xors( "black laminate" ), 565 },
		{ xors( "black laminate" ), 566 },
		{ xors( "black laminate" ), 567 },
		{ xors( "gamma doppler" ), 568 },
		{ xors( "gamma doppler" ), 569 },
		{ xors( "gamma doppler" ), 570 },
		{ xors( "gamma doppler" ), 571 },
		{ xors( "gamma doppler" ), 572 },
		{ xors( "autotronic" ), 573 },
		{ xors( "autotronic" ), 574 },
		{ xors( "autotronic" ), 575 },
		{ xors( "autotronic" ), 576 },
		{ xors( "autotronic" ), 577 },
		{ xors( "bright water" ), 578 },
		{ xors( "bright water" ), 579 },
		{ xors( "freehand" ), 580 },
		{ xors( "freehand" ), 581 },
		{ xors( "freehand" ), 582 },
		{ xors( "aristocrat" ), 583 },
		{ xors( "phobos" ), 584 },
		{ xors( "violent daimyo" ), 585 },
		{ xors( "wasteland rebel" ), 586 },
		{ xors( "mecha industries" ), 587 },
		{ xors( "desolate space" ), 588 },
		{ xors( "carnivore" ), 589 },
		{ xors( "exo" ), 590 },
		{ xors( "imperial dragon" ), 591 },
		{ xors( "iron clad" ), 592 },
		{ xors( "chopper" ), 593 },
		{ xors( "harvester" ), 594 },
		{ xors( "reboot" ), 595 },
		{ xors( "limelight" ), 596 },
		{ xors( "bloodsport" ), 597 },
		{ xors( "aerial" ), 598 },
		{ xors( "ice cap" ), 599 },
		{ xors( "neon revolution" ), 600 },
		{ xors( "syd mead" ), 601 },
		{ xors( "imprint" ), 602 },
		{ xors( "directive" ), 603 },
		{ xors( "roll cage" ), 604 },
		{ xors( "scumbria" ), 605 },
		{ xors( "ventilator" ), 606 },
		{ xors( "weasel" ), 607 },
		{ xors( "petroglyph" ), 608 },
		{ xors( "airlock" ), 609 },
		{ xors( "dazzle" ), 610 },
		{ xors( "grim" ), 611 },
		{ xors( "powercore" ), 612 },
		{ xors( "triarch" ), 613 },
		{ xors( "fuel injector" ), 614 },
		{ xors( "briefing" ), 615 },
		{ xors( "slipstream" ), 616 },
		{ xors( "doppler" ), 617 },
		{ xors( "doppler" ), 618 },
		{ xors( "doppler" ), 619 },
		{ xors( "ultraviolet" ), 620 },
		{ xors( "ultraviolet" ), 621 },
		{ xors( "polymer" ), 622 },
		{ xors( "ironwork" ), 623 },
		{ xors( "dragonfire" ), 624 },
		{ xors( "royal consorts" ), 625 },
		{ xors( "mecha industries" ), 626 },
		{ xors( "cirrus" ), 627 },
		{ xors( "stinger" ), 628 },
		{ xors( "black sand" ), 629 },
		{ xors( "sand scale" ), 630 },
		{ xors( "flashback" ), 631 },
		{ xors( "buzz kill" ), 632 },
		{ xors( "sonar" ), 633 },
		{ xors( "gila" ), 634 },
		{ xors( "turf" ), 635 },
		{ xors( "shallow grave" ), 636 },
		{ xors( "cyrex" ), 637 },
		{ xors( "wasteland princess" ), 638 },
		{ xors( "bloodsport" ), 639 },
		{ xors( "fever dream" ), 640 },
		{ xors( "jungle slipstream" ), 641 },
		{ xors( "blueprint" ), 642 },
		{ xors( "xiangliu" ), 643 },
		{ xors( "decimator" ), 644 },
		{ xors( "oxide blaze" ), 645 },
		{ xors( "capillary" ), 646 },
		{ xors( "crimson tsunami" ), 647 },
		{ xors( "emerald poison dart" ), 648 },
		{ xors( "akoben" ), 649 },
		{ xors( "ripple" ), 650 },
		{ xors( "last dive" ), 651 },
		{ xors( "scaffold" ), 652 },
		{ xors( "neo-noir" ), 653 },
		{ xors( "seasons" ), 654 },
		};
	}
}