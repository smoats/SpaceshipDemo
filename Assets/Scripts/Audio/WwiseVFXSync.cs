using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.VFX;
using UnityEngine.VFX.Utility;
using AK.Wwise;

[ExecuteAlways]
[RequireComponent(typeof(VisualEffect))]
public class WwiseVFXSync : VFXOutputEventAbstractHandler
{
    public override bool canExecuteInEditor => true;
    public AK.Wwise.Event sparks;

    public override void OnVFXOutputEvent(VFXEventAttribute eventAttribute)
    {
        sparks.Post(gameObject);
    }
}
