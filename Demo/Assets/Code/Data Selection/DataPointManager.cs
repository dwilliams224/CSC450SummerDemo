/*	DataPointManager.cs
 * 
 * 	Summary: The Datapoint manager is a singleton responsable for data injection 
 * 	from the Table Scene to the Simple Forest Scene.
 * 
 * 	© Darren Williams 2017
 */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataPointManager : MonoBehaviour {

	#region Properties

	public DataPoint dataPoint;

	public static GameObject dataPointManager;

	#endregion

	#region Initialization 

	void Awake () {
		// Ensures only one copy of this Object exists
		if (dataPointManager != null) {
			Destroy (gameObject);
		} else {
			dataPointManager = gameObject;
			DontDestroyOnLoad (dataPointManager);
		}
	}

	#endregion

	#region Public Interface

	public void SelectPoint() {
		GameObject targetData = GameObject.Find("TargetData");
		TargetDataPoint targetDataPoint = targetData.GetComponent<TargetDataPoint> ();
		targetDataPoint.SetDataPoint (gameObject.name);

		LoadingScreenManager.LoadScene("Simple Forest Scene");
		return;
	}

	#endregion
}
