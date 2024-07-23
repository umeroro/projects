import 'package:flutter/material.dart';
import 'package:flutter_rating_bar/flutter_rating_bar.dart';
import 'package:app/main.dart';

class RecipeDetailsScreen extends StatefulWidget {
  final Recipe recipe;

  const RecipeDetailsScreen({required this.recipe});

  @override
  _RecipeDetailsScreenState createState() => _RecipeDetailsScreenState();
}

class _RecipeDetailsScreenState extends State<RecipeDetailsScreen> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text(widget.recipe.name)),
      body: SingleChildScrollView(
        padding: const EdgeInsets.all(16.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Image.asset(widget.recipe.imageUrl,
                width: double.infinity, height: 200, fit: BoxFit.cover),
            const SizedBox(height: 16),
            Text('Ingredients:', style: TextStyle(fontWeight: FontWeight.bold)),
            Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: widget.recipe.ingredients.map((ingredient) {
                return Text('- $ingredient');
              }).toList(),
            ),
            const SizedBox(height: 16),
            Text('Preparation Steps:',
                style: TextStyle(fontWeight: FontWeight.bold)),
            Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: widget.recipe.preparationSteps.map((step) {
                return Text('- $step');
              }).toList(),
            ),
            const SizedBox(height: 16),
            Text("Prep Time: ${widget.recipe.preperationTime} minutes"),
            const SizedBox(height: 16),
            Text('Rate this Recipe:',
                style: TextStyle(fontWeight: FontWeight.bold)),
            RatingBar.builder(
              initialRating: widget.recipe.rating,
              minRating: 1,
              direction: Axis.horizontal,
              allowHalfRating: true,
              itemCount: 5,
              itemPadding: EdgeInsets.symmetric(horizontal: 4.0),
              itemBuilder: (context, _) => Icon(
                Icons.star,
                color: Colors.amber,
              ),
              onRatingUpdate: (rating) {
                setState(() {
                  widget.recipe.rating = rating;
                });
              },
            ),
            const SizedBox(height: 16),
            Text('Your Rating: ${widget.recipe.rating}',
                style: TextStyle(fontWeight: FontWeight.bold)),
          ],
        ),
      ),
    );
  }
}
