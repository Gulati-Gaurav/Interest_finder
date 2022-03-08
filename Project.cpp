#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string>email_list_cc;
vector<string>email_list_wd;
vector<string>email_list_ad;
vector<string>email_list_am;
vector<string>email_list_de;
vector<string>email_list_td;
vector<string>email_list_ac;
vector<string>email_list_rs;
vector<string>email_list_dr;
vector<string>email_list_te;
void email()
{
	int n;
	cout << "do you want to receive emails? enter 1 for yes and 0 for no";
	cin >> n;
	if (n == 1)
	{
		string code, mail_id;
		cout << "enter the code for domain:\ncc:CompetitiveCoding\nwd:WebDevelopment\nad:AppDevelopment\nam:AffiliateMarketing\nde:Designing\ntd:ThreeDAnimator\ac:Acting\nrs:Research\ndr:DroneandmachineDevelopment\nte:Teaching";
		cin >> code;
		cout << "enter your mail ID";
		cin >> mail_id;
		if (code == "cc")
		{
			email_list_cc.push_back(mail_id);
		}
		else if (code == "wd")
		{
			email_list_wd.push_back(mail_id);
		}
		else if (code == "ad")
		{
			email_list_ad.push_back(mail_id);
		}
		else if (code == "am")
		{
			email_list_am.push_back(mail_id);
		}
		else if (code == "de")
		{
			email_list_de.push_back(mail_id);
		}
		else if (code == "td")
		{
			email_list_td.push_back(mail_id);
		}
		else if (code == "ac")
		{
			email_list_ac.push_back(mail_id);
		}
		else if (code == "rs")
		{
			email_list_rs.push_back(mail_id);
		}
		else if (code == "dr")
		{
			email_list_dr.push_back(mail_id);
		}
		else if (code == "te")
		{
			email_list_te.push_back(mail_id);
		}
	}
	else return;	
}

void Ways_to_earn_money()
{
    int n;
    cout<<endl<<"For above courses and meetings you will probably require money\n" 
                "Do you want to know how you can make money and grow. If yes Press 1 if no press 0";
    cin>>n;
    if(n==1){
        cout<<"If you do have a limited amount of money and want to grow it (i.e. given by parents or other sources) then Stock"
        " market and real estate are two prime methods of making that money grow faster in comparison to deposit in bank. For stock"
        " market use trading and guiding app Zerodha and for real estate see videos of Aman Dhatarwal and experience is the best source "
        "in this so learn from existing traders. \n\n"
      "If you don’t have enough funds the methods like \n"
"1.	Teaching instruments or academics or sport\n"
"2.	Becoming  a virtual Assistant\n"
"3.	Free Lancer Writing\n"
"4.	Graphic designing\n"
"5.	Personal Blogging \n\n"
"Are the ways to start making money\n";

        return;
    }
    else {return;} 
}

