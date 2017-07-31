using UnityEngine;
using UnityEngine.UI;

public class birdCycler : MonoBehaviour {
 
    private GameObject wikiCanvas;
    private GameObject wikiImage;
    private GameObject wikiNum;

	private GameObject dataPointManagerObject;
    private DataPointManager dataPointManager;

    private DataPoint currentDataPoint;
    private string birdCode;
    private int birdCount;
    private int birdNum;

    private Texture2D birdTexture;
    private Text textField;
    int i = 0;

    void pullBirdCode(int num){
		birdCode = currentDataPoint.birdCodes[num];
    }

    void pullBirdCount(int num){
          birdCount = currentDataPoint.birdCounts[num];
    }

    public void loadWiki(){
        birdTexture = (Texture2D)Resources.Load("WIKI/"+ birdCode);
        wikiImage.GetComponent<RawImage>().texture = birdTexture;
        textField.text = birdCount.ToString();
        wikiCanvas.SetActive(true);
    }

    public void nextWiki(){
        if (i < (birdNum - 1)){
            i++;
            pullBirdCode(i);
            pullBirdCount(i);
            loadWiki();
          }
        else if(i == (birdNum - 1)){
            i = 0;
            pullBirdCode(i);
            pullBirdCount(i);
            loadWiki();
        }
    }

    public void prevWiki(){
        //Debug.Log(i);
        if (i > (0))
        {
            i--;
            pullBirdCode(i);
            pullBirdCount(i);
            loadWiki();
        }
        else if (i == 0)
        {
            i = (birdNum - 1);
            pullBirdCode(i);
            pullBirdCount(i);
            loadWiki();
        }
    }

    public void closeWiki()
    {
        wikiCanvas.SetActive(false);
    }

    void Start() {
		dataPointManagerObject = GameObject.Find("Data Point Manager");
		dataPointManager = dataPointManagerObject.GetComponent<DataPointManager>();
		currentDataPoint = dataPointManager.dataPoint;
		birdNum = currentDataPoint.birdTypeQuantity;

        wikiCanvas = GameObject.Find("WikiCanvas");
        wikiImage = GameObject.Find("Wiki");
        wikiNum = GameObject.Find("NumText");

        textField = wikiNum.GetComponent<Text>();

		nextWiki ();
    }
}