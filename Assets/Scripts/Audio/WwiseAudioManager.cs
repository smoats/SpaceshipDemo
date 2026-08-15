using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AK.Wwise;

public class WwiseAudioManager : MonoBehaviour
{
    public static WwiseAudioManager Instance { get; private set; }

    [Header("Initial Music Event")]
    public AK.Wwise.Event musicEvent;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);

        EnsureAkInitializerExists();
    }

    private void EnsureAkInitializerExists()
    {
        if (FindObjectOfType<AkInitializer>() == null)
        {
            GameObject initGO = new GameObject("AkInitializer (Auto)");
            initGO.AddComponent<AkInitializer>();
            DontDestroyOnLoad(initGO);
            Debug.Log("new initializer created");
        }
    }

    private void Start()
    {
        if (musicEvent != null)
        {
            musicEvent.Post(gameObject);
        }
    }

    // Method to post a general event
    public void PostEvent(AK.Wwise.Event wwiseEvent, GameObject target)
    {
        if (wwiseEvent != null && target != null)
        {
            wwiseEvent.Post(target);
        }
    }

    // Method to post ambient sound
    public void PostAmbient(AK.Wwise.Event ambientEvent, GameObject target)
    {
        if (ambientEvent != null && target != null)
        {
            ambientEvent.Post(target);
        }
    }

    // Method to set an RTPC value
    public void SetRTPCValue(RTPC rtpc, float value, GameObject target)
    {
        if (rtpc != null && target != null)
        {
            rtpc.SetValue(target, value);
        }
    }

    // Method to set a Switch
    public void SetSwitch(Switch wwiseSwitch, GameObject target)
    {
        if (wwiseSwitch != null && target != null)
        {
            wwiseSwitch.SetValue(target);
        }
    }

    // Method to set a State
    public void SetState(State wwiseState)
    {
        if (wwiseState != null)
        {
            wwiseState.SetValue();
        }
    }
}
