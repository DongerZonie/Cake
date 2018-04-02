using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MaxDebrief : MonoBehaviour {

    Debrief debrief;
    public Text money, food, wellbeing;

	// Use this for initialization
	void Start () {

        debrief = GetComponent<Debrief>();

        money.text = "Max’s ending amount of money was $" + debrief.money + ".\n\n\n";

        if(debrief.money < 0)
        {
            float lowDebt = debrief.money * -1.2f;
            float highDebt = debrief.money * -3.5f;
            money.text += "Max found herself relying on credit card debt in order to make ends meet. Once fees and interest are taken into consideration, this debt could cost Max upwards of $" + lowDebt + " to $" + highDebt + " to pay off. This debt puts Max at high risk of continuing food insecurity in the long term.";
        }
        else
        {
            money.text += "You succeeded in helping Max live within her budget. Living within a budget can be extremely stressful. It can also impact food quality and quantity, as low nutrition foods cost less than high nutrition foods. This can make it difficult to purchase healthy foods when trying to live on a tight budget. ";
        }

        food.text = "Max’s final food security score was " + debrief.food + ".\n\n\n";

        if(debrief.food <= 2)
        {
            food.text += "Max experienced mild food insecurity. She was able to acquire a sufficient amount of food for herself, but she had to make many personal sacrifices to make this happen. Even then, she was not always able to acquire the healthy foods needed to manage her diabetes.";
        }
        else if(debrief.food <= 5)
        {
            food.text += "Max experienced moderate food insecurity. She was able to acquire a sufficient amount of food for herself, but she had to make many personal sacrifices to make this happen. As a consequence, she was not always able to acquire the types of healthy foods needed to help her succeed as a student.";
        }
        else
        {
            food.text += "Max experienced severe food insecurity. Because of low income, she had to reduce the quantity and quality of the foods she consumed. Max’s school work suffered as a consequence as Max was fatigued and unable to concentrate. Long term Max could be putting her health at serious risk if she does not get proper nutrition.";
        }

        wellbeing.text = "Max finished the term with average final grades of " + debrief.wellbeing + ".\n\n\n";

        if(debrief.wellbeing <= 50)
        {
            wellbeing.text += "Despite her best efforts, Max failed her first term at university. The lack of nutrition in her diet and her continuing struggles with food insecurity made her feel sluggish and fatigued. She struggled to make social connections at school and often did not have time to study. Max will need to learn to balance work, school, and her social life if she wants to do better in her next term of university. ";
        }
        else if(debrief.wellbeing <= 70)
        {
            wellbeing.text += "The past few months have been rough for Max. Despite these challenges, she managed to pass her classes during this first term at university. If she continues to develop skills in managing her budget, prioritizing her study time, and making productive social connections she should continue to improve her performance in her school and succeed as a university student. ";
        }
        else
        {
            wellbeing.text += "Max had an overall great term at university. She succeeded in prioritizing her studies and making productive social connections. Doing so was not always easy, finding the right balance between financial security, eating healthy foods, and keeping up with school work required finesse. Overall, though, Max did great!";
        }
	}
}
