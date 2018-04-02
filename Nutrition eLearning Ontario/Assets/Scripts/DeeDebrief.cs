using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DeeDebrief : MonoBehaviour {

    Debrief debrief;
    public Text money, food, wellbeing;

	// Use this for initialization
	void Start () {

        debrief = GetComponent<Debrief>();

        money.text = "Dolores’s ending amount of money was $" + debrief.money + ".\n\n\n";

        if(debrief.money < 0)
        {
            float lowDebt = debrief.money * -1.2f;
            float highDebt = debrief.money * -3.5f;
            money.text += "Dolores found herself relying on credit card debt in order to make ends meet. Once fees and interest are taken into consideration, this debt could cost Dolores and her family upwards of $" + lowDebt + " to $" + highDebt + " on top of the $25,000 that Dolores already owes! This accumulated debt puts Dolores’s family at high risk of continuing food insecurity in the long term.";
        }
        else
        {
            money.text += "You succeeded in helping Dolores avoid accumulating additional debt. Living within a budget can be extremely stressful. It can also impact food quality and quantity, as low nutrition foods cost less than high nutrition foods. This can make it difficult to purchase healthy foods when trying to live on a tight budget.";
        }

        food.text = "Dolores’s final food security was " + debrief.food + ".\n\n\n";

        if(debrief.food <= 2)
        {
            food.text += "Dolores experienced mild food insecurity. She was able to provide a sufficient amount of food for her children, but she had to make sacrifices to make this happen. Even then, she was not always able to acquire the kinds of healthy and traditional foods that she wanted her family to consume.";
        }
        else if(debrief.food <= 5)
        {
            food.text += "Dolores experienced moderate food insecurity. She had to make trade-offs on both the quantity and quality of food. On many occasions, she was not able to acquire the kinds of healthy and traditional foods that she wanted her family to consume.";
        }
        else if(debrief.food <= 8)
        {
            food.text += "Dolores experienced severe food insecurity. She reduced the quantity and quality of the foods that she ate and often skipped meals to ensure that her children had enough to eat. Long term if Dolores continues to make these types of personal sacrifices to feed her family, she could be putting herself at risk for malnutrition, decreased immune functioning, and severe fatigue.";
        }
        else
        {
            food.text += "Dolores and her children experienced severe food insecurity as they often went hungry. Dolores also struggled to find culturally appropriate traditional foods. Long term if Dolores and her family continue to skip meals and reduce their food intake, they will be at high risk for malnutrition, decreased immune functioning, and severe fatigue. ";
        }

        wellbeing.text = "Dawn’s final wellbeing scorey was " + debrief.wellbeing + ".\n\n\n";

        if(debrief.wellbeing <= 25)
        {
            wellbeing.text += "Dolores ended the game with low wellbeing. Debt and food worries dominated Dolores’ time. As a consequence, she was not successful in maintaining connections with her First Nations community. Nor was she successful in building social connections that could prove to be useful in finding creative solutions for food sharing and childcare. Had she built these connections, the transition could have been easier on Dolores.";
        }
        else if(debrief.wellbeing <= 60)
        {
            wellbeing.text += " Dolores experienced a great deal of stress and worry. These worries could have easily dominated all of Dolores’ time, but she was able to reach out and build some social connections. These social connections are critically important to single mothers, as they help to provide creative solutions for childcare and food sharing. They also ensure that Dolores can continue building ties with her First Nations community.";
        }
        else
        {
            wellbeing.text += "You succeeded in helping Dolores cope with a stressful transition and build social connections in the process. These social connections are critically important to Dolores as a single mother, as they can help to provide her with creative solutions for childcare and food sharing. They also ensure that Dolores can continue building ties with her First Nations community.";
        }
	}
}
