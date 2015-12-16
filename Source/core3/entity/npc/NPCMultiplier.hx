package core3.entity.npc;

class NPCMultiplier extends EntityMultiplier{
	
	public var npc:core3.entity.npc.NPC;
	
	public function new(n:core3.entity.npc.NPC){
		npc = n;
		entity = cast(n, core3.entity.Entity);
		super(entity);
	}
}