package core3.entity.hero;

class HeroMultiplier extends EntityMultiplier{
	
	public var hero:core3.entity.hero.Hero;
	
	public function new(h:core3.entity.hero.Hero, s:openfl.display.Sprite){
		hero = h;
		entity = cast(h, core3.entity.Entity);
		super(entity);
	}
}