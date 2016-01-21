#pragma strict
var counter = 0;
var debuff = 2;
function Start () 
{

}

function Update () 
{

}

 private var showStamina : boolean = true;
 private var showDefense : boolean = true;
 private var showStr : boolean = true;
 function OnGUI()
 {
     if(showStamina)
     {
         if(GUI.Button(Rect(0, 0, 128, 128), "Stamina"))
         {
         	if(counter < debuff )
         	{
         		showStamina = false;
         		counter++;
         	}
         }
     }
     // Start defense button
 	if(showDefense)
 	{
          if(GUI.Button(Rect(0, 150, 128, 128), "Defense"))
         {
         	if(counter < debuff )
         	{
         		showDefense = false;
         		counter++;
         	}
         }
    }
    //end of defense button
    if(showStr)
 	{
         if(GUI.Button(Rect(0, 300, 128, 128), "Str"))
         {
         	if(counter < debuff )
         	{
         		showStr = false;
         		counter++;
         	}
         }
    }
 }
