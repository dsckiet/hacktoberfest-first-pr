# First_Contribution :beginner: :rocket: :HackertoberFest: 2019

---

A project to help new developers to get started with GitHub with first Pull Request

It's difficult when you do something for the first time. Like riding a bicycle, learning to cook or working on a new project.

But working on collaborative projects can be a hassle and we don't want to make mistakes to show that we are good developers. As open source is all about collaboration and working together.That is why this project was created to help new developers to make their first contribution and start their journey as a developer and contributing to the open source.

### I can watch online tutorials and learn why this ?

That's true you can watch and learn. But what's a better way to learn than getting hands-on experience & experiment by start contributing straight away?This project aims to provide beginners a simplified way to start contributing to open source.So If you are looking to make your first contribution to open source.This is the right place. Follow the following steps to get you started.

If you don't have git, [install ](https://help.github.com/articles/set-up-git/) it from here.

## 1. Fork this repository

Fork this repository by click on **fork** button on the top right corner of this page.
This will create a copy of this repository in your account.

## 2.Clone the repository

- Now you are at your forked repository at your profile.
- At the right side corner find **clone or download** button
- Now clone this repo to your machine. Click on the clone button and then click the _copy to clipboard_ icon.
- Now go to location on your computer where you want to store the local copy of this repository,where you will work on it.
- After this, right click and select git bash here
- A terminal will open, see that the path is the same path where you want to clone.
- Now run the following command:
  `git clone url-you-copied`
- Move into your cloned directory by running this command: `cd hacktoberfest-first-pr`

For eg:
`git clone https://github.com/your-github-username/hacktoberfest-first-pr.git`

where `your-github-username` is your GitHub username.

## 3.Create a branch

Change to the repository directory on your computer (if you are not already there):
`cd hacktoberfest-first-pr

Now create a branch using the `git checkout` command:
`git checkout -b <add-your-full-name>`

For example:
`git checkout -b add-anthony-gonzalviz`

## 4.Make necessary changes and commit

Now open `Contributors.md` file in a text editor. Refer to this [cheat sheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet) which gives information on how to use Markdown which is used to write in GitHub MD files

In this case, add the following line at the end of `Contributors.md:`

`- [Your-name](https://github.com/Your-username)`

Make sure there is no space between `](` . Save the file.

Go again to git bash and go to project directory and execute the command `git status`, you'll see there are changes which are unstage. Add those changes to the branch you just created using the `git add` command:

`git add Contributors.md`

Now commit those changes using the `git commit` command:

`git commit -m "Add <your-name> to Contributors list"`

For Example:
`git commit -m "Add John Doe to contributors list"`

**Caution:** Don't forget to add `-m` it specifies message to commit.If you forget it will take you to vim terminal which is difficult to operate.

## 5.Push changes to GitHub

Push your changes using the `git push` command:
`git push origin <add-your-name>`

replacing `<add-your-name>` with the name of the branch you created earlier.

## 6.Submit your changes for review

Now go to your repository on GitHub, you'll see a `New pull request` button. Click on that button.
It will compare your branch with the original repository. Check if the comparing branch is your created branch

Now submit the pull request.

Soon I'll be merging all your changes into the master branch of this project.

---

Cheers :grin:

You created your first contribution to open source :clap:

---

If you like this please _**star**_ this [repository](https://github.com/dsckiet/hacktoberfest-first-pr)

---

## What next ??

- You can work on other projects just search the organisation you like and see for **"Good First Issue"**.
  -To start of FreeCodeCamp is a good place they need help with guide and Non-Profit projects [Link](https://github.com/freeCodeCamp/guides)

**Note :** Always read ReadMe.md file of the projects it contains the instructions for working up and setting up of the projects.

## Resources

Here some good and free tutorials to learn

1. Git/GitHub

   - [Udacity Git](https://in.udacity.com/course/version-control-with-git--ud123)

   - [Udacity GitHub](https://in.udacity.com/course/github-collaboration--ud456)

   - [Codehead.io](https://egghead.io/courses/how-to-contribute-to-an-open-source-project-on-github)

2. HTML & CSS

   - [Udacity Intro to HTML & CSS](https://in.udacity.com/course/intro-to-html-and-css--ud304)

   - [Responsive Image](https://in.udacity.com/course/responsive-images--ud882)
