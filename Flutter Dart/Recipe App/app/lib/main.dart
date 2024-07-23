import 'package:flutter/material.dart';
// import 'package:app/ratings.dart';

void main() {
  runApp(const RecipeApp());
}

class Recipe {
  final String name;
  final String imageUrl;
  final List<String> ingredients;
  final List<String> preparationSteps;
  final int preperationTime;
  double rating;

  Recipe({
    required this.name,
    required this.imageUrl,
    required this.ingredients,
    required this.preparationSteps,
    required this.preperationTime,
    this.rating = 0.0,
  });
}

class RecipeApp extends StatelessWidget {
  const RecipeApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Recipe App',
      theme: ThemeData(
        primarySwatch: Colors.green,
        colorScheme: ColorScheme.fromSwatch(
          primarySwatch: Colors.orange,
          brightness: Brightness.light,
        ),
      ),
      home: RecipePage(),
    );
  }
}

class RecipePage extends StatefulWidget {
  @override
  _RecipePageState createState() => _RecipePageState();
}

class _RecipePageState extends State<RecipePage> {
  List<Recipe> recipes = [
    Recipe(
      name: 'Pasta',
      imageUrl: 'assets/4.webp',
      ingredients: [
        'Spaghetti',
        'Eggs',
        'Parmesan cheese',
        'Pancetta',
        'Black pepper',
      ],
      preparationSteps: [
        'Cook spaghetti...',
        'Whisk eggs and Parmesan...',
        'Toss with pancetta...',
      ],
      preperationTime: 35,
      rating: 4.0,
    ),
    Recipe(
      name: 'Caprese Salad',
      imageUrl: 'assets/9.webp',
      ingredients: [
        'Tomatoes',
        'Fresh mozzarella',
        'Basil leaves',
        'Balsamic glaze',
        'Olive oil',
        'Salt',
        'Pepper',
      ],
      preparationSteps: [
        'Slice tomatoes and mozzarella.',
        'Arrange them on a plate with basil leaves.',
        'Drizzle with olive oil and balsamic glaze.',
        'Season with salt and pepper.',
        'Enjoy this classic Italian salad!',
      ],
      preperationTime: 15,
    ),
    Recipe(
      name: 'Thai Green Curry',
      imageUrl: 'assets/21.webp',
      ingredients: [
        'Chicken (boneless, skinless)',
        'Green Curry Paste',
        'Curry powder',
        'Onion',
        'Garlic',
        'Ginger',
        'Coconut milk',
        'Tomato',
        'Salt',
      ],
      preparationSteps: [
        'Sauté onion, garlic, and ginger...',
        'Add chicken and brown...',
        'Stir in curry powder...',
        'Add tomato and coconut milk...',
        'Simmer until chicken is cooked...',
      ],
      preperationTime: 70,
    ),
    Recipe(
      name: 'Aloo Keema',
      imageUrl:
          'assets/13.webp', // Replace with the actual image URL or asset path
      ingredients: [
        '250g minced meat (beef or lamb)',
        '2 medium-sized potatoes, peeled and cubed',
        '1 large onion, finely chopped',
        '2 tomatoes, chopped',
        '2 green chilies, sliced (adjust to taste)',
        '1 tsp ginger paste',
        '1 tsp garlic paste',
        '1 tsp cumin seeds',
        '1 tsp red chili powder (adjust to taste)',
        '1/2 tsp turmeric powder',
        '1 tsp garam masala',
        'Salt to taste',
        'Fresh cilantro (coriander leaves) for garnish',
        'Oil for cooking',
      ],
      preparationSteps: [
        'Heat oil in a pan or pressure cooker.',
        'Add cumin seeds and let them splutter.',
        'Add chopped onions and sauté until golden brown.',
        'Add ginger and garlic paste. Sauté for a minute.',
        'Add minced meat and cook until it changes color.',
        'Add red chili powder, turmeric powder, and salt. Mix well.',
        'Add chopped tomatoes and cook until they soften.',
        'Add cubed potatoes and green chilies. Mix everything together.',
        'Add water (about 1 cup) and cover the pan or pressure cooker.',
        'Cook until the potatoes are tender and the meat is fully cooked (about 15-20 minutes).',
        'Sprinkle garam masala and garnish with fresh cilantro.',
        'Serve hot with naan, roti, or rice.',
      ],
      preperationTime: 40, // in minutes
    ),
    Recipe(
      name: 'Spinach and Feta Stuffed Chicken',
      imageUrl: 'assets/5.webp',
      ingredients: [
        'Chicken breasts',
        'Spinach',
        'Feta cheese',
        'Garlic',
        'Salt',
        'Pepper'
      ],
      preparationSteps: [
        'Butterfly chicken breasts...',
        'Stuff with spinach and feta...',
        'Season with garlic, salt, and pepper...',
        'Bake in the oven...',
        'Serve warm...'
      ],
      preperationTime: 30,
    ),
    Recipe(
      name: 'Chicken Biryani',
      imageUrl: 'assets/11.webp',
      ingredients: [
        'Tomatoes',
        'Basmati Rice',
        'chicken',
        'Yogurt',
        'Biryani Masala',
        'Salt',
        'Pepper',
        'Ghee'
      ],
      preparationSteps: [
        'avocadotoast.png',
        'Arrange on a plate with basil leaves...',
        'Drizzle with olive oil and balsamic glaze...',
        'Season with salt and pepper...',
        'Enjoy!'
      ],
      preperationTime: 45,
    ),
    Recipe(
      name: 'chicken Soup',
      imageUrl: 'assets/16.webp',
      ingredients: [
        'Tomatoes',
        'Egg',
        'Chicken',
        'Onion',
        'Garlic',
        'Vegetable broth',
        'Olive oil',
        'Salt',
        'Pepper'
      ],
      preparationSteps: [
        'Sauté onion and garlic.',
        'Add chopped tomatoes and cook until soft.',
        'Add vegetable broth and rice, and cook until rice is tender.',
      ],
      preperationTime: 25,
    ),
    Recipe(
      name: 'Classic Margherita Pizza',
      imageUrl: 'assets/1.webp',
      ingredients: [
        'Pizza dough',
        'Tomato sauce',
        'Fresh mozzarella',
        'Fresh basil leaves',
        'Olive oil',
        'Salt'
      ],
      preparationSteps: [
        'Roll out pizza dough...',
        'Spread tomato sauce...',
        'Top with mozzarella and basil...',
        'Bake until crust is golden...',
        'Drizzle with olive oil...'
      ],
      preperationTime: 60,
    ),
    Recipe(
      name: 'Chapli Kabab',
      imageUrl:
          'assets/14.webp', // Replace with the actual image URL or asset path
      ingredients: [
        '500g ground meat (beef or lamb)',
        '1 large onion, finely chopped',
        '2 tomatoes, chopped',
        '2 green chilies, finely chopped (adjust to taste)',
        '1 tsp ginger paste',
        '1 tsp garlic paste',
        '1 tsp ground coriander',
        '1 tsp ground cumin',
        '1/2 tsp red chili flakes (adjust to taste)',
        '1/2 tsp garam masala',
        '1 egg',
        '1/2 cup chopped fresh cilantro (coriander leaves)',
        'Salt to taste',
        'Oil for frying',
      ],
      preparationSteps: [
        'In a large bowl, mix all the ingredients together (except oil).',
        'Shape the mixture into flat, round patties (kababs).',
        'Heat oil in a frying pan over medium heat.',
        'Fry the kababs until golden brown and cooked through (about 4-5 minutes per side).',
        'Serve hot with naan, raita, and salad.',
      ],
      preperationTime: 60,
    ),
    Recipe(
      name: 'Tiramisu',
      imageUrl: 'assets/23.webp',
      ingredients: [
        'Ladyfingers',
        'Espresso coffee',
        'Mascarpone cheese',
        'Eggs',
        'Sugar',
        'Cocoa powder'
      ],
      preparationSteps: [
        'Dip ladyfingers in espresso...',
        'Layer with mascarpone mixture...',
        'Repeat layers...',
        'Dust with cocoa powder...',
        'Refrigerate and serve chilled...'
      ],
      preperationTime: 10,
    ),
    Recipe(
      name: 'Vegetable Stir-Fry',
      imageUrl: 'assets/2.webp',
      ingredients: [
        'Broccoli',
        'Bell peppers',
        'Carrots',
        'Snow peas',
        'Soy sauce',
        'Garlic',
        'Ginger',
        'Sesame oil'
      ],
      preparationSteps: [
        'Chop vegetables...',
        'Heat oil in a wok...',
        'Stir-fry vegetables...',
        'Add soy sauce and seasonings...',
        'Serve hot...'
      ],
      preperationTime: 25,
    ),
    Recipe(
      name: 'Pasta Aglio e Olio',
      imageUrl: 'assets/10.webp',
      ingredients: [
        'Spaghetti',
        'Garlic',
        'Red pepper flakes',
        'Olive oil',
        'Parsley',
        'Parmesan cheese (optional)',
      ],
      preparationSteps: [
        'Cook spaghetti according to package instructions.',
        'Sauté minced garlic and red pepper flakes in olive oil until fragrant.',
        'Toss cooked spaghetti in the garlic-infused oil.',
        'Garnish with chopped parsley and grated Parmesan cheese (if desired).',
      ],
      preperationTime: 38,
    ),
    Recipe(
      name: 'Berry Smoothie',
      imageUrl: 'assets/25.webp',
      ingredients: [
        'Mixed berries (strawberries, blueberries, raspberries)',
        'Greek yogurt',
        'Honey',
        'Milk',
        'Ice cubes'
      ],
      preparationSteps: [
        'Blend berries, yogurt, honey, and milk...',
        'Add ice cubes and blend until smooth...',
        'Serve chilled...'
      ],
      preperationTime: 30,
    ),
    Recipe(
      name: 'Avocado Salad',
      imageUrl: 'assets/6.webp',
      ingredients: [
        'Ripe avocado',
        'Whole-grain bread',
        'Lemon juice',
        'Salt and pepper',
        'Optional toppings: sliced tomatoes, red pepper flakes, poached egg',
      ],
      preparationSteps: [
        'Mash the avocado with lemon juice, salt, and pepper.',
        'Toast the bread slices.',
        'Spread the mashed avocado on the toast.',
        'Add your favorite toppings.',
      ],
      preperationTime: 10,
    ),
    Recipe(
      name: 'Sheekh Kabab',
      imageUrl:
          'assets/24.webp', // Replace with the actual image URL or asset path
      ingredients: [
        '500g ground meat (beef or lamb)',
        '1 large onion, finely chopped',
        '2 green chilies, finely chopped (adjust to taste)',
        '1 tsp ginger paste',
        '1 tsp garlic paste',
        '1 tsp ground coriander',
        '1 tsp ground cumin',
        '1/2 tsp red chili flakes (adjust to taste)',
        '1/2 tsp garam masala',
        'Salt to taste',
        '1/4 cup chopped fresh cilantro (coriander leaves)',
        '1/4 cup chopped fresh mint leaves',
        '1 egg (optional, for binding)',
        'Oil for grilling',
      ],
      preparationSteps: [
        'In a large bowl, mix all the ingredients together (except oil).',
        'Shape the mixture into long, cylindrical kababs.',
        'Thread the kababs onto skewers.',
        'Preheat a grill or barbecue.',
        'Brush the kababs with oil and grill them until cooked and charred (about 10-15 minutes per side).',
        'Serve hot with mint chutney and naan.',
      ],
      preperationTime: 70,
    ),
  ];

// Search Query

