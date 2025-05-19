using UnityEngine;
using UnityEngine.EventSystems;
using AK.Wwise;

namespace CompleteProject
{
    public class UISounds : MonoBehaviour, IPointerEnterHandler, IPointerClickHandler
    {
        public AK.Wwise.Event hoverSound;
        public AK.Wwise.Event clickSound;

        public void OnPointerEnter(PointerEventData eventData)
        {
            //if (!string.IsNullOrEmpty(hoverSound))
            hoverSound.Post(gameObject);
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            //if (!string.IsNullOrEmpty(clickSound))
            clickSound.Post(gameObject);
        }
    }
}
