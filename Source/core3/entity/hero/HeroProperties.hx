package core3.entity.hero;

class HeroProperties extends EntityProperties{

	public var hero:core3.entity.hero.Hero;
	
	public function new(h:core3.entity.hero.Hero){
		hero = h;
		super(cast(h, core3.entity.Entity));
	}
}