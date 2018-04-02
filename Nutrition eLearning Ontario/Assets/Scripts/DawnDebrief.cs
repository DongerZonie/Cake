using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DawnDebrief : MonoBehaviour {

    Debrief debrief;
    public Text money, food, wellbeing;

	// Use this for initialization
	void Start () {

        debrief = GetComponent<Debrief>();

        money.text = "Dawn’s ending amount of money was $" + debrief.money + ".\n\n\n";

        if(debrief.money < 0)
        {
            float lowDebt = debrief.money * -1.2f;
            float highDebt = debrief.money * -3.5f;
            money.text += "Dawn found herself relying on credit card debt in order to make ends meet. Once fees and interest are taken into consideration, this debt could cost Dawn upwards of $" + lowDebt + " to $" + highDebt + " to pay off. This debt puts Dawn at high risk of continuing food insecurity in the long term.";
        }
        else
        {
            money.text += "You succeeded in helping Dawn live within her budget. Living within a budget can be extremely stressful. It can also impact food quality and quantity, as low nutrition foods cost less than high nutrition foods. This can make it difficult to purchase healthy foods when trying to live on a tight budget.";
        }

        food.text = "Dawn’s final food security score was " + debrief.food + ".\n\n\n";

        if(debrief.food <= 2)
        {
            food.text += "Dawn experienced mild food insecurity. She was able to acquire a sufficient amount of food for herself, but she had to make many personal sacrifices to make this happen. Even then, she was not always able to acquire the healthy foods needed to manage her diabetes. ";
        }
        else if(debrief.food <= 5)
        {
            food.text += "Dawn experienced moderate food insecurity. She was able to acquire a sufficient amount of food for herself, but she had to make many personal sacrifices to make this happen. As a consequence, she was not always able to acquire the types of healthy foods needed to best manage her diabetes.";
        }
        else
        {
            food.text += "Dawn experienced severe food insecurity. Because of low income, she had to reduce the quantity and quality of the foods she consumed. This situation is quite dangerous for Dawn given her diagnosis of Type 2 diabetes. Long term Dawn could be putting her health at serious risk if she does not get proper nutrition.";
        }

        wellbeing.text = "Dawn’s final wellbeing scorey was " + debrief.wellbeing + ".\n\n\n";

        if(debrief.wellbeing <= 25)
        {
            wellbeing.text += "Dawn ended the game with low wellbeing. She made several decisions that put her health, long term employment, and future retirement at risk. In addition, she is not yet able to regain her driving privileges. She is going to need to seek alternative employment in order to avoid continuing risk of food insecurity.";
        }
        else if(debrief.wellbeing <= 60)
        {
            wellbeing.text += "Dawn ended the game with low wellbeing. She made several decisions that put her health, long term employment, and future retirement at risk. In addition, she is not yet able to regain her driving privileges. She is going to need to seek alternative employment in order to avoid continuing risk of food insecurity.";
        }
        else
        {
            wellbeing.text += "Dawn ended the game with low wellbeing. She made several decisions that put her health, long term employment, and future retirement at risk. In addition, she is not yet able to regain her driving privileges. She is going to need to seek alternative employment in order to avoid continuing risk of food insecurity.";
        }
	}
}