  String searchQuery = '';

  @override
  Widget build(BuildContext context) {
    List<Recipe> filteredRecipes = recipes
        .where((recipe) =>
            recipe.name.toLowerCase().contains(searchQuery.toLowerCase()))
        .toList();
    filteredRecipes
        .sort((a, b) => a.preperationTime.compareTo(b.preperationTime));

    return Scaffold(
      appBar: AppBar(
        title: const Text("Tayyaba's Kitchen"),
        centerTitle: true,
        backgroundColor: Color.fromARGB(239, 237, 149, 7),
      ),
      body: Padding(
        padding: const EdgeInsets.all(16.0),
        child: Column(
          children: [
            TextField(
              decoration: const InputDecoration(
                labelText: 'Search Recipes',
                border: OutlineInputBorder(),
              ),
              onChanged: (value) {
                setState(() {
                  searchQuery = value;
                });
              },
            ),
            const SizedBox(height: 16),
            Expanded(
              child: ListView.separated(
                itemCount: filteredRecipes.length,
                itemBuilder: (context, index) {
                  return RecipeCard(recipe: filteredRecipes[index]);
                },
                separatorBuilder: (context, index) {
                  return const Divider();
                },
              ),
            ),
          ],
        ),
      ),
    );
  }
}

//Pop up Message
class RecipeCard extends StatelessWidget {
  final Recipe recipe;

