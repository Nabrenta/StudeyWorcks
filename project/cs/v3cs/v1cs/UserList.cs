/***********************************************************************
 * Module:  UserList.cs
 * Author:  Nabra
 * Purpose: Definition of the Class UserList
 ***********************************************************************/

using System;

public class UserList
{
   public void Autorisation()
   {
      // TODO: implement
   }

    /// <summary>
    /// Конструктор по замовченню
    /// </summary>
   public UserList()
{
    user = new System.Collections.ArrayList();
    Console.WriteLine("User list created by initialisation");
}

    /// <summary>
    /// Конструктор копії
    /// </summary>
    /// <param name="uslist">Об*єкт, що копіюється</param>
   public UserList(UserList uslist)
//атрибути отриманого класу визначаються атрибтами вхідного класу
{
    user = uslist.user;
    Console.WriteLine("User list created by copy");
}


   public System.Collections.ArrayList user;
   
   /// <pdGenerated>default getter</pdGenerated>
   public System.Collections.ArrayList GetUser()
   {
      if (user == null)
         user = new System.Collections.ArrayList();
      return user;
   }
   
   /// <pdGenerated>default setter</pdGenerated>
   public void SetUser(System.Collections.ArrayList newUser)
   {
      RemoveAllUser();
      foreach (User oUser in newUser)
         AddUser(oUser);
   }
   
   /// <pdGenerated>default Add</pdGenerated>
   public void AddUser(User newUser)
   {
      if (newUser == null)
         return;
      if (this.user == null)
         this.user = new System.Collections.ArrayList();
      if (!this.user.Contains(newUser))
         this.user.Add(newUser);
   }
   
   /// <pdGenerated>default Remove</pdGenerated>
   public void RemoveUser(User oldUser)
   {
      if (oldUser == null)
         return;
      if (this.user != null)
         if (this.user.Contains(oldUser))
            this.user.Remove(oldUser);
   }
   
   /// <pdGenerated>default removeAll</pdGenerated>
   public void RemoveAllUser()
   {
      if (user != null)
         user.Clear();
   }

   private User[] mUser;

}