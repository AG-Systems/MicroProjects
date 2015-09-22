#pragma strict
var HUD : HUDDisplayScript;
var buttonPrefab : GameObject;
public var reposAmnt = -30;
public var repos = 0;
//public var buttonContainer : GameObject;

function Start () {

}

function Update () {

}
function FillPanel(ab:CharacterAbility[]){
	
	var number : int = 0;
	for (var skill : CharacterAbility in ab) {
		if(skill.skilleffect != SkillEffect.passive){
			number++;		
			var ss = Instantiate(buttonPrefab);
			ss.transform.SetParent(this.gameObject.transform, false);
			ss.transform.position.y+=repos;
			ss.SetActive(true);
			repos+=reposAmnt;
			ss.GetComponent.<ActionSelectButton>().skillSelection = skill;
			ss.GetComponent.<ActionSelectButton>().runButton();
			ss.GetComponent.<ActionSelectButton>().SetHUD(HUD);
		}
	}
	//Debug.Log("Filling skills Butons " + ab.length + " " + number);
	repos = 0;
	if(number>0)return true;
	else return false;

}
function EmptyPanel(){
	gameObject.BroadcastMessage("disableButtons");
}
