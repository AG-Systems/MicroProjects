using UnityEngine;
using System.Collections;

[System.Serializable]
public class Item : MonoBehaviour 
{
	public string itemName;
	public int itemID;
	public string itemDesc;
	public Texture2D itemIcon;
	public int itemPower;
	public int intemSpeed;
	public ItemType itemType;

	public enum ItemType 
	{
		Weapon,
		Consumable,
		Quest
	}
	public Item(string name, int id, string desc, int power, int speed, ItemType type)
	       
	{
		ItemName = name;
		itemID = id;
		ItemDesc = desc;
		itemPower = power;
		itemSpeed = speed;
		itemType = type;
		itemIcon = Resources.Load<Texture2D> ("Item Icons/" + name);
	}
}