int main()
{
    cout<<"     Have you been facing with the same problem of not being able to find your area of interest?\nAre you Not able to find your" 
    " passion?\n \n     Well here is the complete"
    " guide and solutions to all your career and interests related problem. Just answer the questions that Follow up and you will"
    " get all the details regarding your passion along with the course of one and a half month of complete experience in all the domains.\n\n";

    cout<<"The instructions for answering the questions are:-\n"
           " Enter the ans with only their integers option and there after enter 0 \n\n\n";
    int cc=0,wd=0,ad=0,am=0,de=0,td=0,ac=0,rs=0,dr=0,te=0;
    int arr1[4];
    cout<<"A. Have you found yourself enjoying these things? \n\n"
          "1. Founded it interesting in solving analytical problems and felt satisfied after solving on your own\n"
          "2. Felt happy when you decorated and designed the objects and colored various objects vibrantly\n "
          "3. Founded writing blogs and writing articles interesting\n"
          "4. Founded teaching someone satisfactory and later got appreciated for it\n";
    int r=0;
    while(true)
         {cin>>arr1[r];
         if (arr1[r]==0){break;}
         r++;}
    for(int i=0;i<=3;i++)
       {
           if(arr1[i]==1){cc++;}
           else if(arr1[i]==2){de++;
                               td++;}
           else if(arr1[i]==3){am++;}
           else if(arr1[i]==4){te++;}
           else if(arr1[i]==0){break;}
       }

        int arr2[4];
        cout<<"\n\n B. Which of these do you find interesting ?\n\n";
        cout<<"1. Admiring the beautiful animated posts on social media and think that you can also create one\n"
              "2. Founded animation in different objects interesting and want to explore it\n"
              "3. Founded interesting to know how to build websites of big companies and their designs and colours\n"
              "4. Founded interested in building apps and their colour combinations\n";
        
       r=0;
    while(true)
         {cin>>arr2[r];
         if (arr2[r]==0){break;}
         r++;}
    for(int i=0;i<=3;i++)
       {
           if(arr2[i]==1){de++;}
           else if(arr2[i]==2){td++;}
           else if(arr2[i]==3){wd++;}
           else if(arr2[i]==4){ad++;}
           else if(arr2[i]==0){break;}
       }

       int arr3[4];
        cout<<"\n\n C. Have you experienced any of these situations?\n\n";
        cout<<"1. Can you modulate your voice and speak in different manners and act just like actors and find it interesting?\n"
              "2. You found it interesting opening different electrical objects and knowing what is their in it\n"
              "3. Wanted to really delve into a topic and do complete analysis in that subject\n"
              "4. Convince other people regarding different objects and make them purchase it successfully \n";

        r=0;
    while(true)
         {cin>>arr3[r];
         if (arr3[r]==0){break;}
         r++;}
    for(int i=0;i<=3;i++)
       {
           if(arr3[i]==1){ac++;}
           else if(arr3[i]==2){dr++;}
           else if(arr3[i]==3){rs++;}
           else if(arr3[i]==4){am++;}
           else if(arr3[i]==0){break;}
       }

       int arr4[4];
        cout<<"\n\n D. Can you do the following things?\n\n";
        cout<<"1. Design animated posters for different objects if given proper software\n"
              "2. Can you imitate actors and really act in front of parents in a manner that they are really satisfied with false talk\n"
              "3. Can you sit for long hours and keep on studying a topic in detail \n"
              "4. Are you interested in electrical and mechanical parts of a machine\n";

        r=0;
    while(true)
         {cin>>arr4[r];
         if (arr4[r]==0){break;}
         r++;}
    for(int i=0;i<=3;i++)
       {
           if(arr4[i]==1){td++;}
           else if(arr4[i]==2){ac++;}
           else if(arr4[i]==3){rs++;}
           else if(arr4[i]==4){dr++;}
           else if(arr4[i]==0){break;}
       }

       int arr5[4];
        cout<<"\n\n E. Which of these make you happy?\n\n";
        cout<<"1. Looking at different posters on billboard and finding flaws to improve them\n"
              "2. Finding flaws in the websites design and want to improve them\n"
              "3. Find coding interesting and want to compete with others in this\n"
              "4. Find flaws in different apps and there bugs and how they can be made more user friendly\n";

        r=0;
    while(true)
         {cin>>arr5[r];
         if (arr5[r]==0){break;}
         r++;}
    for(int i=0;i<=3;i++)
       {
           if(arr5[i]==1){de++;}
           else if(arr5[i]==2){wd++;}
           else if(arr5[i]==3){cc++;}
           else if(arr5[i]==4){ad++;}
           else if(arr5[i]==0){break;}
       }

       int arr6[4];
        cout<<"\n\n F. What have you found yourself doing in idle time \n\n";
        cout<<"1. Appreciating and thinking of developing different  personal games \n"
              "2. Thinking of advertising different products and doing it better than actors\n"
              "3. Have you found it never boring the same concept to someone repeatedly?\n"
              "4. Thinking of the aerodynamics of drones or thermal effects in machines?\n";

        r=0;
    while(true)
         {cin>>arr6[r];
         if (arr6[r]==0){break;}
         r++;}
    for(int i=0;i<=3;i++)
       {
           if(arr6[i]==1){ad++;}
           else if(arr6[i]==2){am++;}
           else if(arr6[i]==3){te++;}
           else if(arr6[i]==4){dr++;}
           else if(arr6[i]==0){break;}
       }

       int arr7[5];
        cout<<"\n\n G. Which of these are you ready to carry on daily basis for next 25-30 days?\n\n";
        cout<<"1. Finding solutions to user problems and bugs and developing new features using coding \n"
              "2. Designing websites for startups and greatr MNCs\n"
              "3. Dedicate your time towards acting in different even small shows\n"
              "4. Do whole thesis on a project and if required Phd in it and researching in topic of subject of your interest\n"
              "5. Teaching a kid or adult concept with same energy as teaching for the first time whether it is subject or instrument\n";

        r=0;
    while(true)
         {cin>>arr7[r];
         if (arr7[r]==0){break;}
         r++;}
    for(int i=0;i<=4;i++)
    {
        switch (arr7[i])
        {
        case 1:
            {cc++;}
            continue;
        case 2:
            {wd++;}
            continue;
        case 3:
            {ac++;}
            continue;
        case 4:
            {rs++;}
            continue;
        case 5:
            {te++;}
            continue;
        default:
            break;
        }
    }
    

    pair <int,string>p0;
    pair <int,string>p1;
    pair <int,string>p2;
    pair <int,string>p3;
    pair <int,string>p4;
    pair <int,string>p5;
    pair <int,string>p6;
    pair <int,string>p7;
    pair <int,string>p8;
    pair <int,string>p9;

    
    pair <int,string>arr[10];

    arr[0]=make_pair(cc,"CompetitiveCoding");
    arr[1]=make_pair(wd,"WebDevelopment");
    arr[2]=make_pair(ad,"AppDevelopment");
    arr[3]=make_pair(am,"AffiliateMarketing");
    arr[4]=make_pair(de,"Designing");
    arr[5]=make_pair(td,"ThreeDAnimator");
    arr[6]=make_pair(ac,"Acting");
    arr[7]=make_pair(rs,"Research");
    arr[8]=make_pair(dr,"DroneandmachineDevelopment");
    arr[9]=make_pair(te,"Teaching");

    


    for(int i=1;i<=9;i++)
    {
        pair<int,string> val=arr[i];
        int j=i-1;
        while(arr[j].first>val.first && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
    }

    cout<<"First Preference is found to be "<<arr[9].second<<endl;
    cout<<"Second Perence is found to be "<<arr[8].second<<endl;
    cout<<"Third Preference is found to be "<<arr[7].second<<endl<<endl;

    for(int i=9;i>=7;i--)
    {if((arr[i].second.compare("CompetitiveCoding"))==0)
    {cout<<"Here are some Youtube Channels that have gained fame in Competitive Coding\n"
    "1. Apna College\n"
    "2. Code With Harry\n"
    "3. Hitesh Chaudhary\n"
    "4. Codechef\n";

    cout<<"\nHere are the courses that will guide you in the right Direction\n"
          "1.https://www.codingninjas.com/courses/online-competitive-programming-course?source=google&campaign=google_search_competitive-programming_remark_course_21-01-20_exact&utm_source=google&utm_medium=%5Bsearch%5D&utm_campaign=8982874755_91422300155_e_competitive%20programming%20course__412675896628_c&gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7v8sNnfQD_NzHmTVteJLk0Psb_yfsapnrwvYrIVETMo3AvDkYpz_HRoCbTYQAvD_BwE \n"
          "2.https://practice.geeksforgeeks.org/courses/dsa-self-paced?source=google&medium=cpc&device=c&keyword=learn%20data%20structures%20and%20algorithms&matchtype=b&campaignid=9546568041&adgroup=97966155295&gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7ugQHXKP2Yp9gBiABz6rrV5Gpy-h5zEKyb5YV4XF7Ziz4mdW3X3_GBoC32gQAvD_BwE \n";
    cout<<"\nPeople who are famous in this Domain:-\n"
          "1. Harsha Suryanarayana\n"
          "2. Nikhita Raghunath\n";

    cout<<"\nAverage Salary in the domain = 5 Lakhs\n\n";
    email();
    cout<<endl;
    Ways_to_earn_money();
    cout<<endl<<endl;
          }

    }

    for(int i=9;i>=7;i--)
    {if((arr[i].second.compare("WebDevelopment"))==0)
    {cout<<"Here are some Youtube Channels that have gained fame in Web Development\n"
    "1. ComputerPhile\n"
    "2. C S Dojo\n"
    "3. Telusko\n"
    "4. Coding Blocks\n";

    cout<<"\nHere are the courses that will guide you in the right Direction\n"
          "1. https://www.udemy.com/course/the-complete-web-developer-course-2/?gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7uRlShTrOvlfnQ30_QHbEazyu3PiRlw4m7nK053mOYMWtUF6b-9g9RoCFjsQAvD_BwE&matchtype=p&utm_campaign=WebDevelopment_v.PROF_la.EN_cc.INDIA_ti.8322&utm_content=deal4584&utm_medium=udemyads&utm_source=adwords&utm_term=_._ag_82381205698_._ad_392371003112_._kw_web+development+courses_._de_c_._dm__._pl__._ti_kwd-11507572_._li_9061692_._pd__._\n"
          "2. https://code.whitehatjr.com/trial/register?utm_source=Google_IND_SearchNB&utm_content=Broad&utm_campaign=IND_SOK_ACQ_Whitehat_Search_NonBrand_Registered_TopFunnel&utm_medium=108311168798&utm_term=458638585157&gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7pOC_OrLvGD80VqpDz3D8V5ImGFR2wfnIqiN8XbEbRW-ALGmcv_ToxoC41kQAvD_BwE\n";
          cout<<"\nPeople who are famous in this Domain:-\n"
          "1. Umasankar Mukkara\n"
          "2. Rushabh Mehta\n";

    cout<<"\nAverage Salary in the domain = 5 Lakhs\n\n";
    email();
    cout<<endl;
    Ways_to_earn_money();
    cout<<endl<<endl;
    
    }

    }

    for(int i=9;i>=7;i--)
    {if((arr[i].second.compare("AppDevelopment"))==0)
    {cout<<"Here are some Youtube Channels that have gained fame in App Development\n"
    "1. Programming Desire\n"
    "2. Indian App Developer\n"
    "3. Code with Harry\n"
    "4. Kenny Gurdman\n";

    cout<<"\nHere are the courses that will guide you in the right Direction\n"
          "1. https://www.builder.ai/create-software/app-with-us?utm_source=google&utm_medium=cpc&utm_campaign=BAI_INDIA_G_S_NB-BM_Builder-APP&utm_term=%2Bapplication%20%2Bdevelopment&gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7vniL8_EEdJ9YXZpU4lagFLLz7qFSwCpULg4in4kmFee1_G-6vPU4RoCxLcQAvD_BwE\n"
          "2. https://playacademy.exceedlms.com/student/catalog?gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7kBsaOvVrYt21P4-TA8O5miSFvv2lVnb9HfyIzkJyXEq28F4BnfNiRoCnOgQAvD_BwE\n";
         cout<<"\nPeople who are famous in this Domain:-\n"
          "1. Cindy Gallop\n"
          "2. Harish Uthaykumar\n";

    cout<<"\nAverage Salary in the domain =3.5 Lakhs\n\n ";
    email();
    cout<<endl;
    Ways_to_earn_money();
    cout<<endl<<endl;
          }

    }

    for(int i=9;i>=7;i--)
    {if((arr[i].second.compare("AffiliateMarketing"))==0)
    {cout<<"Here are some Youtube Channels that have gained fame in Affiliate Marketing\n"
    "1. Ankur Agarwal\n"
    "2. Umer Qureshi\n"
    "3. Hello Veeru\n"
    "4. Mahatmaji Technical\n";

    cout<<"\nHere are the courses that will guide you in the right Direction\n"
          "1. https://www.mageplaza.com/blog/best-affiliate-marketing-course.html\n"
          "2. https://www.udemy.com/course/clickbank-affiliate-marketing-success/?gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7oJy1nyvu4D1U9Dv09M6RROesg0OkasWp1cub1NErWfsdyS5XsG2ihoCpfMQAvD_BwE&matchtype=e&utm_campaign=LongTail_la.EN_cc.INDIA&utm_content=deal4584&utm_medium=udemyads&utm_source=adwords&utm_term=_._ag_84769218608_._ad_387461900120_._kw_affiliate+marketing+course_._de_c_._dm__._pl__._ti_kwd-384649316351_._li_9061692_._pd__._\n";
          cout<<"\nPeople who are famous in this Domain:-\n"
          "1. Umer Qureshi\n"
          "2. Ankur Agarwal\n";

    cout<<"\nAverage Salary in the domain =3.32 Lakhs\n\n ";
    email();
    cout<<endl;
    Ways_to_earn_money();
    cout<<endl<<endl;
    
          }
    }

    for(int i=9;i>=7;i--)
    {if((arr[i].second.compare("Designing"))==0)
    {cout<<"Here are some Youtube Channels that have gained fame in Designing\n"
    "1. Adobe Creative Cloud\n"
    "2. Jesse ShowAlter\n"
    "3. GCFLearnFree.org\n"
    "4. Gareth David Studio\n";

    cout<<"\nHere are the courses that will guide you in the right Direction\n"
          "1. http://www.dreamzonecentre.com/\n"
          "2. https://www.upgrad.com/?mf_campaignname_click=7247714378&gclickId_identifier=CjwKCAjw9MuCBhBUEiwAbDZ-7mjiPfwwnslhyR4gICfUjTNox4UrZLBTslp7RUD5E4SaPqTMHtzPcRoCZ3MQAvD_BwE&placement_id_identifier=&key_word_identifier=%2Bonline%20%2Bcourses&ad_group_id_identifier=82084562284&utm_source=GOOGLE&utm_medium=BSEARCH&utm_campaign=ALL_ALL_ALL_GOOGLE_BSEARCH_EDUCATION_METROS_ALL&utm_content=online_courses&utm_term=%2Bonline%20%2Bcourses&gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7mjiPfwwnslhyR4gICfUjTNox4UrZLBTslp7RUD5E4SaPqTMHtzPcRoCZ3MQAvD_BwE\n";
          cout<<"\nPeople who are famous in this Domain:-\n"
          "1. Jesse ShowAlter\n"
          "2. Gareth David\n";
    cout<<"\nAverage Salary in the domain = 3.3 Lakhs\n\n";
    email();
    cout<<endl;
    Ways_to_earn_money();
    cout<<endl<<endl;
          }

    }

    for(int i=9;i>=7;i--)
    {if((arr[i].second.compare("ThreeDAnimator"))==0)
    {cout<<"Here are some Youtube Channels that have gained fame in 3D Animation\n"
    "1. Blender Guru\n"
    "2. Animation Blender\n"
    "3. Blender Studio\n"
    "4. TheCGBros\n";

    cout<<"\nHere are the courses that will guide you in the right Direction\n"
          "1. https://aaft.com/lp/animation/?page=lp&gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7kjgiwf-f3uMgRufsjdxLD_e4ils8v_9o6yzl32ZfqVZsQdKk3z1YRoCmAkQAvD_BwE\n"
          "2. https://www.derby.ac.uk/undergraduate/art-design-courses/?utm_source=google&utm_medium=cpc&utm_content=Animation-intl&utm_campaign=ug+recruit+ahe&gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7gNuqAsoW5I3v0imuW7K0tAcJarv25w4QW1kcDJO58_o-eY3A67uHhoC5tYQAvD_BwE\n";
         cout<<"\nPeople who are famous in this Domain:-\n"
          "1. John Lasseter \n"
          "2. Ken Anderson\n";

    cout<<"\nAverage Salary in the domain = 3.1 Lakhs\n\n";
    email();
    cout<<endl;
    Ways_to_earn_money();
    cout<<endl<<endl;
          }

    }

    for(int i=9;i>=7;i--)
    {if((arr[i].second.compare("Acting"))==0)
    {cout<<"Here are some Youtube Channels that have gained fame in Acting\n"
    "1. Join to Bollywood\n"
    "2. Garima's Good Life\n"
    "3. FTC talent\n"
    "4. The Actor's Academy\n";

    cout<<"\nHere are the courses that will guide you in the right Direction\n"
          "1. https://www.bjas.in/\n"
          "2. https://www.rkfma.com/acting-modeling.html\n";
          cout<<"\nPeople who are famous in this Domain:-\n"
          "1. Shah Rukh Khan\n"
          "2. Kareena Kapoor\n";
    cout<<"\nAverage Salary in the domain =6.5 Lakhs\n\n ";
    email();
    cout<<endl;
    Ways_to_earn_money();
    cout<<endl<<endl;
          }

    }

    for(int i=9;i>=7;i--)
    {if((arr[i].second.compare("Research"))==0)
    {cout<<"Here are some Youtube Channels that have gained fame in Research\n"
    "1. SciToons\n"
    "2. Randall Meyer\n"
    "3.  Kurzgesagt\n"
    "4. Professor Dr Javed Iqbal\n";
    cout<<"\nHere are the courses that will guide you in the right Direction\n"
          "1. https://www.udemy.com/topic/research-methods/?utm_source=adwords&utm_medium=udemyads&utm_campaign=DSA_Catchall_la.EN_cc.INDIA&utm_content=deal4584&utm_term=_._ag_82569850245_._ad_437477497176_._kw__._de_c_._dm__._pl__._ti_dsa-437115340933_._li_9061692_._pd__._&matchtype=b&gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7qQYivjO1wXOLRdIGS63PEeKA_UeSHFkaR76r8NSKLsO00TD7HrBcRoCQxsQAvD_BwE\n"
          "2. https://catalyst.harvard.edu/courses/?gclid=CjwKCAjw9MuCBhBUEiwAbDZ-7lzS-A-Qka_tFDMzPvha80lfOcN3Dtwx-Obz7GJ7QOSYpoU9E-Gf7BoCX14QAvD_BwE\n";
         cout<<"\nPeople who are famous in this Domain:-\n"
          "1. Stephen hawking\n"
          "2. Hill Combey\n";
    cout<<"\nAverage Salary in the domain = 3.8 Lakhs\n\n";
    email();
    cout<<endl;
    Ways_to_earn_money();
    cout<<endl<<endl;
          }

    }

    for(int i=9;i>=7;i--)
    {if((arr[i].second.compare("DroneandmachineDevelopment"))==0)
    {cout<<"Here are some Youtube Channels that have gained fame in Drone and Machine development area\n"
    "1. Murtaza's Workshop\n"
    "2. NDA Hack\n"
    "3. Dezeen\n"
    "4. Mashable\n";

    cout<<"\nHere are the courses that will guide you in the right Direction\n"
          "1. https://www.coursera.org/courses?query=drone\n"
          "2. https://www.indianinstituteofdrones.com/\n";
         cout<<"\nPeople who are famous in this Domain:-\n"
          "1. Jonathon Evans\n"
          "2. Colin Snow\n";

    cout<<"\nAverage Salary in the domain =5.25 lakhs\n\n ";
    email();
    cout<<endl;
    Ways_to_earn_money();
    cout<<endl<<endl;
          }

    }

    for(int i=9;i>=7;i--)
    {if((arr[i].second.compare("Teaching"))==0)
    {cout<<"Here are some Youtube Channels that have gained fame in teaching\n"
    "1. Apni Kaksha\n"
    "2. New EdTech Classroom\n"
    "3. Unacademy\n"
    "4. Vedantu\n";
    cout<<"\nHere are the courses that will guide you in the right Direction\n"
          "1. https://www.edx.org/course/subject/education-teacher-training\n"
          "2. https://www.futurelearn.com/subjects/teaching-courses\n";
         cout<<"\nPeople who are famous in this Domain:-\n"
          "1. Shakuntla Devi\n"
          "2. Gurmeet Singh Manchanda\n";
    cout<<"\nAverage Salary in the domain = 2.67 Lakhs\n\n"; 
    email();
    cout<<endl;
    Ways_to_earn_money();
    cout<<endl<<endl;
          }
    }
    return 0;
}