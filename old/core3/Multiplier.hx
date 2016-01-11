package core3;

class Multiplier {

	public var movementSpeedMultipliers:Array<Float>;
	public var attackDamageMultipliers:Array<Float>;
	public var attackSpeedMultipliers:Array<Float>;
	public var defenseMultipliers:Array<Float>;
	public var energyMultipliers:Array<Float>;
	public var experienceMultipliers:Array<Float>;
	public var healthMultipliers:Array<Float>;
	
	public function new(){
		movementSpeedMultipliers = new Array();
		attackDamageMultipliers = new Array();
		attackSpeedMultipliers = new Array();
		energyMultipliers = new Array();
		defenseMultipliers = new Array();
		experienceMultipliers = new Array();
		healthMultipliers = new Array();
	}
}