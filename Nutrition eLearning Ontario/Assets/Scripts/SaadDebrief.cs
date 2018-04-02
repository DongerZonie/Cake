using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SaadDebrief : MonoBehaviour {

    Debrief debrief;
    public Text money, food, wellbeing;

	// Use this for initialization
	void Start () {

        debrief = GetComponent<Debrief>();

        money.text = "Saad’s ending amount of money was" + debrief.money + ".\n\n\n";

        if(debrief.money < 0)
        {
            float lowDebt = debrief.money * -1.2f;
            float highDebt = debrief.money * -3.5f;
            money.text += "Saad found himself relying on credit card debt in order to make ends meet. Once fees and interest are taken into consideration, this debt could cost Saad and his family upwards of $" + lowDebt + " to $"+ highDebt +" to pay off. This debt puts Saad’s family at high risk of continuing food insecurity in the long term.";
        }
        else
        {
            money.text += "You succeeded in helping Saad and his family live within their fixed income. Living within a budget can be extremely stressful. It can also impact food quality and quantity, as low nutrition foods cost less than high nutrition foods. This can make it difficult to purchase healthy foods when trying to live on a tight budget.";
        }

        food.text = "Saad’s final food security score was " + debrief.food + ".\n\n\n";

        if(debrief.food <= 2)
        {
            food.text += "Saad experienced mild food insecurity. He was able to provide a sufficient amount of food for his family, but he had to make sacrifices to make this happen. Even then, he was not always able to provide his family with the kinds of healthy and culturally appropriate foods that he wanted his family to consume.";
        }
        else if(debrief.food <= 5)
        {
            food.text += "Saad experienced moderate food insecurity. He had to make trade-offs on both the quantity and quality of food. On many occasions, he was not able to provide his family with the kinds of healthy and culturally appropriate foods that he wanted his family to consume. ";
        }
        else if(debrief.food <= 8)
        {
            food.text += "Saad experienced severe food insecurity. He reduced the quantity and quality of the foods that he ate and often skipped meals to ensure that his wife and children had enough to eat. Long term if Saad continues make these types of personal sacrifices to feed his family, he could be putting himself at risk for malnutrition, decreased immune functioning, and severe fatigue.";
        }
        else
        {
            food.text += "Saad and his family experienced severe food insecurity as they often went hungry. Long term if Saad and his family continue to eat like this, they will be at high risk for malnutrition, decreased immune functioning, and severe fatigue. Saad’s wife, Aya,  may also struggle to produce enough breast milk to feed their newborn baby.";
        }

        wellbeing.text = "Saad’s final wellbeing score was " + debrief.wellbeing + ".\n\n\n";

        if(debrief.wellbeing <= 25)
        {
            wellbeing.text += "Saad ended the game with low wellbeing. Although Saad and his family made it through the first few months in a new country, Saad missed out on numerous opportunities to expand his language skills, build social connections, and maintain religious connection here in Canada. In the long term, this social isolation can lead to stress, depression, and poor physical and mental health outcomes.";
        }
        else if(debrief.wellbeing <= 60)
        {
            wellbeing.text += "Over the past few months, Saad experienced a great deal of stress and worry. Despite this, he was able to build some social supports and take advantage of enrichment opportunities. These steps represent a good start to building social connections and skills that will help Saad and his family have a successful transition to Canada.";
        }
        else
        {
            wellbeing.text += "You succeeded in helping Saad and his family build the foundations for a strong transition to Canada. During his first few months, Saad improved his language skills, built social supports, and maintained a connection with his family. These sources of well-being can reduce the impact of food insecurity by increasing cultural connection and enabling the sharing of food, meals, and other resources. ";
        }
	}
}
