// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/npc_handler.h

// Line 29: range 0000000016B7BD00-0000000016B7BD4D
void __cdecl NpcHandler::~NpcHandler(NpcHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NpcHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 29: range 0000000016B7BD4E-0000000016B7BD78
void __cdecl NpcHandler::~NpcHandler(NpcHandler *const this)
{
  NpcHandler::~NpcHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 32: range 00000000174904A8-0000000017490500
void __cdecl ZN10NpcHandlerCI217PlayerHandlerBaseER6Player(NpcHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'NpcHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};
