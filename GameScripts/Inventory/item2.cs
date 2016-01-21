using UnityEngine;
using System.Collections;

public class item2 : MonoBehaviour
{
	
	void OnGUI()
	{
		if(render)
		{
			// Make a background box
			GUI.Box(new Rect(125, 40, 70, 70), " ");
		}
	}
	
	private bool render = false;
	private Rect windowRect = new Rect (20, 20, 120, 50);
	
	public void ShowWindow() {
		render = true;
	}
	
	public void HideWindow() {
		render = false;
	}
	
	public void Update() 
	{
		if (Input.GetKey(KeyCode.E))
			ShowWindow();
		
		if (Input.GetKey(KeyCode.Q))
			HideWindow();
		
	}
}

