using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[DefaultExecutionOrder(-10000)] // runs before everything else
public class WwiseBootstrap : MonoBehaviour
{
    void Awake()
    {
        if (FindObjectOfType<AkInitializer>() == null)
        {
            GameObject initGO = new GameObject("AkInitializer (Auto)");
            initGO.AddComponent<AkInitializer>();
            DontDestroyOnLoad(initGO);
            Debug.Log("WwiseBootstrap: Created AkInitializer manually.");
        }
    }
}
