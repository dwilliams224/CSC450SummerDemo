using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectDataPoint : MonoBehaviour {

	public void SelectPoint() {
		// Locates the TargetData GO and sets the executing Point as the current target
		GameObject managerObject = GameObject.Find("Data Point Manager");
		DataPointManager pointManager = managerObject.GetComponent<DataPointManager> ();
		pointManager.SelectPoint(gameObject.name);
	}
}
