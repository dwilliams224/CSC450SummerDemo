using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataPoint: MonoBehaviour {

	#region Properties

	public int id;
	public string coordinates = null;
	public int birdTypeQuantity;
	public string[] birdCodes;
	public int[] birdCounts;

	#endregion

	#region Public Interface

	public void sizeArrays(int arraySize) {
		birdTypeQuantity = arraySize;
		birdCodes = new string[arraySize];
		birdCounts = new int[arraySize];
	}

	#endregion

	#region Property Overrides

	public void SetBirdCode(int index, string code) {
		birdCodes[index] = code;
	}

	public void SetBirdCount(int index, int count) {
		birdCounts [index] = count;
	}

	#endregion
}
	