  const RecipeCard({required this.recipe});

  void _showRecipeOptions(BuildContext context) {
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          title: Text(recipe.name),
          content: Text('Would you like to view details or share this recipe?'),
          actions: <Widget>[
            TextButton(
              onPressed: () {
                Navigator.pop(context);
                Navigator.push(
                  context,
                  MaterialPageRoute(
                    builder: (context) => RecipeDetailsScreen(recipe: recipe),
                  ),
                );
              },
              child: Text('View Details'),
            ),
            TextButton(
              onPressed: () {
                Navigator.pop(context);
                // Implement sharing functionality here
              },
              child: Text('Share'),
            ),
            TextButton(
              onPressed: () {
                Navigator.pop(context);
              },
              child: Text('Cancel'),
            ),
          ],
        );
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    return Card(
      elevation: 4,
      child: ListTile(
        leading: Image.asset(recipe.imageUrl,
            width: 50, height: 50, fit: BoxFit.cover),
        title: Text(recipe.name),
        subtitle: Text('Prep Time: ${recipe.preperationTime} minutes'),
        onTap: () => _showRecipeOptions(context),
      ),
    );
  }
}

class RecipeDetailsScreen extends StatelessWidget {
  final Recipe recipe;

  const RecipeDetailsScreen({required this.recipe});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text(recipe.name)),
      body: SingleChildScrollView(
        padding: const EdgeInsets.all(16.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Image.asset(recipe.imageUrl,
                width: double.infinity, height: 200, fit: BoxFit.cover),
            const SizedBox(height: 16),
            Text('Ingredients:', style: TextStyle(fontWeight: FontWeight.bold)),
            Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: recipe.ingredients.map((ingredient) {
                return Text('- $ingredient');
              }).toList(),
            ),
            const SizedBox(height: 16),
            Text('Preparation Steps:',
                style: TextStyle(fontWeight: FontWeight.bold)),
            Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: recipe.preparationSteps.map((step) {
                return Text('- $step');
              }).toList(),
            ),
            const SizedBox(height: 16),
            Text("Prep Time: ${recipe.preperationTime} minutes"),
          ],
        ),
      ),
    );
  }
}
