using UnityEngine;
using System.Collections;
using System.Collections.Generic;


public class inventory : MonoBehaviour {
	public List<Item> Inventory = new List<Item>();
	private ItemDatabase database;

	void Start () {
		database = GameObject.FindGameObjectsWithTag ("Item Databse").GetComponent<ItemDatabase>();
		print (inventory.Count);
		inventory.Add (database.items[0]);
		inventory.Add (database.items[1]);
		inventory.Add (database.items[0]);
		inventory.Add (database.items[1]);
		inventory.Add (database.items[0]);
		inventory.Add (database.items[1]);
		inventory.Add (database.items[0]);
		inventory.Add (database.items[1]);
		]);

	
	}
	

	void OnGui () 
	{
		for (int i = 0; i < inventory.Count; i++) 
		{
			GUI.Label(new Rect(10,i * 20,200,50), inventory[i].itemName);

		}
	}
}
