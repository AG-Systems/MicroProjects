#pragma strict
var nameText : UI.Text;
var HUD : GameObject;
var NPCHUD : GameObject;
var portrait : UI.Image;
var portraitImages : Sprite[];
private var currentIndex : int = 0;


function Start(){

	//portrait.sprite = portraitImages[currentIndex];
}
function PlayButton(){
	
	GameState.CharacterName = nameText.text;
	try{
		GameState.CharacterPortrait = portraitImages[currentIndex];
	}catch(err){
		Debug.Log(err);
	}
	Application.LoadLevel(1);

}
function PortraitButton(){
	currentIndex++;
	if(portraitImages.Length == currentIndex)currentIndex = 0;
	portrait.sprite = portraitImages[currentIndex];
	
}
function PlayButton2(){
	
	//GameState.CharacterName = nameText.text;
	gameObject.Find("CharacterDisplayCanvas").SetActive(false);
	HUD.SetActive(true);
	Application.LoadLevel(2);

}
