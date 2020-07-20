removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

_RandomHeadgear = selectRandom ["FGN_AAF_Cap_Lizard","FGN_AAF_PASGT_Lizard","FGN_AAF_PASGT_Lizard_ESS","FGN_AAF_PASGT_Lizard_ESS_2","rhsgref_helmet_pasgt_olive"];
this addHeadgear _RandomHeadgear;
_RandomGoggles = selectRandom ["FGN_AAF_Shemag_tan","FGN_AAF_Shemag","rhs_scarf","","",""];
this addGoggles _RandomGoggles;
this forceaddUniform "FGN_AAF_M93_Lizard";
_RandomVest = selectRandom ["FGN_AAF_M99Vest_Lizard_Rifleman","FGN_AAF_M99Vest_Khaki_Rifleman"];
this addVest _RandomVest;
this addBackpack "FGN_AAF_TacticalBackpack_Lizard";

this addWeapon "rhs_weap_m70ab2";
this addPrimaryWeaponItem "rhs_acc_2dpZenit";
this addPrimaryWeaponItem "rhs_30Rnd_762x39mm";
this addWeapon "Binocular";

this addItemToUniform "FirstAidKit";
for "_i" from 1 to 4 do {this addItemToVest "rhs_30Rnd_762x39mm";};
for "_i" from 1 to 2 do {this addItemToVest "rhs_grenade_mkii_mag";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhsusf_100Rnd_762x51_m62_tracer";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhsusf_100Rnd_762x51";};
this addItemToBackpack "rhsusf_50Rnd_762x51_m62_tracer";
this addItemToBackpack "rhsusf_50Rnd_762x51";
this linkItem "ItemWatch";