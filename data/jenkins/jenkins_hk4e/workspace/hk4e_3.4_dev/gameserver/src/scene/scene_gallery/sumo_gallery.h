// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/sumo_gallery.h

// Line 18: range 0000000016B7BEE8-0000000016B7BF6B
void __cdecl SumoGallery::~SumoGallery(SumoGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SumoGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::vector<unsigned int>::~vector(&this->team_score_vec_);
  std::vector<unsigned int>::~vector(&this->team_kill_elite_monster_vec_);
  std::vector<unsigned int>::~vector(&this->team_kill_normal_monster_vec_);
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 18: range 0000000016B7BF6C-0000000016B7BF96
void __cdecl SumoGallery::~SumoGallery(SumoGallery *const this)
{
  SumoGallery::~SumoGallery(this);
  operator delete(this, 0x190uLL);
};

// Line 21: range 0000000016B2CF8E-0000000016B2D274
void __fastcall ZN11SumoGalleryCI211BaseGalleryER5Scenej(SumoGallery *const this, Scene *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  char v14[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN11SumoGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'SumoGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->activity_id_, v7, v8);
  this->activity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sumo_stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sumo_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sumo_stage_id_, v7, (_BYTE)this + 48);
  }
  this->sumo_stage_id_ = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->difficulty_id_, v9, v10);
  this->difficulty_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_, v9, (_BYTE)this + 56);
  }
  this->score_ = 0;
  v11 = (((_BYTE)this + 60) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->kill_normal_monster_num_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_normal_monster_num_ >> 3)
                                                         + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->kill_normal_monster_num_, v11, v12);
  this->kill_normal_monster_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_special_monster_num_, v11, (_BYTE)this + 64);
  }
  this->kill_special_monster_num_ = 0;
  std::vector<unsigned int>::vector(&this->team_kill_normal_monster_vec_);
  std::vector<unsigned int>::vector(&this->team_kill_elite_monster_vec_);
  std::vector<unsigned int>::vector(&this->team_score_vec_);
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
