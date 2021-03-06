#ifndef _NX_NWN_STRUCT_CNWSCOMBATATTACKDATA_
#define _NX_NWN_STRUCT_CNWSCOMBATATTACKDATA_
 
 struct CNWSCombatAttackData_s {
  unsigned __int8 AttackGroup;
  unsigned __int8 field_01;
  unsigned __int16 AnimationLength;
  unsigned __int32 ReactObject;
  unsigned __int16 ReaxnDelay;
  unsigned __int16 ReaxnAnimation;
  unsigned __int16 ReaxnAnimLength;
  unsigned __int8 ToHitRoll;
  unsigned __int8 ThreatRoll;
  unsigned __int32 ToHitMod;
  unsigned __int8 MissedBy;
  unsigned __int8 field_15;
  unsigned __int16 Damage[13];
  /*unsigned __int16 Damage_Bludgeoning;
  unsigned __int16 Damage_Piercing;
  unsigned __int16 Damage_Slashing;
  unsigned __int16 Damage_Magical;
  unsigned __int16 Damage_Acid;
  unsigned __int16 Damage_cold;
  unsigned __int16 Damage_Divine;
  unsigned __int16 Damage_Electrical;
  unsigned __int16 Damage_Fire;
  unsigned __int16 Damage_Negative;
  unsigned __int16 Damage_Positive;
  unsigned __int16 Damage_Sonic;
  unsigned __int16 BaseDamage;*/
  unsigned __int8 WeaponAttackType;
  unsigned __int8 AttackMode;
  unsigned __int8 Concealment;
  unsigned __int8 field_33;
  unsigned __int32 RangedAttack;//34
  unsigned __int32 SneakAttack;//probably bool 38
  unsigned __int32 DeathAttack;//probably bool 3c
  unsigned __int32 KillingBlow;//40
  unsigned __int32 CoupDeGrace;//44
  unsigned __int32 CriticalThreat;//48
  unsigned __int32 AttackDeflected;//4c
  unsigned __int8 AttackResult;//50
  unsigned __int8 field_51;//51
  unsigned __int16 AttackType;//52
  unsigned __int16 field_54;
  unsigned __int16 field_56;
  float RangedTargetX;
  float RangedTargetY;
  float RangedTargetZ;
  unsigned __int32 AmmoItem;
  CExoString AttackDebugText;
  CExoString DamageDebugText;
  unsigned __int32 field_78;
  unsigned __int32 field_7C_a12;
  unsigned __int32 field_80;
  unsigned __int32 field_84;
  unsigned __int32 field_88_a12;
  unsigned __int32 field_8C;
  unsigned __int32 field_90;
  unsigned __int32 field_94_a12;
  unsigned __int32 field_98;
  CNWCCMessageData **Messages;//9C
  int Messages_count;//A0
  int Messages_alloc;//A4

  CNWSCombatAttackData_s();
  ~CNWSCombatAttackData_s();
 

  int GetDamage(unsigned short i);
  int GetTotalDamage(int i);
};

#endif